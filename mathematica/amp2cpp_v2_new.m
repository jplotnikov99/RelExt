(* ::Package:: *)

(*directory = ToString[$CommandLine[[4]]] <> "/FA_modfiles";*)
directory = "/home/johann/Documents/Projects/DM/darktree_new/md_vdm/FR_modfiles" <> "/FA_modfiles";
(*directory = "/home/rodrigo/Downloads/darktree_new/md_cpvdm/FR_modfiles"<>"/FA_modfiles";*)
(*directory ="/users/tp/kelyaouti/Desktop/WorkInProgress/darktree_new/md_BDM/FR_modfiles/"<>"FA_modfiles";*)
Print[directory]

(*start FA and FC*)
If[$FrontEnd === Null, $FeynCalcStartupMessages = False]; 
If[$Notebooks === False, $FeynCalcStartupMessages = False]; 
$LoadAddOns = {"FeynArts"}; 
Get["FeynCalc`"];
$FAVerbose = 0; 
FCCheckVersion[9, 3, 1]; 
FAPatch[PatchModelsOnly -> True, FAModelsDirectory->directory]


(*name of FA mod files*)
modelname=directory<>"/FA_modfiles";
(*Loads the model*)
FAPatch[modelname];
InitializeModel[modelname, GenericModel->modelname]
Print["Model initialized"]

directory=ParentDirectory[ParentDirectory[directory]]<>"/";
Print[directory]


mathlabel= "///////////////////CODE GENERATED VIA MATHEMATICA///////////////////\n\n";
subrule = {FCGV[x_]:>ToExpression[x]};
gcsub=M$FACouplings;
(*SetOptions[Polarization, Transversality->True];*)


(*****************)
(*AMPLITUDES PART*)
(*****************)


GSlist = FR$GoldstoneList;


