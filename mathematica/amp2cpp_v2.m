(* ::Package:: *)

(*directory = ToString[$CommandLine[[4]]] <> "/FA_modfiles";*)
(*directory = "/home/johann/Documents/Projects/DM/darktree_new/md_cxsm/FR_modfiles" <> "/FA_modfiles";*)
directory = "/home/rodrigo/Downloads/darktree_new/md_cxsm/FR_modfiles"<>"/FA_modfiles";
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
SetOptions[Polarization, Transversality->True];


(*****************)
(*AMPLITUDES PART*)
(*****************)


(*create list with particle identifiers, masses and names according to FA mod files*)
particlelist = {M$ClassesDescription[[#,1]], TheMass[M$ClassesDescription[[#,1]]], ToString[TheLabel[M$ClassesDescription[[#,1]]]]}& /@Range[Length[M$ClassesDescription]];
Do[
(*adds antiparticles to particlelist*)
	If[SelfConjugate/.M$ClassesDescription[[i1,2]][[1]],
		(*if field is its own antiparticle do nothing*), 
		 AppendTo[particlelist, {-M$ClassesDescription[[i1,1]], TheMass[M$ClassesDescription[[i1,1]]], 
		 (*change antiparticle name by capitalizing particle name, unless particle name is already capitalized*)
		 If[UpperCaseQ[ToString[TheLabel[M$ClassesDescription[[i1,1]]]]], ToLowerCase[ToString[TheLabel[M$ClassesDescription[[i1,1]]]]], ToUpperCase[ToString[TheLabel[M$ClassesDescription[[i1,1]]]]]]}]
	],
{i1, Length[M$ClassesDescription]}
];
(*1st column: FAs fields*)
(*2nd column: masses of fields*)
(*3rd column: name of fields*)


(*Get masses of DS particles and all particle with widths from CalcHep files*)
getWidthsandDSMasses[]:=
Block[{prtfile,prtlist},
prtfile = Import[directory<>"FR_modfiles/CH_modfiles/prtcls1.mdl", "Table", "FieldSeparators"->"|"];
prtlist = Map[StringDelete[StringReplace[ToString[#], "%"->""], WhitespaceCharacter]&, prtfile, {-1}][[4;;, {2,6,7}]];
chmass = Select[prtlist, StringTake[#[[1]], 1] == "~" &][[All, 2]];
widths = {};
For[i=1, i<= Length[prtlist],i++,
    If[prtlist[[i,3]]!="0",
        AppendTo[widths,ToExpression[prtlist[[i,2]]]]; 
        AppendTo[widths,ToExpression[StringReplace[prtlist[[i,3]],"!"->""]]]
    ]
];
]
getWidthsandDSMasses[]


(*create list with dark sector particles; labels of dark sector particles must have a tilde at the start in the FA mod files*)
dslist={};
For[i = 1, i <= Length[particlelist], i++, 
	For[j=1, j<=Length[chmass],j++,If[ToString[particlelist[[i,2]]]==chmass[[j]],AppendTo[dslist,particlelist[[i,1]]]]]];
dsmass=Table[TheMass[dslist[[i]]],{i,Length[dslist]}];(*masses of fields*)
dsnames = Table[Select[particlelist, #[[1]]== dslist[[i]]&][[1,3]],{i,Length[dslist]}];(*name of fields*)


(*list with every 2 to 2 tree-level process with dark sector particles in the initial state, and in the final state any particle*)
topologie = CreateTopologies[0, 2 -> 2];
list = {{S,S}, {S,V}, {S,F}, {V,V}, {V,F}, {F,F}}; (*final states list*)
alldiags = {};

Do[
Feynmangraph = InsertFields[topologie, {dslist[[j]], dslist[[k]]} -> list[[i]], 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {U}];
AppendTo[alldiags, Feynmangraph];
, {j, Length[dslist]}, {k, j, Length[dslist]}, {i, Length[list]}]


(*exclude goldstone and ds particles from final states*)
Do[
alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#, Field[3] -> S[2]]&]; alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#, Field[4] -> S[2]]&];
alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#, Field[3] -> S[3]]&]; alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#, Field[4] -> S[3]]&];
alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#, Field[3] -> -S[3]]&]; alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#, Field[4] -> -S[3]]&];
Table[ alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#, Field[3] -> dslist[[j]]]&] , {j, Length[dslist]}]; 
Table[ alldiags[[i]] = DiagramSelect[alldiags[[i]], FreeQ[#, Field[4] -> dslist[[j]]]&] , {j, Length[dslist]}];
, {i, Length[alldiags]}]


(*groups the diagrams according to the process*)
diagsgrouped = Flatten[Table[DiagramGrouping[alldiags[[i]], ({Field[1] /. #1[[1]], Field[2] /. #1[[2]], Field[3] /. #1[[3]], Field[4] /. #1[[4]]} &)], {i,Length[alldiags]}],1];
diagsgrouped[[All, 1]];
diagsgrouped[[All, 2]];


(*removes final states which are repeated in the previous list*)
removeDuplicate[]:=
Block[{remelem = {}, templist={}},
(*charge conjugate initial states*)
Do[
If[diagsgrouped[[i, 1, {1,2}]] == -diagsgrouped[[j, 1, {1,2}]] || (diagsgrouped[[i, 1, 1]] == -diagsgrouped[[j, 1, 1]] && diagsgrouped[[i, 1, 2]] == diagsgrouped[[j, 1, 2]] && SelfConjugate[diagsgrouped[[i, 1, 2]]]) || (diagsgrouped[[i, 1, 2]] == -diagsgrouped[[j, 1, 2]] && diagsgrouped[[i, 1, 1]] == diagsgrouped[[j, 1, 1]] && SelfConjugate[diagsgrouped[[i, 1, 1]]]) , AppendTo[remelem, {j}]]
, {i, 1, Length[diagsgrouped]-1}, {j, i+1, Length[diagsgrouped]}];
(*particles swaped in the final state for a given initial state*)
Do[
If[diagsgrouped[[i, 1, 3]] == diagsgrouped[[j, 1, 4]] && diagsgrouped[[i, 1, 4]] == diagsgrouped[[j, 1, 3]] &&(diagsgrouped[[i, 1, {1,2}]] == diagsgrouped[[j, 1, {1,2}]]), AppendTo[remelem, {j}]]
, {i, 1, Length[diagsgrouped]-1}, {j, i+1, Length[diagsgrouped]}];
(*particles swaped in the initial state for a given final state*)
Do[
If[diagsgrouped[[i, 1, 1]] == diagsgrouped[[j, 1, 2]] && diagsgrouped[[i, 1, 2]] == diagsgrouped[[j, 1, 1]] &&(diagsgrouped[[i, 1, {3,4}]] == diagsgrouped[[j, 1, {3,4}]]), AppendTo[remelem, {j}]]
, {i, 1, Length[diagsgrouped]-1}, {j, i+1, Length[diagsgrouped]}];
(*repeated final states with color*)
templist = ToExpression[StringReplace[ToString[diagsgrouped[[All, 1]]], {"Col3"->"1", "Col4"->"1"}]];
Do[
If[templist[[i, 3]] == templist[[j, 4]] && templist[[i,  4]] == templist[[j, 3]] &&(templist[[i, {1,2}]] == templist[[j, {1,2}]]), AppendTo[remelem, {j}]]
, {i, 1, Length[templist]-1}, {j, i+1, Length[templist]}];

remelem = DeleteDuplicates[remelem];

(*Final list with all the relevant 2to2 processes for freeze-out*)
listofprocs = Delete[diagsgrouped[[All, 1]], remelem];
]
removeDuplicate[]


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
				If[FreeQ[numerator[[it,jt]],Alternatives@@{Spinor[__],Pair[__],Momentum[__],Complex[__,__],SUNFDelta[__,__]}],
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


(*computation of the amplitudes for all the 2to2 processes from the previous list; masses of each particle are also saved here*)
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

Feynmangraph = InsertFields[topologie, {listofprocs[[i,1]], listofprocs[[i,2]]} -> {listofprocs[[i,3]], listofprocs[[i,4]]}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
(*Paint[Feynmangraph];*)
FCClearScalarProducts[];
SetMandelstam[s, t, u, p1, p2, -p3, -p4, TheMass[listofprocs[[i,1]]], TheMass[listofprocs[[i,2]]], TheMass[listofprocs[[i,3]]], TheMass[listofprocs[[i,4]]] ];
amp = FCFAConvert[CreateFeynAmp[Feynmangraph], IncomingMomenta -> {p1, p2}, OutgoingMomenta -> {p3, p4}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> True,
SMP -> False, Contract -> True, DropSumOver -> True]/.gcsub/.subrule//Collect[#,FeynAmpDenominator[_]]&//FeynAmpDenominatorExplicit//DiracSubstitute67[#]&//DotSimplify[#]&;

(*if there are processes violating charge (ex: h1h- -> ve e+), recreate listofprocs with fout processes*)
k = listofprocs[[i,3]];
l = listofprocs[[i,4]];
If[
Length[amp] == 0,
Feynmangraph = InsertFields[topologie, {listofprocs[[i,1]], listofprocs[[i,2]]} -> {If[!SelfConjugate[listofprocs[[i,3]]], -listofprocs[[i,3]], listofprocs[[i,3]]], If[!SelfConjugate[listofprocs[[i,4]]], -listofprocs[[i,4]], listofprocs[[i,4]]]}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
SetMandelstam[s, t, u, p1, p2, -p3, -p4, TheMass[listofprocs[[i,1]]], TheMass[listofprocs[[i,2]]], TheMass[listofprocs[[i,3]]], TheMass[listofprocs[[i,4]]] ];
amp = FCFAConvert[CreateFeynAmp[Feynmangraph], IncomingMomenta -> {p1, p2}, OutgoingMomenta -> {p3, p4}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> True,
SMP -> False, Contract -> True, DropSumOver -> True]/.gcsub/.subrule//Collect[#,FeynAmpDenominator[_]]&//FeynAmpDenominatorExplicit//DiracSubstitute67[#]&//DotSimplify[#]&;

k = If[!SelfConjugate[listofprocs[[i,3]]], -listofprocs[[i,3]], listofprocs[[i,3]]];
l = If[!SelfConjugate[listofprocs[[i,4]]], -listofprocs[[i,4]], listofprocs[[i,4]]];
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


tokenize[]:=
Block[{tokenID},
	Do[
		tokenID=StringJoin["token",ToString[it]];
		AppendTo[tokensubs,tokens[[it]]->ToExpression[tokenID]];
		AppendTo[tokenreverse,ToExpression[tokenID]->tokens[[it]]];
	,{it,Length[tokens]}]
]


calcAmps[];
tokenize[];
calcAmps[];


widthlist=widths;
widthsub={pat : HoldPattern[Spinor[___,___]]:> pat};


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
		If[StringContainsQ[den, "+ s"],
			addwidthsub[den]
		]
	,{i1,Length[amp]}]
	
]


Do[
	checkdenpol[mandellist[[i2]]]
,{i2,Length[mandellist]}]


relevantWs = {};
Do[
	If[!MemberQ[widthlist,widths[[i1]]],
		AppendTo[relevantWs,widths[[i1]]]
	]
,{i1,Length[widths]}]
dl = Length[relevantWs]/2*3;


(*function to determine symmetry factors appearing in amp squared*)
determinefac[sts_, Nini_]:=
Block[{fac=1,q1},
	Do[
		q1=StringPart[ToString[sts[[i1]]/.-x_:>x],1];
		If[i1<=Nini,
			Which[
				q1==="V",
				If[PossibleZeroQ[TheMass[sts[[i1]]]],
					fac=fac*2,
					fac=fac*3
				],
				q1==="F",
				fac=fac*3;
				If[StringContainsQ[q1,"Col"],
					fac=fac*6,
					fac=fac*2
				],
				q1==="S",
				fac=fac*3
			],
			Which[
				q1==="V",
				Continue[],
				q1==="F",
				fac=fac*3,
				q1==="S",
				fac=fac*3
			]
		]
	,{i1,Length[sts]}];
	Return[fac]
]


(*function to compute amp squared*)
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


(*list with all 2to2 fout process names*)
templist2 = Table[{foutlist[[i,1]], foutlist[[i,2]], ToExpression[StringReplace[ToString[foutlist[[i,3]]], {", {Col3}"->"", ", {Glu3}"->""}]],
ToExpression[StringReplace[ToString[foutlist[[i,4]]], {", {Col4}"->"", ", {Glu4}"->""}]]}, {i, Length[foutlist]}];
processname = Table[
Select[particlelist, #[[1]]== templist2[[i, 1]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2[[i, 2]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2[[i, 3]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2[[i, 4]]&][[1,3]], 
{i, Length[templist2]}];
processname=Table[ToExpression[StringReplace[ToString[processname[[i]]], {"~"->""}]], {i,Length[processname]}];


(*computation of the amplitudes^2 for all the 2to2 processes from the previous list*)
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
		(*note: which conditions are being checked every time in i1 loop*)
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


relevantWsfields = {};
Do[
	If[relevantWs[[i]]==(particlelist[[j,2]]/.subrule) && StringPart[ToString[particlelist[[j,1]]],1]!="-" && StringPart[ToString[particlelist[[j,1]]],1]!="U" && ToString[particlelist[[j,1]]]!="S[2]" && ToString[particlelist[[j,1]]]!="S[3]",
	AppendTo[relevantWsfields, particlelist[[j,1]]] ]
	, {i, Length[relevantWs]}, {j, Length[particlelist]}
]


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
alldiagsDecay[[i]] = DiagramSelect[alldiagsDecay[[i]], FreeQ[#, Field[2] -> S[2]]&]; alldiagsDecay[[i]] = DiagramSelect[alldiagsDecay[[i]], FreeQ[#, Field[3] -> S[2]]&];
alldiagsDecay[[i]] = DiagramSelect[alldiagsDecay[[i]], FreeQ[#, Field[2] -> S[3]]&]; alldiagsDecay[[i]] = DiagramSelect[alldiagsDecay[[i]], FreeQ[#, Field[3] -> S[3]]&];
alldiagsDecay[[i]] = DiagramSelect[alldiagsDecay[[i]], FreeQ[#, Field[2] -> -S[3]]&]; alldiagsDecay[[i]] = DiagramSelect[alldiagsDecay[[i]], FreeQ[#, Field[3] -> -S[3]]&];
, {i, Length[alldiagsDecay]}]


(*groups the diagrams according to the process*)
diagsgroupedDecay = Flatten[Table[DiagramGrouping[alldiagsDecay[[i]], ({Field[1] /. #1[[1]], Field[2] /. #1[[2]], Field[3] /. #1[[3]]} &)], {i,Length[alldiagsDecay]}],1];
diagsgroupedDecay[[All, 1]];
diagsgroupedDecay[[All, 2]];


(*removes final states which are repeated in the previous list*)
remelemDecays = {};

(*particles swaped in the final state for a given initial state*)
Do[
If[(diagsgroupedDecay[[i, 1, 2]] == diagsgroupedDecay[[j, 1, 3]] && diagsgroupedDecay[[i, 1, 3]] == diagsgroupedDecay[[j, 1, 2]]) && (diagsgroupedDecay[[i, 1, 1]] == diagsgroupedDecay[[j, 1, 1]]), 
AppendTo[remelemDecays, {j}]]
, {i, 1, Length[diagsgroupedDecay]-1}, {j, i+1, Length[diagsgroupedDecay]}]
(*repeated final states with color*)
templist = ToExpression[StringReplace[ToString[diagsgroupedDecay[[All, 1]]], {"Col2"->"1", "Col3"->"1"}]];
Do[
If[templist[[i, 2]] == templist[[j, 3]] && templist[[i,  3]] == templist[[j, 2]] && (diagsgroupedDecay[[i, 1, 1]] == diagsgroupedDecay[[j, 1, 1]]), AppendTo[remelemDecays, {j}]]
, {i, 1, Length[templist]-1}, {j, i+1, Length[templist]}]

DeleteDuplicates[remelemDecays];

(*Final list with all the relevant 1to2 decays*)
finallistDecays = Delete[diagsgroupedDecay[[All, 1]], remelemDecays];


(*computation of the decays for all the 1to2 processes from the previous list*)
decayslist = {};
foutlistDecays = {};
k = {};
l = {};

Do[

FeynmangraphDecays = InsertFields[topologieDecay, {finallistDecays[[i,1]]} -> {finallistDecays[[i,2]], finallistDecays[[i,3]]}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
ampDecays = FCFAConvert[CreateFeynAmp[FeynmangraphDecays], IncomingMomenta -> {p1}, OutgoingMomenta -> {p2, p3}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> True,
SMP -> False, Contract -> True, DropSumOver -> True]/.gcsub/.subrule//DiracSubstitute67[#]&//DotSimplify[#]&//Simplify[#]&;

(*if there are processes violating charge, recreate finallistDecays*)
k = finallistDecays[[i,2]];
l = finallistDecays[[i,3]];
If[
Length[ampDecays] == 0, 
FeynmangraphDecays = InsertFields[topologieDecay, {finallistDecays[[i,1]]} -> {If[!SelfConjugate[finallistDecays[[i,2]]], -finallistDecays[[i,2]], finallistDecays[[i,2]]], If[!SelfConjugate[finallistDecays[[i,3]]], -finallistDecays[[i,3]], finallistDecays[[i,3]]]}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
ampDecays = FCFAConvert[CreateFeynAmp[FeynmangraphDecays], IncomingMomenta -> {p1}, OutgoingMomenta -> {p2, p3}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> True,
SMP -> False, Contract -> True, DropSumOver -> True]/.gcsub/.subrule//DiracSubstitute67[#]&//DotSimplify[#]&//Simplify[#]&;
k = If[!SelfConjugate[finallistDecays[[i,2]]], -finallistDecays[[i,2]], finallistDecays[[i,2]]];
l = If[!SelfConjugate[finallistDecays[[i,3]]], -finallistDecays[[i,3]], finallistDecays[[i,3]]];
];
If[Length[ampDecays] == 0,
	,
	AppendTo[decayslist, ampDecays];
	AppendTo[foutlistDecays, {finallistDecays[[i,1]], k, l}];
]
,{i,1,Length[finallistDecays]}]


(*computation of the widths for all the 1to2 processes from the previous list*)
finalDecays = {};
subdiagrams = {};
tamp2 = {};
subrule = {FCGV[x_]:>ToExpression[x]};

Do[
	FCClearScalarProducts[];
	SP[p1, p1] = TheMass[foutlistDecays[[i,1]]]^2; 
	SP[p2, p2] = TheMass[foutlistDecays[[i,2]]]^2; 
	SP[p3, p3] = TheMass[foutlistDecays[[i,3]]]^2;
	SP[p1, p2] = (TheMass[foutlistDecays[[i,1]]]^2 + TheMass[foutlistDecays[[i,2]]]^2 -TheMass[foutlistDecays[[i,3]]]^2)/2;
	SP[p1, p3] = (TheMass[foutlistDecays[[i,1]]]^2 + TheMass[foutlistDecays[[i,3]]]^2 -TheMass[foutlistDecays[[i,2]]]^2)/2;
	SP[p2, p3] = (TheMass[foutlistDecays[[i,1]]]^2 - TheMass[foutlistDecays[[i,2]]]^2 -TheMass[foutlistDecays[[i,3]]]^2)/2; 
	
	tamp2 = fastamp2[{1,1},decayslist[[i]]]; 
	prefac=determinefac[foutlistDecays[[i]],1];
	
	Which[
		TheMass[foutlistDecays[[i,2]]] === 0 && !PossibleZeroQ[TheMass[foutlistDecays[[i,3]]]],
		sub=tamp2[[1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
		// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2,0] &// DoPolarizationSums[#, p3] & //DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
		
		!PossibleZeroQ[TheMass[foutlistDecays[[i,2]]]] && TheMass[foutlistDecays[[i,3]]] === 0, 
		sub=tamp2[[1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
		// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3,0] & //DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
		
		TheMass[foutlistDecays[[i,2]]] === 0 && TheMass[foutlistDecays[[i,3]]] === 0,
		sub=tamp2[[1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
		// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2,0] &// DoPolarizationSums[#, p3,0] & //DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
			
		True,
		sub=tamp2[[1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
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
pfinalDecays = Table[1/(2*TheMass[foutlistDecays[[i,1]]])*Sqrt[(TheMass[foutlistDecays[[i,1]]]^2 - (TheMass[foutlistDecays[[i,2]]]+TheMass[foutlistDecays[[i,3]]])^2)*(TheMass[foutlistDecays[[i,1]]]^2 - (TheMass[foutlistDecays[[i,2]]]-TheMass[foutlistDecays[[i,3]]])^2)], {i, 1, Length[foutlistDecays]}]/.subrule;
finalDecaysWidth = Table[pfinalDecays[[i]]/(32*Pi^2*TheMass[foutlistDecays[[i,1]]]^2)*finalDecays[[i]]*4*Pi, {i, 1, Length[foutlistDecays]}]/.subrule//FullSimplify (*//TableForm*);


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
If[StringContainsQ[ToString[tempinternal[[i, 1]]], "x"~~__~~"x"] || StringContainsQ[ToString[tempinternal[[i,2]]], "if(slhaFound"] || StringContainsQ[ToString[tempinternal[[i,2]]], "1+access"] , AppendTo[removeElem, {i}]];
,{i, Length[tempinternal]}]
internal = Delete[tempinternal, removeElem];

(*neutral ds masses*)
prtclsfile = Import[directory<>"FR_modfiles/CH_modfiles/prtcls1.mdl", "Table", "FieldSeparators"->"|"];
neutraldsmasses = {};
Do[
	If[( (StringContainsQ[ToString[prtclsfile[[i, 1]]], "~"] || StringContainsQ[ToString[prtclsfile[[i, 2]]], "~"]) && prtclsfile[[i, 2]]==prtclsfile[[i, 3]] && prtclsfile[[i, 8]] == 1),
	AppendTo[neutraldsmasses, StringDelete[ToString[prtclsfile[[i, 6]]], WhitespaceCharacter]]]
, {i, 4, Length[prtclsfile]}]
neutraldsmasses;


(*list with all 1to2 decays process names*)
templist2Decays = Table[{foutlistDecays[[i,1]], ToExpression[StringReplace[ToString[foutlistDecays[[i,2]]], {", {Col2}"->"", ", {Glu2}"->""}]],
ToExpression[StringReplace[ToString[foutlistDecays[[i,3]]], {", {Col3}"->"", ", {Glu3}"->""}]]}, {i, Length[foutlistDecays]}];

processnameDecays = Table[
Select[particlelist, #[[1]]== templist2Decays[[i, 1]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2Decays[[i, 2]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2Decays[[i, 3]]&][[1,3]], 
{i, Length[templist2Decays]}];
processnameDecays=Table[ToExpression[StringReplace[ToString[processnameDecays[[i]]], {"~"->""}]], {i,Length[processnameDecays]}];

possibleiniDecays = DeleteDuplicates[Table[Select[particlelist, #[[1]]== templist2Decays[[i, 1]]&][[1,3]], {i, Length[templist2Decays]}]];


(*auxiliary decays functions*)
possiblemassesDecays= Table[TheMass[relevantWsfields[[i]]], {i, Length[relevantWsfields]}]/.subrule;

Do[inifuncDecays[i]={},{i,Length[possibleiniDecays]}]
Do[
	pos=Position[possiblemassesDecays,TheMass[foutlistDecays[[i,1]]]/.subrule][[1,1]];
	AppendTo[inifuncDecays[pos],{processnameDecays[[i]],TheMass[foutlistDecays[[i,1]]],TheMass[foutlistDecays[[i,2]]],TheMass[foutlistDecays[[i,3]]],templist2Decays[[i,1]],templist2Decays[[i,2]],templist2Decays[[i,3]],finalDecaysWidth[[i]]}/.subrule]
,{i,Length[processnameDecays]}]


(*declarations file*)
sfile=OpenWrite[directory<>"model.hpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];
(*external and internal declarations*)
Write[sfile, mathlabel];
Write[sfile, "#pragma once\n"];
Write[sfile, "#include <cmath>\n"]

Write[sfile, "namespace DT{"];
Do[
	Write[sfile, "\textern double", " ", external[[i,1]] ,";"]
,{i,Length[external]}]
Do[
	Write[sfile, "\textern double", " ", internal[[i,1]] ,";"]
,{i,Length[internal]}]
(*gcs, inimass and iniswitch*)
Do[
	Write[sfile, "\textern double", " ", ToString[tokenreverse[[i,1]]] , ";"]
,{i,Length[tokenreverse]}];
Write[sfile, "\textern double EL;"];
Write[sfile, "\textern double ee;"];
Write[sfile, "\textern double gs;"];
Write[sfile, "\textern double G;"];
Write[sfile, "\textern double FAGS;\n"];
Do[
	Write[sfile, "\tdouble " , ToString[inifunc[i][[j,1]]] , "(const double &cos_t, const double &s);"];
,{i,Length[possibleini]},{j,Length[inifunc[i]]}];

Do[
	Write[sfile, "\tdouble " , ToString[inifunc[i][[j,1]]] , "fl(const double &cos_t, const double &s);"];
,{i,Length[possibleini]},{j,Length[inifunc[i]]}];

Do[
	Write[sfile, "\tdouble " , ToString[possibleini[[i]]] , "(const double &cos_t, const double &s);"];
,{i,Length[possibleini]}];

Do[
	Write[sfile, "\tdouble w" , ToString[processnameDecays[[i]]] , "();"];
,{i,Length[processnameDecays]}];

Do[
	Write[sfile, "\tdouble ww" , ToString[possibleiniDecays[[i]]] , "();"];
,{i,Length[possibleiniDecays]}];

Write[sfile, "}"];
Close[sfile];


(*declarations file*)
gc = M$FACouplings;
gc1=gc/.subrule; gc1 = Replace[gc1, defer, All];
sfile=OpenWrite[directory<>"sources/model.cpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];
(*external and internal declarations*)
Write[sfile, mathlabel];
Write[sfile, "#include <cmath>\n"]

Write[sfile, "namespace DT{"];
Do[
	Write[sfile, "\tdouble", " ", external[[i,1]] ,";"]
,{i,Length[external]}]
Do[
	Write[sfile, "\tdouble", " ", internal[[i,1]] ,";"]
,{i,Length[internal]}]
(*gcs, inimass and iniswitch*)
Do[
	Write[sfile, "\tdouble", " ", ToString[tokenreverse[[i,1]]] , ";"]
,{i,Length[tokenreverse]}];
Write[sfile, "\tdouble EL;"];
Write[sfile, "\tdouble ee;"];
Write[sfile, "\tdouble gs;"];
Write[sfile, "\tdouble G;"];
Write[sfile, "\tdouble FAGS;\n"];
Write[sfile, "}"];
Close[sfile];


sfile=OpenWrite[directory<>"sources/init.cpp", FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];
Write[sfile, mathlabel];
Write[sfile, "#include \"general_model.hpp\""]
Write[sfile, "#include \"../model.hpp\"\n"]
Write[sfile, "namespace DT{"];
Write[sfile,"\tvoid Model::init()"];
Write[sfile,"\t{"];
Do[
	Write[sfile, "\t\t", external[[i,1]] ," = ", external[[i,2]],";"]
,{i,Length[external]}]
Write[sfile, "\t\tdouble EL = 0.312233;"];
Write[sfile, "\t\tdouble ee = 0.312233;"];
Write[sfile, "\t\tdouble gs = 1.21358;"];
Write[sfile, "\t\tdouble G = 1.21358;"];
Write[sfile, "\t\tdouble FAGS = 1.21358;\n"];
Do[
	Write[sfile, "\t\tparticles[\"",ToString[dsnames[[i]]],"\"]=&",ToString[dsmass[[i]]],";"]
,{i,Length[dsmass]}]
Do[
	Write[sfile, "\t\tdsmasses.push_back(&", dsmass[[i]],");"];
,{i,Length[dsmass]}]
Do[
	Write[sfile, "\t\tneutraldsmasses.push_back(&", neutraldsmasses[[i]],");"];
,{i,Length[neutraldsmasses]}]

Do[
Write[sfile, "\t\tADDCHANNEL(",ToString[processname[[i]]],", ",ToString[processname[[i]]],"fl, "
,StringReplace[ToString[ReplaceAll[mi[[i]],subrule]],"0"->"ZERO"],", ",StringReplace[ToString[ReplaceAll[mj[[i]],subrule]],"0"->"ZERO"],", "
,StringReplace[ToString[ReplaceAll[mk[[i]],subrule]],"0"->"ZERO"],", ",StringReplace[ToString[ReplaceAll[ml[[i]],subrule]],"0"->"ZERO"],")"];
,{i,Length[processname]}]

Do[
	Write[sfile, "\t\tdenstructures.push_back(&", StringReplace[ToString[relevantWs[[i]]],{"FeynCalc`"->""}] ,");"];
,{i,Length[relevantWs]}]
Write[sfile,"\t\tN_widths = ",ToString[Length[relevantWs]/2],";"];
Write[sfile,"\t}"];
Write[sfile, "}"];
Close[sfile];


sfile=OpenWrite[directory<>"sources/parametermap.cpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];
(*external and internal declarations*)
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
runMasses = {TheMass[F[11]], TheMass[F[8]], TheMass[F[12]], TheMass[F[9]]}/.subrule;
(*loadparameters file*)
sfile=OpenWrite[directory<>"sources/loadparameters.cpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];
Write[sfile, mathlabel];
Write[sfile, "#include \"general_model.hpp\""]
Write[sfile, "#include \"../model.hpp\""]
Write[sfile, "#include \"mass_run.hpp\"\n"]
Write[sfile, "namespace DT{"]

Write[sfile, "\tvoid Model::load_parameters(){"]

(*running masses for widths*)
Write[sfile, "\t\tMrun running;"];
Write[sfile, "\t\tdouble Q;"];
Do[ 
	Write[sfile, "\t\tQ = ", ToString[inifuncDecays[j][[1,2]]], ";"];
	Write[sfile, "\t\t", ToString[runMasses[[1]]], " = running.RunM(Q, 3, running.N0, 0);"];
	Write[sfile, "\t\t", ToString[runMasses[[2]]], " = running.RunM(Q, 4, running.N0, 0);"];
	Write[sfile, "\t\t", ToString[runMasses[[3]]], " = running.RunM(Q, 5, running.N0, 1);"];
	Write[sfile, "\t\t", ToString[runMasses[[4]]], " = running.RunM(Q, 6, running.N0, 1);"];
	Write[sfile, "\t\taS = running.alphaS(Q, running.NalphaS);"];
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
	(*widths assignment*)
	Write[sfile, "\t\t", relevantWs[[2*j]], " = ww", ToString[possibleiniDecays[[j]]] , "();"];
,{j,Length[possibleiniDecays]}]

(*running masses for DM annihilation*)
Write[sfile, "\t\tQ = 2*MDM;"];
Write[sfile, "\t\t", ToString[runMasses[[1]]], " = running.RunM(Q, 3, running.N0, 0);"];
Write[sfile, "\t\t", ToString[runMasses[[2]]], " = running.RunM(Q, 4, running.N0, 0);"];
Write[sfile, "\t\t", ToString[runMasses[[3]]], " = running.RunM(Q, 5, running.N0, 1);"];
Write[sfile, "\t\t", ToString[runMasses[[4]]], " = running.RunM(Q, 6, running.N0, 1);"];
Write[sfile, "\t\taS = running.alphaS(Q, running.NalphaS);"];
Write[sfile, "\t\tFAGS = sqrt(4*M_PI*aS); gs = FAGS; G = FAGS;"];
If[ContainsAll[external[[All,1]], {"yms", "ymb", "ymt", "ymc"}],
	Write[sfile, "\t\tyms = ", ToString[runMasses[[1]]], ";"];
	Write[sfile, "\t\tymc = ", ToString[runMasses[[2]]], ";"];
	Write[sfile, "\t\tymb = ", ToString[runMasses[[3]]], ";"];
	Write[sfile, "\t\tymt = ", ToString[runMasses[[4]]], ";"];
];
Do[
	Write[sfile, "\t\t", internal[[i,1]] ," = ", internal[[i,2]],";"]
,{i,Length[internal]}]
Write[sfile, "\t\tEL = EE;"];

Write[sfile, "\t}"];
Write[sfile, "}"];
Close[sfile];


sfile=OpenWrite[directory<>"sources/loadtokens.cpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];
Write[sfile, mathlabel];
Write[sfile, "#include \"general_model.hpp\""]
Write[sfile, "#include \"../model.hpp\"\n"]
Write[sfile, "namespace DT{"]
Write[sfile, "\tvoid Model::load_tokens(){"]

Do[
	toksub=StringReplace[ToString[CForm[tokenreverse[[i,2]]]],{"Power"->"pow","Cos"->"cos","Sin"->"sin","Conjugate"->"", "Sqrt"-> "sqrt", "Defer"-> " ", "FeynCalc_MT"->"MT", "FeynCalc`"->""}];
	Write[sfile, "\t\t", ToString[tokenreverse[[i,1]]] ," = ", toksub,";"],{i,Length[tokenreverse]}]
	
Write[sfile, "\t}"];
Write[sfile, "}"];
Close[sfile];


(*Amplitudes and fluxes files*)

(*Definitions taken from https://pdg.lbl.gov/2020/reviews/contents_sports.html, kinematics Eq.(48.35)-Eq.(48.37)*)
picm[mi_,mj_] := Sqrt[(s+mi^2-mj^2)^2/(4s)-mi^2]; (*absolute value for center of mass 4-momentum for particle i*)
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
		subsamp2=ToString[ToString[CForm[subsamp2],StandardForm]];
		subsamp2=StringReplace[subsamp2,{"Sqrt"-> "sqrt","Defer"->" ","Cos("->"cos( ","Sin"->"sin", "Tan"->"tan"}];
		tsub="";
		
		Write[sfile, "double DT::" , ToString[inifunc[i][[j,1]]] , "(const double &cos_t, const double &s){"];
		
		If[bool,
			tsub=Replace[ttoct[inifunc[i][[j,2]],inifunc[i][[j,3]],inifunc[i][[j,4]],inifunc[i][[j,5]]]/.subrule,defer,All];
			tsub=ToString[ToString[CForm[tsub],StandardForm]];
			tsub=StringReplace[tsub,{"Sqrt"-> "sqrt","Defer"->" ","cost"->"cos_t"}];
			Write[sfile, "\tdouble t = " , tsub , ";"];
			Write[sfile, "\tdouble u = -s - t + " , ToString[inifunc[i][[j,2]]] , "*" , ToString[inifunc[i][[j,2]]] ," + ", ToString[inifunc[i][[j,3]]] , "*" , ToString[inifunc[i][[j,3]]] ," + "
			, ToString[inifunc[i][[j,4]]] , "*" , ToString[inifunc[i][[j,4]]] ," + ", ToString[inifunc[i][[j,5]]] , "*" , ToString[inifunc[i][[j,5]]] , ";"];
		];
		
		Write[sfile, "\treturn " , subsamp2 , ";"];
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
		If[inifunc[i][[j,8]]===inifunc[i][[j,9]],symfac="0.5*"];
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
		Write[sfile, "\t if(heavi(s," , ToString[inifunc[i][[j,4]]] , "," , ToString[inifunc[i][[j,5]]] , ")){"];
		Write[sfile, "\t\t return " , symfac , "flux(s, " , ToString[inifunc[i][[j,2]]] , "," , ToString[inifunc[i][[j,3]]] , "," , ToString[inifunc[i][[j,4]]] , "," , ToString[inifunc[i][[j,5]]] , ")*",
					 inifunc[i][[j,1]] , "(cos_t, s);"];
		Write[sfile, "\t }"];
		Write[sfile, "\t else{ return 0; }\n"];
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
	Write[sfile, "#include \"utils.hpp\"\n"];
	
	Do[
		subsDecays=Replace[inifuncDecays[i][[j,8]],defer,All];
		subsDecays=ToString[ToString[CForm[subsDecays],StandardForm]];
		subsDecays=StringReplace[subsDecays,{"Sqrt"-> "sqrt","Defer"->" ","Cos("->"cos( ","Sin"->"sin", "Tan"->"tan", "Power"->"pow"}];
		
		Write[sfile, "double DT::w" , ToString[inifuncDecays[i][[j,1]]] , "(){"];
		
		symfac="";
		If[inifuncDecays[i][[j,6]]===inifuncDecays[i][[j,7]],symfac="0.5*"];	
		Write[sfile, "\tif(heaviDecays(" , ToString[inifuncDecays[i][[j,2]]] , "," , ToString[inifuncDecays[i][[j,3]]], "," , ToString[inifuncDecays[i][[j,4]]] , ")){"];
		Write[sfile, "\t\treturn " , symfac, subsDecays , ";"];
		Write[sfile, "\t}"];
		Write[sfile, "\telse{ return 0; }\n"];
		Write[sfile, "}"]
		
	,{j,Length[inifuncDecays[i]]}];
	
	Write[sfile, "double DT::ww" , ToString[possibleiniDecays[[i]]] , "(){"];
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
	
,{i,Length[possibleiniDecays]}]