(*create list with particle identifiers, masses and names according to FA mod files*)
particlelist = {M$ClassesDescription[[#,1]], TheMass[M$ClassesDescription[[#,1]]], ToString[TheLabel[M$ClassesDescription[[#,1]]]]}& /@Range[Length[M$ClassesDescription]];
Do[
(*adds antiparticles to particlelist*)
	If[SelfConjugate/.M$ClassesDescription[[i1,2]][[1]],
		Continue[],
		 AppendTo[particlelist, {-M$ClassesDescription[[i1,1]], TheMass[M$ClassesDescription[[i1,1]]], 
		 (*change antiparticle name by capitalizing particle name, unless particle name is already capitalized*)
		 If[UpperCaseQ[ToString[TheLabel[M$ClassesDescription[[i1,1]]]]], ToLowerCase[ToString[TheLabel[M$ClassesDescription[[i1,1]]]]], ToUpperCase[ToString[TheLabel[M$ClassesDescription[[i1,1]]]]]]}]
	],
{i1, Length[M$ClassesDescription]}
];
prttemp={};
Do[
	If[StringContainsQ[ToString[particlelist[[i1,1]]],"U"] || MemberQ[GSlist,particlelist[[i1,1]]] || MemberQ[GSlist,-particlelist[[i1,1]]],
		Continue[],
		AppendTo[prttemp,particlelist[[i1]]]	
	]
,{i1,Length[particlelist]}]
particlelist = prttemp;
Clear[prttemp];


(*Get masses of DS particles and all particle with widths from CalcHep files, and adds PDGs to particlelist*)
getWidthsandDSMasses[]:=
Block[{prtfile,prtlist},
prtfile = Import[directory<>"FR_modfiles/CH_modfiles/prtcls1.mdl", "Table", "FieldSeparators"->"|"];
prtlist = Map[StringDelete[StringReplace[ToString[#], "%"->""], WhitespaceCharacter]&, prtfile, {-1}][[4;;, {2,6,7,4}]];
chmass = Select[prtlist, StringTake[#[[1]], 1] == "~" &][[All, 2]];
widths = {};
For[i=1, i<= Length[prtlist],i++,
	AppendTo[particlelist[[i]],prtlist[[i,4]]];
    If[prtlist[[i,3]]!="0",
        AppendTo[widths,ToExpression[prtlist[[i,2]]]]; 
        AppendTo[widths,ToExpression[StringReplace[prtlist[[i,3]],"!"->""]]]
    ]
];
Do[
	AppendTo[particlelist[[i1]],0];
,{i1,Length[prtlist]+1,Length[particlelist]}]
]
getWidthsandDSMasses[];


(*particle identifier to PDG*)
IDtoPDG[ID_]:=
Block[{NID},
	NID=ID/.-x_:>x;
	NID=NID/.F[x_,{y_}]:>F[x];
	Return[particlelist[[Position[particlelist,NID][[1,1]],4]]];
]
(*PDG to particle identifier*)
PDGtoID[PDG_]:=
Block[{},
	Return[particlelist[[Position[particlelist[[All,4]],PDG][[1,1]],1]]];
]


(*function to determine the degrees of freedom for a given particle*)
determineDof[pID_]:=
Block[{fac=1, str, type},
	str=ToString[pID/.-x_:>x];
	If[StringContainsQ[ToString[Indices[pID]],"Col"],fac=fac*3];
	If[StringContainsQ[ToString[Indices[pID]],"Glu"],fac=fac*8];
	If[StringContainsQ[ToString[Indices[pID]],"col"],fac=fac*3];
	If[StringContainsQ[ToString[Indices[pID]],"glu"],fac=fac*8];
	type=StringPart[str,1];
	Which[
			type==="V",
			If[PossibleZeroQ[TheMass[pID]],
				fac=fac*2,(* 2 polarizations for massless vector bosons *)
				fac=fac*3;(* 3 polarizations for massive vector bosons *)
			],
			type==="F",
			fac=fac*2,(* spin degrees of freedom *)
			type==="S",
			fac=fac*1;(* scalar degrees of freedom*)
		];
	Return[fac];
]


(*create list with dark sector (DS) particles; names of DS particles must have a tilde at the start in the FR model files, in ParticleName*)
dslist={};
For[i = 1, i <= Length[particlelist], i++, 
	For[j=1, j<=Length[chmass],j++,If[ToString[particlelist[[i,2]]]==chmass[[j]],AppendTo[dslist,particlelist[[i,1]]]]]];
dslist = SortBy[dslist, #/.F_[x_]:>-F[x]&];
dsmass=Table[TheMass[dslist[[i]]],{i,Length[dslist]}];(*masses of DS fields*)
dsnames = Table[Select[particlelist, #[[1]]== dslist[[i]]&][[1,3]],{i,Length[dslist]}];(*name of DS fields*)
dsDof=Table[determineDof[dslist[[i]]],{i,Length[dslist]}]; (*degrees of freedom for DS fields*)


(*list with every 2 to 2 tree-level process with dark sector particles in the initial state, and in the final state any particle*)
topologie = CreateTopologies[0, 2 -> 2];
list = {{S,S}, {S,V}, {S,F}, {V,V}, {V,F}, {F,F}}; (*final states list*)
alldiags = {};

Do[
Feynmangraph = InsertFields[topologie, {dslist[[j]], dslist[[k]]} -> list[[i]], 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, 
ExcludeParticles -> {U}];
AppendTo[alldiags, Feynmangraph];
, {j, Length[dslist]}, {k, j, Length[dslist]}, {i, Length[list]}]


(*exclude goldstone and DS particles from final states*)
Do[
	Do[
		alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#, Field[3] -> GSlist[[j]]]&]; alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#, Field[4] -> GSlist[[j]]]&];
		alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#, Field[3] -> -GSlist[[j]]]&]; alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#, Field[4] -> -GSlist[[j]]]&];
	,{j,Length[GSlist]}];

Table[ alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#/.F_[x_,{y_}]:>F[x], Field[3] -> dslist[[j]]]&] , {j, Length[dslist]}];
Table[ alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#/.F_[x_,{y_}]:>F[x], Field[4] -> dslist[[j]]]&] , {j, Length[dslist]}];
, {i, Length[alldiags]}]


(*groups the diagrams according to the process*)
diagsgrouped = Flatten[Table[DiagramGrouping[alldiags[[i]], ({Field[1] /. #1[[1]], Field[2] /. #1[[2]], Field[3] /. #1[[3]], Field[4] /. #1[[4]]} &)], {i,Length[alldiags]}],1];


(*removes redundant processes from diagsgrouped list*)
removeDuplicate[]:=
Block[{remelem = {}, templist={}},

templist = diagsgrouped[[All, 1]]/.F_[x_,{y_}]:>F[x];

(*remove charge conjugate initial states*)
Do[
If[
	templist[[i, {1,2}]] == -templist[[j, {1,2}]] || 
	(templist[[i, 1]] == -templist[[j, 1]] && templist[[i, 2]] == templist[[j, 2]] && SelfConjugate[templist[[i, 2]]]) || 
	(templist[[i, 2]] == -templist[[j, 2]] && templist[[i, 1]] == templist[[j, 1]] && SelfConjugate[templist[[i, 1]]]) ||
	(templist[[i, 2]] == templist[[j, 1]] && templist[[i, 1]] == -templist[[j, 2]] && SelfConjugate[templist[[i, 2]]])
, AppendTo[remelem, {j}]]
, {i, 1, Length[templist]-1}, {j, i+1, Length[templist]}];

(*remove repeated final states for the same initial state*)
Do[
If[
	templist[[i, 3]] == templist[[j, 4]] && templist[[i,  4]] == templist[[j, 3]] &&(templist[[i, {1,2}]] == templist[[j, {1,2}]])
, AppendTo[remelem, {j}]]
, {i, 1, Length[templist]-1}, {j, i+1, Length[templist]}];

(*special case for 2 different charged or notSelfConjugate particles in initial state;*)
Do[
If[ 
	(Not[SelfConjugate[templist[[i, 1]]]] && Not[SelfConjugate[templist[[i, 2]]]]) && 
	(ToString[templist[[i, 1]]] != ToString[templist[[i, 2]]]) &&
	(ToString[templist[[i, 1]]] != ToString[-templist[[i, 2]]]) &&
	(templist[[i, 2]] == -templist[[j, 1]] && templist[[i, 1]] == -templist[[j, 2]]) 
, AppendTo[remelem, {j}]]
, {i, 1, Length[templist]-1}, {j, i+1, Length[templist]}];

remelem = DeleteDuplicates[remelem];
(*Final list with all the relevant 2to2 processes for freeze-out*)
listofprocs = Delete[diagsgrouped[[All, 1]], remelem];
]
removeDuplicate[];


breakdownAmp[proccess_, amp_]:=
Block[{numerator,denominator,coefficient={},mandels={},temp1,temp2},
	numerator = Table[FullSimplify[Numerator[amp[[it]]]],{it,Length[amp]}];
	denominator =Table[Denominator[amp[[it]]],{it,Length[amp]}];
	Do[
		temp1 = 1;
		temp2 = 1;
		Do[
			If[And[Length[placeholder*numerator[[it]]]===2,Length[numerator[[it]]]>=2],
				AppendTo[tokens,numerator[[it]]];
				temp1*=(numerator[[it]]/.tokensubs);
				Break[],
				
				If[FreeQ[numerator[[it,jt]],Alternatives@@{Spinor[__],Pair[__],Momentum[__],Complex[__,__],SUNFDelta[__,__],SUNDelta[__,__]
				   , SUNTF[__,__,__], SUNFIndex[__], SUNIndex[__], List[__], SUNF[__,__,__]}], 
					AppendTo[tokens,numerator[[it,jt]]];
					temp1*=(numerator[[it,jt]]/.tokensubs),
					temp2*=numerator[[it,jt]];
				];
			]
		,{jt,Length[numerator[[it]]]}];
		AppendTo[coefficient, temp1];
		AppendTo[mandels, temp2];
	,{it,Length[numerator]}];
	Do[
		If[Length[denominator[[it]]]==0,
			If[FreeQ[denominator[[it]],Alternatives @@ {s,t,u}],
				AppendTo[tokens,denominator[[it]]];
				coefficient[[it]]/=denominator[[it]],
				mandels[[it]]/=denominator[[it]];
			];
		];
		Do[
			If[And[Length[placeholder*denominator[[it]]]===2,Length[denominator[[it]]]===2],
				mandels[[it]]/=denominator[[it]];
				Break[],
				If[FreeQ[denominator[[it,jt]],Alternatives @@ {s,t,u}],
					AppendTo[tokens,denominator[[it,jt]]];
					coefficient[[it]]/=(denominator[[it,jt]]/.tokensubs),
					mandels[[it]]/=denominator[[it,jt]];
				];
			];
		,{jt,Length[denominator[[it]]]}]
	,{it,Length[denominator]}];
	tokens=DeleteDuplicates[tokens];
	AppendTo[coefficientlist,coefficient];
	AppendTo[mandellist,mandels];
]


(*computation of the amplitudes for all the 2to2 processes in listofprocs*)
calcAmps[]:=
Block[{},
ampslist = {};
coefficientlist = {};
mandellist = {};
tokens={};
mi = {};
mj = {};
mk = {};
ml = {};
foutlist = {};

Do[
k = listofprocs[[i,3]];
l = listofprocs[[i,4]];
Feynmangraph = InsertFields[topologie, {listofprocs[[i,1]], listofprocs[[i,2]]} -> {k, l}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
(*Paint[Feynmangraph];*)
FCClearScalarProducts[];
SetMandelstam[s, t, u, p1, p2, -p3, -p4, TheMass[listofprocs[[i,1]]], TheMass[listofprocs[[i,2]]], TheMass[listofprocs[[i,3]]], TheMass[listofprocs[[i,4]]] ];
amp = FCFAConvert[CreateFeynAmp[Feynmangraph], IncomingMomenta -> {p1, p2}, OutgoingMomenta -> {p3, p4}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> True,
SMP -> False, Contract -> True, DropSumOver -> True]/.gcsub/.subrule//Collect[#,FeynAmpDenominator[_]]&//FeynAmpDenominatorExplicit//DiracSubstitute67[#]&//DotSimplify[#]&;

(*if there are processes violating some internal quantum number (charge, lepton number, etc), change listofprocs*)
If[
Length[amp] == 0,
(*swap particle for antiparticle; if both are notSelfConjugate, swap both*)
k = If[!SelfConjugate[listofprocs[[i,3]]], -listofprocs[[i,3]], listofprocs[[i,3]]];
l = If[!SelfConjugate[listofprocs[[i,4]]], -listofprocs[[i,4]], listofprocs[[i,4]]];
Feynmangraph = InsertFields[topologie, {listofprocs[[i,1]], listofprocs[[i,2]]} -> {k, l}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
SetMandelstam[s, t, u, p1, p2, -p3, -p4, TheMass[listofprocs[[i,1]]], TheMass[listofprocs[[i,2]]], TheMass[listofprocs[[i,3]]], TheMass[listofprocs[[i,4]]] ];
amp = FCFAConvert[CreateFeynAmp[Feynmangraph], IncomingMomenta -> {p1, p2}, OutgoingMomenta -> {p3, p4}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> True,
SMP -> False, Contract -> True, DropSumOver -> True]/.gcsub/.subrule//Collect[#,FeynAmpDenominator[_]]&//FeynAmpDenominatorExplicit//DiracSubstitute67[#]&//DotSimplify[#]&;
];

If[
Length[amp] == 0 && !SelfConjugate[listofprocs[[i,3]]] && !SelfConjugate[listofprocs[[i,4]]],
(*if both are notSelfConjugate, swap only one*)
k = -listofprocs[[i,3]];
l =  listofprocs[[i,4]];
Feynmangraph = InsertFields[topologie, {listofprocs[[i,1]], listofprocs[[i,2]]} -> {k, l}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
SetMandelstam[s, t, u, p1, p2, -p3, -p4, TheMass[listofprocs[[i,1]]], TheMass[listofprocs[[i,2]]], TheMass[listofprocs[[i,3]]], TheMass[listofprocs[[i,4]]] ];
amp = FCFAConvert[CreateFeynAmp[Feynmangraph], IncomingMomenta -> {p1, p2}, OutgoingMomenta -> {p3, p4}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> True,
SMP -> False, Contract -> True, DropSumOver -> True]/.gcsub/.subrule//Collect[#,FeynAmpDenominator[_]]&//FeynAmpDenominatorExplicit//DiracSubstitute67[#]&//DotSimplify[#]&;
];

If[
Length[amp] == 0 && !SelfConjugate[listofprocs[[i,3]]] && !SelfConjugate[listofprocs[[i,4]]],
(*if both are notSelfConjugate, swap only one*)
k =  listofprocs[[i,3]];
l = -listofprocs[[i,4]];
Feynmangraph = InsertFields[topologie, {listofprocs[[i,1]], listofprocs[[i,2]]} -> {k, l}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
SetMandelstam[s, t, u, p1, p2, -p3, -p4, TheMass[listofprocs[[i,1]]], TheMass[listofprocs[[i,2]]], TheMass[listofprocs[[i,3]]], TheMass[listofprocs[[i,4]]] ];
amp = FCFAConvert[CreateFeynAmp[Feynmangraph], IncomingMomenta -> {p1, p2}, OutgoingMomenta -> {p3, p4}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> True,
SMP -> False, Contract -> True, DropSumOver -> True]/.gcsub/.subrule//Collect[#,FeynAmpDenominator[_]]&//FeynAmpDenominatorExplicit//DiracSubstitute67[#]&//DotSimplify[#]&;
];

breakdownAmp[listofprocs[[i]],amp];		
AppendTo[ampslist, amp];
AppendTo[mi, TheMass[listofprocs[[i,1]]]];
AppendTo[mj, TheMass[listofprocs[[i,2]]]];
AppendTo[mk, TheMass[listofprocs[[i,3]]]];
AppendTo[ml, TheMass[listofprocs[[i,4]]]];
AppendTo[foutlist, {listofprocs[[i,1]], listofprocs[[i,2]], k, l}];
,{i,1,Length[listofprocs]}]
]


tokensubs = {};
tokenreverse = {};


(*function to tokenize coefficients appearing several times in the amplitudes*)
tokenize[]:=
Block[{tokenID},
	Do[
		tokenID=StringJoin["token",ToString[it]];
		AppendTo[tokensubs,tokens[[it]]->ToExpression[tokenID]];
		AppendTo[tokenreverse,ToExpression[tokenID]->tokens[[it]]];
	,{it,Length[tokens]}]
]


(*foutlist and ampslist store the freeze-out processes and respective amplitudes*)
calcAmps[];
tokenize[];
calcAmps[];


widthlist=widths;
widthsub={pat : HoldPattern[Spinor[___,___]]:> pat};


(*functions to check for s-channels, change denominator by including the width and save it*)
addwidthsub[den_]:=
Block[{massterm},
	Do[
		massterm=widthlist[[2*i-1]]//ToString;
		If[StringContainsQ[den,massterm],
			massterm=ToExpression[massterm];
			AppendTo[widthsub,s-massterm^2->s-massterm^2-I*widthlist[[2*i]]*widthlist[[2*i-1]]];
			widthlist=Delete[widthlist, {{2*i-1},{2*i}}];
			Break[];
		]
	,{i,Length[widthlist]/2}]
]

checkdenpol[amp_]:= 
Block[{den},
	Do[
		den = CForm[Denominator[amp[[i1]]]]//ToString;
		If[!FreeQ[amp[[i1]], s],
			addwidthsub[den]
		]
	,{i1,Length[amp]}]
	
]

Do[
	checkdenpol[mandellist[[i2]]]
,{i2,Length[mandellist]}]


(*list with masses and widths of s-channel mediators*)
relevantWs = {};
Do[
	If[!MemberQ[widthlist,widths[[i1]]],
		AppendTo[relevantWs,widths[[i1]]]
	]
,{i1,Length[widths]}]
dl = Length[relevantWs]/2*3;


(*function to determine symmetry factors appearing in amplitude squared*)
determinefac[sts_, Nini_]:=
Block[{fac=1,q1},
	Do[
		q1=StringPart[ToString[sts[[i1]]/.-x_:>x],1];
		Which[
			q1==="V",
			Continue[],
			q1==="F",
			If[PossibleZeroQ[TheMass[sts[[i1]]]],
				fac=fac*2,(* revert 2 from DoPolarizationSums *)
				fac=fac*3; (* revert 3 from DoPolarizationSums*)
			],
			q1==="S",
			If[PossibleZeroQ[TheMass[sts[[i1]]]],
				fac=fac*2,(* revert 2 from DoPolarizationSums *)
				fac=fac*3; (* revert 3 from DoPolarizationSums*)
			]
		]
	,{i1,Length[sts]}];
	Return[fac]
]


(*function to compute amplitude squared*)
fastamp2[coeff_,mand_]:=
Block[{full={}, part},
	Do[
		If[it==jt,
			part=coeff[[it]]*coeff[[it]]*mand[[it]]*ComplexConjugate[mand[[jt]]];
			,
			part=2*coeff[[it]]*coeff[[jt]]*(mand[[it]]*ComplexConjugate[mand[[jt]]]);
		];
		AppendTo[full,part];
	,{it,Length[mand]},{jt,it,Length[mand]}];
Return[full]
]


(*list with all 2to2 freeze-out process names*)
templist2 = foutlist/.F_[x_,{y_}]:>F[x];
processname = Table[
Select[particlelist, #[[1]]== templist2[[i, 1]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2[[i, 2]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2[[i, 3]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2[[i, 4]]&][[1,3]], 
{i, Length[templist2]}];
processname=Table[ToExpression[StringReplace[ToString[processname[[i]]], {"~"->""}]], {i,Length[processname]}];


(*computation of the amplitudes^2 for all the 2to2 processes in foutlist*)
calcAmp2s:=
Block[{subdiagrams={},prefac,tamp2},
final = {};

(*AbsoluteTiming[*)
Do[
	subdiagrams = {};
	Print[ToString[processname[[i]]]];
	FCClearScalarProducts[];
	SetMandelstam[s, t, u, p1, p2, -p3, -p4, TheMass[foutlist[[i,1]]], TheMass[foutlist[[i,2]]], TheMass[foutlist[[i,3]]], TheMass[foutlist[[i,4]]]];
	tamp2 = fastamp2[coefficientlist[[i]],mandellist[[i]]/.widthsub];
	prefac= determinefac[foutlist[[i]], 2];
	Do[
		Which[
			TheMass[foutlist[[i,3]]] === 0 && !PossibleZeroQ[TheMass[foutlist[[i,4]]]],
			sub=tamp2[[i1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3, 0] & // DoPolarizationSums[#, p4] & 
			// DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
			
			!PossibleZeroQ[TheMass[foutlist[[i,3]]]] && TheMass[foutlist[[i,4]]] === 0, 
			sub=tamp2[[i1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3] & // DoPolarizationSums[#, p4,0] & 
			// DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
			
			TheMass[foutlist[[i,3]]] === 0 && TheMass[foutlist[[i,4]]] === 0,
			sub=tamp2[[i1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3,0] & // DoPolarizationSums[#, p4,0] & 
			// DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
			
			True,
			sub=tamp2[[i1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3] & // DoPolarizationSums[#, p4] & 
			// DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify
			];
			
		If[FreeQ[sub,I],
			AppendTo[subdiagrams,sub/.SUNN->3/.subrule/.Eps[___]->0//Simplify],
			Print["imaginary"];
			sub=sub/.SUNN->3/.subrule//Expand//FullSimplify;
			AppendTo[subdiagrams,sub]
		];
	,{i1,Length[tamp2]}];
	
AppendTo[final, Plus @@ subdiagrams];
, {i,1,Length[ampslist]}]
]


calcAmp2s[];


(*****************)
(***WIDTHS PART***)
(*****************)


(*lists with widths and FA identifiers of the relevant s-channel mediators for freeze-out*)
relevantWsfields = {};
relevantWidth = {};
Do[
	If[relevantWs[[i]]==(particlelist[[j,2]]/.subrule) && StringPart[ToString[particlelist[[j,1]]],1]!="-" && StringPart[ToString[particlelist[[j,1]]],1]!="U" 
	&& ToString[particlelist[[j,1]]]!=ToString[GSlist[[1]]] && ToString[particlelist[[j,1]]]!=ToString[GSlist[[2]]] && IDtoPDG[particlelist[[j,1]]]!="23" && 
	IDtoPDG[particlelist[[j,1]]]!="24",
		AppendTo[relevantWsfields, particlelist[[j,1]]];
		AppendTo[relevantWidth, relevantWs[[i+1]]];
	]
, {i, Length[relevantWs]}, {j, Length[particlelist]}
]
relevantWsfields = Complement[relevantWsfields,GSlist];
relevantWsfields = Complement[relevantWsfields,dslist];


(*list with every 1 to 2 tree-level decay*)
topologieDecay = CreateTopologies[0, 1 -> 2];
list = {{S,S}, {S,V}, {S,F}, {V,V}, {V,F}, {F,F}}; (*final states list*)
alldiagsDecay = {};

Do[
decays = InsertFields[topologieDecay, relevantWsfields[[j]] -> list[[i]], 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {U}];
AppendTo[alldiagsDecay, decays];
, {j, Length[relevantWsfields]},{i, Length[list]}]
alldiagsDecay;


(*exclude goldstone from final states*)
Do[
	Do[
		alldiagsDecay[[i]] = DiagramSelect[alldiagsDecay[[i]], FreeQ[#, Field[2] -> GSlist[[j]]]&]; alldiagsDecay[[i]] = DiagramSelect[alldiagsDecay[[i]], FreeQ[#, Field[3] -> GSlist[[j]]]&];
		alldiagsDecay[[i]] = DiagramSelect[alldiagsDecay[[i]], FreeQ[#, Field[2] -> -GSlist[[j]]]&]; alldiagsDecay[[i]] = DiagramSelect[alldiagsDecay[[i]], FreeQ[#, Field[3] -> -GSlist[[j]]]&];
	,{j,Length[GSlist]}];

, {i, Length[alldiagsDecay]}]


(*groups the diagrams according to the process*)
diagsgroupedDecay = Flatten[Table[DiagramGrouping[alldiagsDecay[[i]], ({Field[1] /. #1[[1]], Field[2] /. #1[[2]], Field[3] /. #1[[3]]} &)], {i,Length[alldiagsDecay]}],1];


(*removes redundant processes from diagsgroupedDecay list*)
removeDuplicateDecays[]:=
Block[{remelemDecays = {}, templist={}},

templist = diagsgroupedDecay[[All, 1]]/.F_[x_,{y_}]:>F[x];

(*remove repeated final states for the same initial state*)
Do[
If[
	templist[[i, 2]] == templist[[j, 3]] && templist[[i,  3]] == templist[[j, 2]] && (templist[[i, 1]] == templist[[j, 1]])
, AppendTo[remelemDecays, {j}]]
, {i, 1, Length[templist]-1}, {j, i+1, Length[templist]}];

remelemDecays = DeleteDuplicates[remelemDecays];
(*Final list with all the relevant 1to2 decays*)
finallistDecays = Delete[diagsgroupedDecay[[All, 1]], remelemDecays];
]
removeDuplicateDecays[];


breakdownAmpDecays[proccess_, amp_]:=
Block[{numerator,denominator,coefficient={},temp1,temp2},
	numerator = Table[FullSimplify[Numerator[amp[[it]]]],{it,Length[amp]}];
	denominator=Denominator[amp[[1]]];
	
	Do[
		temp1 = 1;
		temp2 = 1;
		Do[
			If[And[Length[placeholder*numerator[[it]]]===2,Length[numerator[[it]]]>=2],
				temp1*=(numerator[[it]]);
				Break[],
				If[FreeQ[numerator[[it,jt]],Alternatives@@{Spinor[__],Pair[__],Momentum[__],Complex[__,__],SUNFDelta[__,__],SUNDelta[__,__]
				   , SUNTF[__,__,__], SUNFIndex[__], SUNIndex[__], List[__], SUNF[__,__,__]}],
					temp1*=(numerator[[it,jt]]),
					temp2*=numerator[[it,jt]];
				];
			]
		,{jt,Length[numerator[[it]]]}];
		AppendTo[coefficient, temp1];
	,{it,Length[numerator]}];
	
	coefficient[[1]]=coefficient[[1]]/denominator;
	AppendTo[coefficientlist,coefficient];
]


(*function to determine type of particle appearing in the decay final states*)
gluonExistence = False;
determineType[sts_, ind_]:=
Block[{q1, PDG},
		PDG = IDtoPDG[sts[[ind]]];
		q1=StringPart[ToString[sts[[ind]]/.-x_:>x],1];
		If[PDG === "21", gluonExistence=True];
		Which[
			PDG === "23",
				q1 = "z_boson",
			PDG === "24",
				q1 = "w_boson",
			PDG === "3",
				q1 = "s_quark",
			PDG === "4",
				q1 = "c_quark",
			PDG === "5",
				q1 = "b_quark",
			PDG === "6",
				q1 = "t_quark",
			q1==="V",
				If[PossibleZeroQ[TheMass[sts[[ind]]]],
					q1 = "massless_vector_boson",
					q1 = "massive_vector_boson"
				],
			q1==="F",
				If[StringContainsQ[ToString[sts[[ind]]/.-x_:>x],"Col"],
					q1 = "quark",
					q1 = "lepton"
				],
			q1==="S",
				If[(PDG === "36") || (PDG === "46")||((StringLength[PDG]===3 && StringTake[PDG,1]==="3")),
					q1 = "pseudoscalar",
					q1 = "scalar"
				];
			];
			Return[q1];
]


(*computation of the decays for all the 1to2 processes in finallistDecays*)
calcAmpsDecays[]:=
Block[{},
decayslist = {};
foutlistDecays = {};
particleType = {};
coefficientlist = {};
couplings = {};

Do[
k = finallistDecays[[i,2]];
l = finallistDecays[[i,3]];
FeynmangraphDecays = InsertFields[topologieDecay, {finallistDecays[[i,1]]} -> {k, l}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
ampDecays = FCFAConvert[CreateFeynAmp[FeynmangraphDecays], IncomingMomenta -> {p1}, OutgoingMomenta -> {p2, p3}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> True,
SMP -> False, Contract -> True, DropSumOver -> True]/.gcsub/.subrule//DiracSubstitute67[#]&//DotSimplify[#]&//Simplify[#]&;

(*if there are processes violating some internal quantum number (charge, lepton number, etc), change finallistDecays*)
If[
Length[ampDecays] == 0, 
(*swap particle for antiparticle; if both are notSelfConjugate, swap both*)
k = If[!SelfConjugate[finallistDecays[[i,2]]], -finallistDecays[[i,2]], finallistDecays[[i,2]]];
l = If[!SelfConjugate[finallistDecays[[i,3]]], -finallistDecays[[i,3]], finallistDecays[[i,3]]];
FeynmangraphDecays = InsertFields[topologieDecay, {finallistDecays[[i,1]]} -> {k, l}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
ampDecays = FCFAConvert[CreateFeynAmp[FeynmangraphDecays], IncomingMomenta -> {p1}, OutgoingMomenta -> {p2, p3}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> True,
SMP -> False, Contract -> True, DropSumOver -> True]/.gcsub/.subrule//DiracSubstitute67[#]&//DotSimplify[#]&//Simplify[#]&;
];

If[
Length[ampDecays] == 0 && !SelfConjugate[finallistDecays[[i,2]]] && !SelfConjugate[finallistDecays[[i,3]]],
(*if both are notSelfConjugate, swap only one*)
k = -finallistDecays[[i,2]];
l =  finallistDecays[[i,3]];
FeynmangraphDecays = InsertFields[topologieDecay, {finallistDecays[[i,1]]} -> {k, l}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
ampDecays = FCFAConvert[CreateFeynAmp[FeynmangraphDecays], IncomingMomenta -> {p1}, OutgoingMomenta -> {p2, p3}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> True,
SMP -> False, Contract -> True, DropSumOver -> True]/.gcsub/.subrule//DiracSubstitute67[#]&//DotSimplify[#]&//Simplify[#]&;
];

If[
Length[ampDecays] == 0 && !SelfConjugate[finallistDecays[[i,2]]] && !SelfConjugate[finallistDecays[[i,3]]],
(*if both are notSelfConjugate, swap only one*)
k =  finallistDecays[[i,2]];
l = -finallistDecays[[i,3]];
FeynmangraphDecays = InsertFields[topologieDecay, {finallistDecays[[i,1]]} -> {k, l}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
ampDecays = FCFAConvert[CreateFeynAmp[FeynmangraphDecays], IncomingMomenta -> {p1}, OutgoingMomenta -> {p2, p3}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> True,
SMP -> False, Contract -> True, DropSumOver -> True]/.gcsub/.subrule//DiracSubstitute67[#]&//DotSimplify[#]&//Simplify[#]&;
];

If[
Length[ampDecays] == 0,
Continue[],
AppendTo[decayslist, ampDecays];
AppendTo[foutlistDecays, {finallistDecays[[i,1]], k, l}];
];
AppendTo[particleType, {determineType[foutlistDecays[[i]], 2], determineType[foutlistDecays[[i]], 3]}];
breakdownAmpDecays[foutlistDecays[[i]], decayslist[[i]]];
AppendTo[couplings, coefficientlist[[i]]*ComplexConjugate[coefficientlist[[i]]]];
, {i, 1, Length[finallistDecays]}]
]


calcAmpsDecays[];


(*computation of the amplitudes^2 for all the 1to2 processes in foutlistDecays*)
finalDecays = {};
tamp2 = {};

Do[
	(*if decaying particle is a scalar/pseudoscalar, set amplitude^2 to zero*)
	If[ 
	    (determineType[foutlistDecays[[i]], 1]=="scalar") || (determineType[foutlistDecays[[i]], 1]=="pseudoscalar"), 
		AppendTo[finalDecays, 0];
		Continue[];
	];
	
	FCClearScalarProducts[];
	SP[p1, p1] = TheMass[foutlistDecays[[i,1]]]^2; 
	SP[p2, p2] = TheMass[foutlistDecays[[i,2]]]^2; 
	SP[p3, p3] = TheMass[foutlistDecays[[i,3]]]^2;
	SP[p1, p2] = (TheMass[foutlistDecays[[i,1]]]^2 + TheMass[foutlistDecays[[i,2]]]^2 -TheMass[foutlistDecays[[i,3]]]^2)/2;
	SP[p1, p3] = (TheMass[foutlistDecays[[i,1]]]^2 + TheMass[foutlistDecays[[i,3]]]^2 -TheMass[foutlistDecays[[i,2]]]^2)/2;
	SP[p2, p3] = (TheMass[foutlistDecays[[i,1]]]^2 - TheMass[foutlistDecays[[i,2]]]^2 -TheMass[foutlistDecays[[i,3]]]^2)/2; 
	tamp2 = fastamp2[{1,1},decayslist[[i]]]; 
	prefac=determinefac[foutlistDecays[[i]],1];
	dof=determineDof[foutlistDecays[[i,1]]];
	Which[
		TheMass[foutlistDecays[[i,2]]] === 0 && !PossibleZeroQ[TheMass[foutlistDecays[[i,3]]]],
		sub=tamp2[[1]]/prefac/dof// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
		// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2,0] &// DoPolarizationSums[#, p3] & //DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
		
		!PossibleZeroQ[TheMass[foutlistDecays[[i,2]]]] && TheMass[foutlistDecays[[i,3]]] === 0, 
		sub=tamp2[[1]]/prefac/dof// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
		// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3,0] & //DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
		
		TheMass[foutlistDecays[[i,2]]] === 0 && TheMass[foutlistDecays[[i,3]]] === 0,
		sub=tamp2[[1]]/prefac/dof// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
		// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2,0] &// DoPolarizationSums[#, p3,0] & //DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
			
		True,
		sub=tamp2[[1]]/prefac/dof// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
		// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3] & //DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify
		];
			
	If[FreeQ[sub,I],
		sub = sub/.SUNN->3/.subrule/.Eps[___]->0//Simplify,
		Print["imaginary"];
		sub=sub/.SUNN->3/.subrule//Expand//FullSimplify;
	];	
	
	AppendTo[finalDecays, sub];
, {i, 1, Length[decayslist]}]


(*list of all partial widths*)
If[
Length[finalDecays]!=0,
pfinalDecays = Table[1/(2*TheMass[foutlistDecays[[i,1]]])*Sqrt[(TheMass[foutlistDecays[[i,1]]]^2 - (TheMass[foutlistDecays[[i,2]]]+TheMass[foutlistDecays[[i,3]]])^2)*(TheMass[foutlistDecays[[i,1]]]^2 - (TheMass[foutlistDecays[[i,2]]]-TheMass[foutlistDecays[[i,3]]])^2)], {i, 1, Length[foutlistDecays]}]/.subrule;
finalDecaysWidth = Table[pfinalDecays[[i]]/(32*Pi^2*TheMass[foutlistDecays[[i,1]]]^2)*finalDecays[[i]]*4*Pi, {i, 1, Length[foutlistDecays]}]/.subrule//FullSimplify;
]


(*************************)
(*MATHEMATICA TO CPP PART*)
(*************************)


(*useful functions for the cpp code*)
defer={x_^2:>Defer[x*x],x_^3:>Defer[x*x*x],x_^4:>Defer[x*x*x*x],x_^5:>Defer[x*x*x*x*x],x_^6:>Defer[x*x*x*x*x*x],x_^7:>Defer[x*x*x*x*x*x*x],
x_^8:>Defer[x*x*x*x*x*x*x*x],x_^-2:>1/Defer[x*x],x_^-3:>1/Defer[x*x*x],x_^-4:>1/Defer[x*x*x*x],x_^-5:>1/Defer[x*x*x*x*x],
x_^-6:>1/Defer[x*x*x*x*x*x],x_^-7:>1/Defer[x*x*x*x*x*x*x],x_^-8:>1/Defer[x*x*x*x*x*x*x*x]};

possibleini={};
possiblemasses={};
Do[
	If[MemberQ[possiblemasses,dsmass[[i]]*dsmass[[j]]],
		Continue[],
		AppendTo[possiblemasses,dsmass[[i]]*dsmass[[j]]];
		AppendTo[possibleini,ToString[dsnames[[i]]]<>ToString[dsnames[[j]]]];
	]
,{i,Length[dsnames]},{j,i,Length[dsnames]}]

Do[inifunc[i]={},{i,Length[possiblemasses]}]
Do[
	pos=Position[possiblemasses,mi[[i]]*mj[[i]]][[1,1]];
	AppendTo[inifunc[pos],{processname[[i]],mi[[i]],mj[[i]],mk[[i]],ml[[i]],templist2[[i,1]],templist2[[i,2]],templist2[[i,3]],templist2[[i,4]],final[[i]]}/.subrule]
,{i,Length[processname]}]


(*preparation of the files relevant to define the model parameters*)

(*external parameters*)
varsfile = Import[directory<>"FR_modfiles/CH_modfiles/vars1.mdl", "Table", "FieldSeparators"->"|"];
external = Map[StringDelete[StringReplace[ToString[#], "%"->""], WhitespaceCharacter]&, varsfile, {-1}][[4;;, {1,2}]];

(*internal parameters*)
funcfile = Import[directory<>"FR_modfiles/CH_modfiles/func1.mdl", "Table", "FieldSeparators"->{"|","%"}];
tempinternal = Map[StringDelete[ToString[#], WhitespaceCharacter]&, funcfile, {-1}][[4;;, {1,2}]];
removeElem = {};
Do[
If[
StringContainsQ[ToString[tempinternal[[i, 1]]], "x"~~__~~"x"] || StringContainsQ[ToString[tempinternal[[i,2]]], "if(slhaFound"] || StringContainsQ[ToString[tempinternal[[i,2]]], "1+access"] 
, AppendTo[removeElem, {i}]];
,{i, Length[tempinternal]}]
internal = Delete[tempinternal, removeElem];

(*neutral ds masses*)
prtclsfile = Import[directory<>"FR_modfiles/CH_modfiles/prtcls1.mdl", "Table", "FieldSeparators"->"|"];
neutraldsmasses = {};
Do[
	(*checks for particles with a tilde at the start of their name; also checks if particle is a color singlet, neutral, and not a SM neutrino*)
	If[ (StringContainsQ[ToString[prtclsfile[[i, 1]]], "~"] || StringContainsQ[ToString[prtclsfile[[i, 2]]], "~"]) && 
	prtclsfile[[i, 8]] == 1 && prtclsfile[[i, 9]] == 0 && 
	prtclsfile[[i, 4]] != 12 && prtclsfile[[i, 4]] != 14 && prtclsfile[[i, 4]] != 16 ,
	AppendTo[neutraldsmasses, StringDelete[ToString[prtclsfile[[i, 6]]], WhitespaceCharacter]]]
, {i, 3, Length[prtclsfile]}]
neutraldsmasses;


(*list with all 1to2 decays process names*)
templist2Decays = foutlistDecays/.F_[x_,{y_}]:>F[x];
processnameDecays = Table[
Select[particlelist, #[[1]]== templist2Decays[[i, 1]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2Decays[[i, 2]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2Decays[[i, 3]]&][[1,3]], 
{i, Length[templist2Decays]}];
processnameDecays=Table[ToExpression[StringReplace[ToString[processnameDecays[[i]]], {"~"->""}]], {i,Length[processnameDecays]}];


(*auxiliary decays functions*)
possibleiniDecays = DeleteDuplicates[Table[Select[particlelist, #[[1]]== templist2Decays[[i, 1]]&][[1,3]], {i, Length[templist2Decays]}]];
possiblemassesDecays= Table[TheMass[relevantWsfields[[i]]], {i, Length[relevantWsfields]}]/.subrule;
Do[inifuncDecays[i]={},{i,Length[possibleiniDecays]}]
Do[
	pos=Position[possiblemassesDecays,TheMass[foutlistDecays[[i,1]]]/.subrule][[1,1]];
	If[Length[finalDecaysWidth]!=0,
		AppendTo[inifuncDecays[pos],{processnameDecays[[i]],TheMass[foutlistDecays[[i,1]]],TheMass[foutlistDecays[[i,2]]],TheMass[foutlistDecays[[i,3]]],templist2Decays[[i,1]],templist2Decays[[i,2]],templist2Decays[[i,3]],finalDecaysWidth[[i]], couplings[[i]], particleType[[i]] }/.subrule]
	]
,{i,Length[processnameDecays]}]


inifuncDecays[1];
possibleiniDecays


(*if scalar mediator has tt decay, add gg decay*)
Do[
	If[SelfConjugate[inifuncDecays[i1][[1,5]]]&&inifuncDecays[i1][[1,8]]==0,
		Do[
			If[inifuncDecays[i1][[j1,10,1]]=="t_quark"&&inifuncDecays[i1][[j1,10,2]]=="t_quark",
				AppendTo[inifuncDecays[i1],{StringJoin[ToString[possibleiniDecays[[i1]]],"GG"],
						TheMass[inifuncDecays[i1][[1,5]]]/.subrule,TheMass[inifuncDecays[i1][[j1,6]]]/.subrule,TheMass[inifuncDecays[i1][[j1,7]]]/.subrule,inifuncDecays[i1][[1,5]],PDGtoID["21"],PDGtoID["21"],0,
						inifuncDecays[i1][[j1,9]],{"gluon","gluon"}}]
			]
		,{j1,Length[inifuncDecays[i1]]}]
	]
,{i1,Length[possibleiniDecays]}];


(*declarations file hpp*)
sfile=OpenWrite[directory<>"model.hpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];

Write[sfile, mathlabel];
Write[sfile, "#pragma once\n"];
Write[sfile, "#include <cmath>\n"]
Write[sfile, "namespace DT{"];

(*external and internal declarations*)
Do[
	Write[sfile, "\textern double", " ", external[[i,1]] ,";"]
,{i,Length[external]}]
Do[
	Write[sfile, "\textern double", " ", internal[[i,1]] ,";"]
,{i,Length[internal]}]

(*tokens*)
Do[
	Write[sfile, "\textern double", " ", ToString[tokenreverse[[i,1]]] , ";"]
,{i,Length[tokenreverse]}];

(*default variables used by FR, FA/FC, CH*)
Write[sfile, "\textern double EL;"];
Write[sfile, "\textern double ee;"];
Write[sfile, "\textern double gs;"];
Write[sfile, "\textern double G;"];
Write[sfile, "\textern double FAGS;\n"];

(*amplitudes and fluxes functions*)
Do[
	Write[sfile, "\tdouble " , ToString[inifunc[i][[j,1]]] , "(const double &cos_t, const double &s);"];
,{i,Length[possibleini]},{j,Length[inifunc[i]]}];
Do[
	Write[sfile, "\tdouble " , ToString[inifunc[i][[j,1]]] , "fl(const double &cos_t, const double &s);"];
,{i,Length[possibleini]},{j,Length[inifunc[i]]}];
Do[
	Write[sfile, "\tdouble " , ToString[possibleini[[i]]] , "(const double &cos_t, const double &s);"];
,{i,Length[possibleini]}];

(*widths*)
Do[
	Write[sfile, "\tdouble w" , ToString[processnameDecays[[i]]] , "();"];
,{i,Length[processnameDecays]}];
Do[
	Write[sfile, "\tdouble ww" , ToString[possibleiniDecays[[i]]] , "(const double QCDaS);"];
,{i,Length[possibleiniDecays]}];

Write[sfile, "}"];
Close[sfile];


(*declarations file cpp*)
sfile=OpenWrite[directory<>"sources/model.cpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];

Write[sfile, mathlabel];
Write[sfile, "#include <cmath>\n"]
Write[sfile, "namespace DT{"];

(*external declarations*)
Do[
	Write[sfile, "\tdouble ", external[[i,1]] ," = ", external[[i,2]],";"]
,{i,Length[external]}]

(*default variables used by FR, FA/FC, CH*)
Write[sfile, "\tdouble EL = 0.312233;"];
Write[sfile, "\tdouble ee = 0.312233;"];
Write[sfile, "\tdouble gs = 1.21358;"];
Write[sfile, "\tdouble G = 1.21358;"];
Write[sfile, "\tdouble FAGS = 1.21358;\n"];

(*internal declarations*)
Do[
	Write[sfile, "\tdouble", " ", internal[[i,1]] ,";"]
,{i,Length[internal]}]

(*tokens*)
Do[
	Write[sfile, "\tdouble", " ", ToString[tokenreverse[[i,1]]] , ";"]
,{i,Length[tokenreverse]}];

Write[sfile, "}"];
Close[sfile];


(*init.cpp file*)
sfile=OpenWrite[directory<>"sources/init.cpp", FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];

Write[sfile, mathlabel];
Write[sfile, "#include \"general_model.hpp\""]
Write[sfile, "#include \"../model.hpp\"\n"]
Write[sfile, "namespace DT{"];
Write[sfile,"\tvoid Model::init()"];
Write[sfile,"\t{"];

Do[
	Write[sfile, "\t\tparticles[\"",ToString[dsnames[[i]]],"\"]=&",ToString[dsmass[[i]]],";"]
,{i,Length[dsmass]}]
Do[
	Write[sfile, "\t\tdsDof[\"",ToString[dsnames[[i]]],"\"]=",ToString[dsDof[[i]]],";"]
,{i,Length[dsnames]}]
Do[
	Write[sfile, "\t\tneutraldsmasses.push_back(&", neutraldsmasses[[i]],");"];
,{i,Length[neutraldsmasses]}]
Do[
Write[sfile, "\t\tADDCHANNEL(",ToString[processname[[i]]],", ",ToString[processname[[i]]],"fl, "
, If[mi[[i]]===0, "ZERO", ToString[ReplaceAll[mi[[i]],subrule]]],
", ",
If[mj[[i]]===0, "ZERO", ToString[ReplaceAll[mj[[i]],subrule]]],", "
,
If[mk[[i]]===0, "ZERO", ToString[ReplaceAll[mk[[i]],subrule]]],
", ",
If[ml[[i]]===0, "ZERO", ToString[ReplaceAll[ml[[i]],subrule]]],")"];
,{i,Length[processname]}]
Do[
	Write[sfile, "\t\tdenstructures.push_back(&", StringReplace[ToString[relevantWs[[i]]],{"FeynCalc`"->""}] ,");"];
,{i,Length[relevantWs]}]
Write[sfile,"\t\tN_widths = ",ToString[Length[relevantWs]/2],";"];

Write[sfile,"\t}"];
Write[sfile, "}"];
Close[sfile];


(*external parameters of the model, including the ones that can be scanned over*)
sfile=OpenWrite[directory<>"sources/parametermap.cpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];

Write[sfile, mathlabel];
Write[sfile, "#include \"general_model.hpp\""]
Write[sfile, "#include \"../model.hpp\"\n"]
Write[sfile, "namespace DT{"];
Write[sfile, "\tvoid Model::load_parameter_map(){"];
Do[
	Write[sfile, "\t\tparmap[\"", external[[i,1]] ,"\"] = &", external[[i,1]],";"]
,{i,Length[external]}]
Write[sfile, "\t}"];
Write[sfile, "}"];
Close[sfile];


(*MS, MC, MB, MT*)
runMasses = {TheMass[PDGtoID["3"]], TheMass[PDGtoID["4"]], TheMass[PDGtoID["5"]], TheMass[PDGtoID["6"]]}/.subrule;

(*loadparameters file*)
sfile=OpenWrite[directory<>"sources/loadparameters.cpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];

Write[sfile, mathlabel];
Write[sfile, "#include \"general_model.hpp\""]
Write[sfile, "#include \"../model.hpp\""]
Write[sfile, "namespace DT{"]

Write[sfile, "\tvoid Model::load_parameters(){"]
Write[sfile, "\t\tFAGS = sqrt(4*M_PI*aS); gs = FAGS; G = FAGS;"];
If[ContainsAll[external[[All,1]], {"yms", "ymb", "ymt", "ymc"}],
	Write[sfile, "\t\tyms = ", ToString[runMasses[[1]]], ";"];
	Write[sfile, "\t\tymc = ", ToString[runMasses[[2]]], ";"];
	Write[sfile, "\t\tymb = ", ToString[runMasses[[3]]], ";"];
	Write[sfile, "\t\tymt = ", ToString[runMasses[[4]]], ";"];
];
Do[
	Write[sfile, "\t\t", internal[[i,1]] ," = ", internal[[i,2]],";"]
,{i,Length[internal]}];
Write[sfile, "\t\tEL = EE;"];

Write[sfile, "\t}"];
Write[sfile, "}"];
Close[sfile];


(*calcwidths file*)
sfile=OpenWrite[directory<>"sources/calcwidths.cpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];

Write[sfile, mathlabel];
Write[sfile, "#include \"general_model.hpp\""]
Write[sfile, "#include \"../model.hpp\""]
Write[sfile, "#include \"mass_run.hpp\"\n"]
Write[sfile, "namespace DT{"]

Write[sfile, "\tvoid Model::calc_widths_and_scale(){"]
(*running masses for widths*)
Write[sfile, "\t\tstd::unique_ptr<Mrun> Run = std::make_unique<Mrun>();"];
Write[sfile, "\t\tdouble *quark_masses[4] = {&",ToString[runMasses[[1]]],", &",ToString[runMasses[[2]]],", &",ToString[runMasses[[3]]],", &",ToString[runMasses[[4]]],"};"];
Write[sfile, "\t\tdouble scale;"];
Do[
	Write[sfile, "\t\tscale = ", ToString[inifuncDecays[j][[1,2]]], ";"];
	Write[sfile, "\t\tRun->calc_quark_masses(scale, quark_masses, aS);"];
	Write[sfile, "\t\tload_parameters();"];
	Write[sfile, "\t\t", relevantWidth[[j]], " = ww", ToString[possibleiniDecays[[j]]] , "(aS);"];
,{j,Length[possibleiniDecays]}]
(*running masses for DM annihilation*)
Write[sfile, "\t\tscale = 2*MDM;"];
Write[sfile, "\t\tRun->calc_quark_masses(scale, quark_masses, aS);"];

Write[sfile, "\t}"];
Write[sfile, "}"];
Close[sfile];


(*tokens file*)
sfile=OpenWrite[directory<>"sources/loadtokens.cpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];

Write[sfile, mathlabel];
Write[sfile, "#include \"general_model.hpp\""]
Write[sfile, "#include \"../model.hpp\"\n"]
Write[sfile, "namespace DT{"]

Write[sfile, "\tvoid Model::load_tokens(){"]
Do[
	toksub=StringReplace[ToString[CForm[tokenreverse[[i,2]]]],{"Power"->"pow","Cos"->"cos","Sin"->"sin","Conjugate"->"", "Sqrt"-> "sqrt", "Defer"-> " ", "FeynCalc_MT"->"MT", "FeynCalc`"->"", "SMP(\"g_s\")"->"gs"}];
	Write[sfile, "\t\t", ToString[tokenreverse[[i,1]]] ," = ", toksub,";"],{i,Length[tokenreverse]}]
	
Write[sfile, "\t}"];
Write[sfile, "}"];
Close[sfile];


(*Amplitudes and fluxes files*)

(*Definitions taken from https://pdg.lbl.gov/2020/reviews/contents_sports.html, kinematics Eq.(48.35)-Eq.(48.37)*)
(*absolute value for center of mass 4-momentum of particle i*)
picm[mi_,mj_] := Sqrt[(s+mi^2-mj^2)^2/(4s)-mi^2]; 
(*t to cos\[Theta]*)
ttoct[mi_,mj_,mk_,ml_]:=(mi^2-mj^2+mk^2-ml^2)^2/(4s)- (picm[mi,mj] - picm[mk,ml])^2-2*picm[mi,mj]*picm[mk,ml](1-cost)//Simplify;

(*amps file*)
Do[
	ofile=directory<>"sources/amp2s/all"<> ToString[possibleini[[i]]] <> ".cpp";
	sfile=OpenWrite[ofile,FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];
	
	Write[sfile, mathlabel];
	Write[sfile, "#include \"../../model.hpp\"\n"];
	Do[
		subsamp2=Replace[inifunc[i][[j,10]]/.subrule,defer,All];
		bool=!FreeQ[subsamp2,t];
		boolu=!FreeQ[subsamp2,u];
		subsamp2=ToString[ToString[CForm[subsamp2],StandardForm]];
		subsamp2=StringReplace[subsamp2,{"Sqrt"-> "sqrt","Defer"->" ","Cos("->"cos( ","Sin"->"sin", "Tan"->"tan"}];
		tsub="";
		Write[sfile, "double DT::" , ToString[inifunc[i][[j,1]]] , "(const double &cos_t, const double &s){"];
		If[bool || boolu,
			tsub=Replace[ttoct[inifunc[i][[j,2]],inifunc[i][[j,3]],inifunc[i][[j,4]],inifunc[i][[j,5]]]/.subrule,defer,All];
			tsub=ToString[ToString[CForm[tsub],StandardForm]];
			tsub=StringReplace[tsub,{"Sqrt"-> "sqrt","Defer"->" ","cost"->"cos_t"}];
			Write[sfile, "\tdouble t = " , tsub , ";"];
			Write[sfile, "\tdouble u = -s - t + " , ToString[inifunc[i][[j,2]]] , "*" , ToString[inifunc[i][[j,2]]] ," + ", ToString[inifunc[i][[j,3]]] , "*" , ToString[inifunc[i][[j,3]]] ," + "
			, ToString[inifunc[i][[j,4]]] , "*" , ToString[inifunc[i][[j,4]]] ," + ", ToString[inifunc[i][[j,5]]] , "*" , ToString[inifunc[i][[j,5]]] , ";"];
		];
		symfac="";
		If[inifunc[i][[j,8]]===inifunc[i][[j,9]],symfac="0.5*"];
		Write[sfile, "\treturn ", symfac , "(" , subsamp2 , ");"];
		Write[sfile, "}"]
	,{j,Length[inifunc[i]]}];
	
	Close[sfile];
,{i,Length[possibleini]}]

(*flux file*)
Do[
	ofile=directory<>"sources/amp2s/"<> ToString[possibleini[[i]]] <> "flux.cpp";
	sfile=OpenWrite[ofile,FormatType->StandardForm];
	
	Write[sfile, mathlabel];
	Write[sfile, "#include \"../../model.hpp\""];
	Write[sfile, "#include \"utils.hpp\"\n"];
	Do[
		symfac="";
		If[ToString[inifunc[i][[j,6]]]!=ToString[inifunc[i][[j,7]]],symfac=StringJoin[symfac,"2*"]];
		If[SelfConjugate[inifunc[i][[j,6]]],
			If[Not[SelfConjugate[inifunc[i][[j,7]]]],
				symfac=StringJoin[symfac,"2*"]
			],
			If[ToString[inifunc[i][[j,6]]]!= ToString[-inifunc[i][[j,7]]],
				symfac=StringJoin[symfac,"2*"]
			]
		];
		Write[sfile, "double DT::" , ToString[inifunc[i][[j,1]]] , "fl(const double &cos_t, const double &s){"];
		Write[sfile, "\treturn " , symfac , "flux(s, " , ToString[inifunc[i][[j,2]]] , "," , ToString[inifunc[i][[j,3]]] , "," , ToString[inifunc[i][[j,4]]] , "," , ToString[inifunc[i][[j,5]]] , ")*",
					 inifunc[i][[j,1]] , "(cos_t, s);"];
		Write[sfile, "}"]
	,{j,Length[inifunc[i]]}];
	
	Close[sfile];
,{i,Length[possibleini]}]


(*decays functions files*)
Do[
	ofile=directory<>"sources/amp2s/totalW"<> ToString[possibleiniDecays[[i]]] <> ".cpp";
	sfile=OpenWrite[ofile,FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];
	
	Write[sfile, mathlabel];
	Write[sfile, "#include \"../../model.hpp\""];
	Write[sfile, "#include \"utils.hpp\""];
	Write[sfile,"#include \"width.hpp\""];
	Write[sfile,"#include <memory>\n"];
	
	(*if decaying particle is NOT a scalar:*)
	If[ inifuncDecays[i][[1,8]] != 0,
		Do[
			subsDecays=Replace[inifuncDecays[i][[j,8]],defer,All];
			subsDecays=ToString[ToString[CForm[subsDecays],StandardForm]];
			subsDecays=StringReplace[subsDecays,{"Sqrt"-> "sqrt","Defer"->" ","Cos("->"cos( ","Sin"->"sin", "Tan"->"tan", "Power"->"pow"}];
			Write[sfile, "double DT::w" , ToString[inifuncDecays[i][[j,1]]] , "(){"];
			symfac="";
			If[inifuncDecays[i][[j,6]]===inifuncDecays[i][[j,7]],symfac="0.5*"];	
			Write[sfile, "\tif(heaviDecays(" , ToString[inifuncDecays[i][[j,2]]] , "," , ToString[inifuncDecays[i][[j,3]]], "," , ToString[inifuncDecays[i][[j,4]]] , ")){"];
			Write[sfile, "\treturn " , symfac, subsDecays , ";"];
			Write[sfile, "\t}"];
			Write[sfile, "\telse{ return 0; }\n"];
			Write[sfile, "}"]
		,{j,Length[inifuncDecays[i]]}];
		
		Write[sfile, "double DT::ww" , ToString[possibleiniDecays[[i]]] , "(const double QCDaS){"];
		allcontr="( ";
		Do[
			If[j!=Length[inifuncDecays[i]],
				allcontr=StringJoin[allcontr,"w",ToString[inifuncDecays[i][[j,1]]],"() + "],
				allcontr=StringJoin[allcontr,"w",ToString[inifuncDecays[i][[j,1]]],"() );"]
			]
		,{j,Length[inifuncDecays[i]]}];
		Write[sfile, "\treturn ", allcontr];
		Write[sfile, "}"];
		Close[sfile];
	];
	
	(*if decaying particle is a scalar:*)
	If[ inifuncDecays[i][[1,8]] == 0,
		Write[sfile, "double DT::ww" , ToString[possibleiniDecays[[i]]] , "(const double QCDaS){"];
		Write[sfile, "\tdouble width = 0;"];
		Write[sfile, "\tstd::unique_ptr<Width> w = std::make_unique<Width>(", inifuncDecays[i][[1,2]],");"];
		Write[sfile, "\tw->set_alphaS(QCDaS);"];
		m2vect="( { ";
		m3vect="( { ";
		type1vect="( { ";
		type2vect="( { ";
		coupling2vect="( {";
		Do[
			subsDecays=Replace[inifuncDecays[i][[j,9,1]],defer,All];
			subsDecays=ToString[ToString[CForm[subsDecays],StandardForm]];
			subsDecays=StringReplace[subsDecays,{"Sqrt"-> "sqrt","Defer"->" ","Cos("->"cos( ","Sin"->"sin", "Tan"->"tan", "Power"->"pow"}];
			symfac="";
			If[inifuncDecays[i][[j,6]]===inifuncDecays[i][[j,7]],symfac="0.5*"];	
			(*initialization of m2, m3, type1, type2, couplings2 vectors*)
			If[j!=Length[inifuncDecays[i]],
				m2vect=StringJoin[m2vect, ToString[inifuncDecays[i][[j,3]]], ", "];
				m3vect=StringJoin[m3vect, ToString[inifuncDecays[i][[j,4]]], ", "];
				type1vect=StringJoin[type1vect, inifuncDecays[i][[j,10,1]], ", "];
				type2vect=StringJoin[type2vect, inifuncDecays[i][[j,10,2]], ", "];
				coupling2vect=StringJoin[coupling2vect, symfac, subsDecays, ", "];
			,
				m2vect=StringJoin[m2vect, ToString[inifuncDecays[i][[j,3]]], " } );"];
				m3vect=StringJoin[m3vect, ToString[inifuncDecays[i][[j,4]]], " } );"];
				type1vect=StringJoin[type1vect, inifuncDecays[i][[j,10,1]], " } );"];
				type2vect=StringJoin[type2vect, inifuncDecays[i][[j,10,2]], " } );"];
				coupling2vect=StringJoin[coupling2vect, symfac, subsDecays, " } );"];
			];	
		,{j,Length[inifuncDecays[i]]}];
		
		Write[sfile, "\tstd::vector<double> m2", m2vect];
		Write[sfile, "\tstd::vector<double> m3", m3vect];
		Write[sfile, "\tstd::vector<ParticleType> type1", type1vect];
		Write[sfile, "\tstd::vector<ParticleType> type2", type2vect];
		Write[sfile, "\tstd::vector<double> coupling2", coupling2vect];
		Write[sfile, "\tfor(int i = 0; i < m2.size(); i++) {"];
		Write[sfile, "\t\twidth = width + w->partial_width(type1[i], type2[i], m2[i], m3[i], coupling2[i]);"];
		Write[sfile, "\t}"];
		Write[sfile, "\treturn width;"];
		Write[sfile, "}"];
		Close[sfile];
	];
,{i,Length[possibleiniDecays]}]
