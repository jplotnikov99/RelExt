(* ::Package:: *)

directory = ToString[$CommandLine[[4]]] <> "/FA_modfiles";
(*directory = "/home/johann/Documents/Projects/DM/darktree_new/md_cpvdm/FR_modfiles" <> "/FA_modfiles";*)
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


(*ParticleList with masses obtained from CalcHep*)
prtfile = Import[directory<>"FR_modfiles/CH_modfiles/prtcls1.mdl", "Table", "FieldSeparators"->"|"];
prtList = Map[StringDelete[StringReplace[ToString[#], "%"->""], WhitespaceCharacter]&, prtfile, {-1}][[4;;, {2,6,7}]];
chmass = Select[prtList, StringTake[#[[1]], 1] == "~" &][[All, 2]];
widths = {};
For[i=1, i<= Length[prtList],i++,
    If[prtList[[i,3]]!="0",
        AppendTo[widths,ToExpression[prtList[[i,2]]]]; 
        AppendTo[widths,ToExpression[StringReplace[prtList[[i,3]],"!"->""]]]
    ]
];


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
particlelist;
particlelist[[All,1]];(*FAs fields*)
particlelist[[All,2]];(*masses of fields*)
particlelist[[All,3]];(*name of fields*)
(*remember to use FlavorExpand->True option in FA conversion*)


(*create list with dark sector particles; labels of dark sector particles must have a tilde at the start in the FA mod files*)
dslist={};
For[i = 1, i <= Length[particlelist], i++, 
	For[j=1, j<=Length[chmass],j++,If[ToString[particlelist[[i,2]]]==chmass[[j]],AppendTo[dslist,particlelist[[i,1]]]]]];
dsmass=Table[TheMass[dslist[[i]]],{i,Length[dslist]}];(*masses of fields*)
dsnames = Table[Select[particlelist, #[[1]]== dslist[[i]]&][[1,3]],{i,Length[dslist]}];(*name of fields*)


(*create list with dark sector particles; labels of dark sector particles must have a tilde at the start in the FA mod files*)
(*dslist = Select[particlelist, StringTake[#[[3]], 1] == "~" &][[All, 1]](*FAs fields*)
dsmass=Table[TheMass[dslist[[i]]],{i,Length[dslist]}];(*masses of fields*)
dsnames = StringReplace[Table[Select[particlelist, #[[1]]== dslist[[i]]&][[1,3]],{i,Length[dslist]}],"~"->""];*)(*name of fields*)


(*if the FA identifiers change, this list must be manually changed*)
(*quarkmasses = {SMP["m_e"]-> TheMass[F[4]], SMP["m_mu"]-> TheMass[F[5]], SMP["m_tau"]-> TheMass[F[6]], 
SMP["m_u"]-> TheMass[F[7]], SMP["m_c"]-> TheMass[F[8]], SMP["m_t"]-> TheMass[F[9]],
SMP["m_d"]-> TheMass[F[10]], SMP["m_s"]-> TheMass[F[11]], SMP["m_b"]-> TheMass[F[12]], 
SMP["m_Z"]-> TheMass[V[2]], SMP["m_W"]->TheMass[V[3]], SMP["m_H"]->TheMass[S[1]],
SMP["cos_W"]->CW, SMP["sin_W"]->SW, SMP["e"]->EL};*)
(*SMP[];*)


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
remelem = {};

(*charge conjugate initial states*)
Do[
If[diagsgrouped[[i, 1, {1,2}]] == -diagsgrouped[[j, 1, {1,2}]] || (diagsgrouped[[i, 1, 1]] == -diagsgrouped[[j, 1, 1]] && diagsgrouped[[i, 1, 2]] == diagsgrouped[[j, 1, 2]] && SelfConjugate[diagsgrouped[[i, 1, 2]]]) || (diagsgrouped[[i, 1, 2]] == -diagsgrouped[[j, 1, 2]] && diagsgrouped[[i, 1, 1]] == diagsgrouped[[j, 1, 1]] && SelfConjugate[diagsgrouped[[i, 1, 1]]]) , AppendTo[remelem, {j}]]
, {i, 1, Length[diagsgrouped]-1}, {j, i+1, Length[diagsgrouped]}]
(*particles swaped in the final state for a given initial state*)
Do[
If[diagsgrouped[[i, 1, 3]] == diagsgrouped[[j, 1, 4]] && diagsgrouped[[i, 1, 4]] == diagsgrouped[[j, 1, 3]] &&(diagsgrouped[[i, 1, {1,2}]] == diagsgrouped[[j, 1, {1,2}]]), AppendTo[remelem, {j}]]
, {i, 1, Length[diagsgrouped]-1}, {j, i+1, Length[diagsgrouped]}]
(*particles swaped in the initial state for a given final state*)
Do[
If[diagsgrouped[[i, 1, 1]] == diagsgrouped[[j, 1, 2]] && diagsgrouped[[i, 1, 2]] == diagsgrouped[[j, 1, 1]] &&(diagsgrouped[[i, 1, {3,4}]] == diagsgrouped[[j, 1, {3,4}]]), AppendTo[remelem, {j}]]
, {i, 1, Length[diagsgrouped]-1}, {j, i+1, Length[diagsgrouped]}]
(*repeated final states with color*)
templist = ToExpression[StringReplace[ToString[diagsgrouped[[All, 1]]], {"Col3"->"1", "Col4"->"1"}]];
Do[
If[templist[[i, 3]] == templist[[j, 4]] && templist[[i,  4]] == templist[[j, 3]] &&(templist[[i, {1,2}]] == templist[[j, {1,2}]]), AppendTo[remelem, {j}]]
, {i, 1, Length[templist]-1}, {j, i+1, Length[templist]}]

DeleteDuplicates[remelem];

(*Final list with all the relevant 2to2 processes for freeze-out*)
finallist = Delete[diagsgrouped[[All, 1]], remelem];


(*computation of the amplitudes for all the 2to2 processes from the previous list; masses of each particle are also saved here*)
ampslist = {};
mi = {};
mj = {};
mk = {};
ml = {};
foutfinallist = {};

Do[

Feynmangraph = InsertFields[topologie, {finallist[[i,1]], finallist[[i,2]]} -> {finallist[[i,3]], finallist[[i,4]]}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
SetMandelstam[s, t, u, p1, p2, -p3, -p4, TheMass[finallist[[i,1]]], TheMass[finallist[[i,2]]], TheMass[finallist[[i,3]]], TheMass[finallist[[i,4]]] ];
amp = FCFAConvert[CreateFeynAmp[Feynmangraph], IncomingMomenta -> {p1, p2}, OutgoingMomenta -> {p3, p4}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> False,
SMP -> False, Contract -> True, DropSumOver -> True]/.subrule//Collect[#,FeynAmpDenominator[_]]&//FeynAmpDenominatorExplicit
(*/.TheMass[S[1]] -> Sqrt[TheMass[S[1]]^2-I*TheMass[S[1]]*WHsm]*)
(*/.TheMass[S[1]] ->Sqrt[TheMass[S[1]]^2-I*TheMass[S[1]]*WH]/.TheMass[S[4]] ->Sqrt[TheMass[S[4]]^2-I*TheMass[S[4]]*WS1]*);
(*do this list automatically using prtcls file form CH*)

(*if there are processes violating charge (ex: h1h- -> ve e+), recreate finallist with fout processes*)
k = finallist[[i,3]];
l = finallist[[i,4]];
If[
amp == 0, 
Feynmangraph = InsertFields[topologie, {finallist[[i,1]], finallist[[i,2]]} -> {If[!SelfConjugate[finallist[[i,3]]], -finallist[[i,3]], finallist[[i,3]]], If[!SelfConjugate[finallist[[i,4]]], -finallist[[i,4]], finallist[[i,4]]]}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
SetMandelstam[s, t, u, p1, p2, -p3, -p4, TheMass[finallist[[i,1]]], TheMass[finallist[[i,2]]], TheMass[finallist[[i,3]]], TheMass[finallist[[i,4]]] ];
amp = FCFAConvert[CreateFeynAmp[Feynmangraph], IncomingMomenta -> {p1, p2}, OutgoingMomenta -> {p3, p4}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> False,
SMP -> False, Contract -> True, DropSumOver -> True]/.subrule//Collect[#,FeynAmpDenominator[_]]&//FeynAmpDenominatorExplicit
(*/.TheMass[S[1]] -> Sqrt[TheMass[S[1]]^2-I*TheMass[S[1]]*WHsm]*)
(*/.TheMass[S[1]] ->Sqrt[TheMass[S[1]]^2-I*TheMass[S[1]]*WH]/.TheMass[S[4]] ->Sqrt[TheMass[S[4]]^2-I*TheMass[S[4]]*WS1]*);
k = If[!SelfConjugate[finallist[[i,3]]], -finallist[[i,3]], finallist[[i,3]]];
l = If[!SelfConjugate[finallist[[i,4]]], -finallist[[i,4]], finallist[[i,4]]];
];
			
AppendTo[ampslist, amp];
AppendTo[mi, TheMass[finallist[[i,1]]]];
AppendTo[mj, TheMass[finallist[[i,2]]]];
AppendTo[mk, TheMass[finallist[[i,3]]]];
AppendTo[ml, TheMass[finallist[[i,4]]]];
AppendTo[foutfinallist, {finallist[[i,1]], finallist[[i,2]], k, l}];
,{i,1,Length[finallist]}]


widthlist=widths;
widthsub={pat : HoldPattern[Spinor[___,___]]:> pat};


addwidthsub[den_]:=
Block[{massterm},
	Do[
		massterm=widthlist[[2*i-1]]//ToString;
		If[StringContainsQ[den,massterm],
			massterm=ToExpression[massterm];
			AppendTo[widthsub,massterm->Sqrt[massterm^2-I*widthlist[[2*i]]*widthlist[[2*i-1]]]];
			widthlist=Delete[widthlist, {{2*i-1},{2*i}}];
			Break[];
		]
	,{i,Length[widthlist]/2}]
]


checkdenpol[amp_]:= 
Block[{den},
	If[Length[amp + placeholder]===2,
		den = CForm[Denominator[amp]]//ToString;
		If[StringContainsQ[den, "+ s"],
			addwidthsub[den]
		],
		Do[
			den = CForm[Denominator[amp[[i1]]]]//ToString;
			If[StringContainsQ[den, "+ s"],
				addwidthsub[den]
			]
		,{i1,Length[amp]}]
	]
]


Do[
	checkdenpol[ampslist[[i2]]]
,{i2,Length[ampslist]}]


relevantWs = {};
Do[
	If[!MemberQ[widthlist,widths[[i1]]],
		AppendTo[relevantWs,widths[[i1]]]
	]
,{i1,Length[widths]}]
dl = Length[relevantWs]/2*3;


(*function to compute amp squared*)
fastamp2[amp_]:=
Block[{},
full=0;
If[Length[amp+placeholder]<=2,
full=amp*ComplexConjugate[amp];
, 
Do[If[i1===j1,part=amp[[i1]]*ComplexConjugate[amp[[j1]]],
			  part=2*(amp[[i1]]*ComplexConjugate[amp[[j1]]])];
	full+=part,
{i1,Length[amp]},{j1,i1,Length[amp]}
]];
Return[full]
]


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


(*list with all 2to2 fout process names*)
templist2 = Table[{foutfinallist[[i,1]], foutfinallist[[i,2]], ToExpression[StringReplace[ToString[foutfinallist[[i,3]]], {", {Col3}"->"", ", {Glu3}"->""}]],
ToExpression[StringReplace[ToString[foutfinallist[[i,4]]], {", {Col4}"->"", ", {Glu4}"->""}]]}, {i, Length[foutfinallist]}];
processname = Table[
Select[particlelist, #[[1]]== templist2[[i, 1]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2[[i, 2]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2[[i, 3]]&][[1,3]]<>
Select[particlelist, #[[1]]== templist2[[i, 4]]&][[1,3]], 
{i, Length[templist2]}];
processname=Table[ToExpression[StringReplace[ToString[processname[[i]]], {"~"->""}]], {i,Length[processname]}];


(*computation of the amplitudes^2 for all the 2to2 processes from the previous list*)
final = {};
subdiagrams = {};
subrule = {FCGV[x_]:>ToExpression[x]};
(*AbsoluteTiming[*)
Do[
	Print[ToString[processname[[i]]]];
	FCClearScalarProducts[];
	SetMandelstam[s, t, u, p1, p2, -p3, -p4, TheMass[foutfinallist[[i,1]]], TheMass[foutfinallist[[i,2]]], TheMass[foutfinallist[[i,3]]], TheMass[foutfinallist[[i,4]]] ];
	tamp2 = fastamp2[ampslist[[i]]/.widthsub]; 
	subdiagrams = {};
	prefac=determinefac[foutfinallist[[i]], 2];
	
	If[Length[tamp2+placeholder]<=2,
	
	(*which conditions apply when we have photons in the final state*)
	Which[
			TheMass[foutfinallist[[i,3]]] === 0 && !PossibleZeroQ[TheMass[foutfinallist[[i,4]]]],
			subdiagrams=tamp2/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3, 0] & // DoPolarizationSums[#, p4] & //DiracSimplify//Expand//Simplify,
			
			!PossibleZeroQ[TheMass[foutfinallist[[i,3]]]] && TheMass[foutfinallist[[i,4]]] === 0, 
			subdiagrams=tamp2/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3] & // DoPolarizationSums[#, p4,0] & //DiracSimplify//Expand//Simplify,
			
			TheMass[foutfinallist[[i,3]]] === 0 && TheMass[foutfinallist[[i,4]]] === 0,
			subdiagrams=tamp2/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3,0] & // DoPolarizationSums[#, p4,0] & //DiracSimplify//Expand//Simplify,
			
			True,
			subdiagrams=tamp2/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3] & // DoPolarizationSums[#, p4] & //DiracSimplify//Expand//Simplify
		];
	If[FreeQ[subdiagrams,I],
			AppendTo[final,subdiagrams/.SUNN->3/.subrule/.Eps[___]->0//Simplify],
			Print["Imaginary"];
			AppendTo[final,subdiagrams/.SUNN->3/.subrule//Expand//FullSimplify]
		];
	,
	Do[
		(*note: which conditions are being checked every time in i1 loop*)
		Which[
			TheMass[foutfinallist[[i,3]]] === 0 && !PossibleZeroQ[TheMass[foutfinallist[[i,4]]]],
			sub=tamp2[[i1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3, 0] & // DoPolarizationSums[#, p4] & 
			// DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
			
			!PossibleZeroQ[TheMass[foutfinallist[[i,3]]]] && TheMass[foutfinallist[[i,4]]] === 0, 
			sub=tamp2[[i1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3] & // DoPolarizationSums[#, p4,0] & 
			// DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
			
			TheMass[foutfinallist[[i,3]]] === 0 && TheMass[foutfinallist[[i,4]]] === 0,
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
	
	];
	
, {i,Length[ampslist]}]


(*****************)
(*NEW WIDTHS PART*)
(*****************)
(*
Stuff to-do:
1) declare wH = wwH() (same for other relevant widths, problably in init.cpp?)  
2) add off-shell, 1to3/4?, QCD, decay to photons/gluons?, etc
3) check widths with CH in the end
*)


relevantWsfields = {};
Do[
	If[relevantWs[[i]]==(particlelist[[j,2]]/.subrule) && StringPart[ToString[particlelist[[j,1]]],1]!="-" && StringPart[ToString[particlelist[[j,1]]],1]!="U" && ToString[particlelist[[j,1]]]!="S[2]" && ToString[particlelist[[j,1]]]!="S[3]",
	AppendTo[relevantWsfields, particlelist[[j,1]]] ]
	, {i, Length[relevantWs]}, {j, Length[particlelist]}
]
(*relevantWsfields*)


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
foutfinallistDecays = {};
k = {};
l = {};

Do[

FeynmangraphDecays = InsertFields[topologieDecay, {finallistDecays[[i,1]]} -> {finallistDecays[[i,2]], finallistDecays[[i,3]]}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
ampDecays = FCFAConvert[CreateFeynAmp[FeynmangraphDecays], IncomingMomenta -> {p1}, OutgoingMomenta -> {p2, p3}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> False,
SMP -> False, Contract -> True, DropSumOver -> True]/.subrule;

(*if there are processes violating charge, recreate finallistDecays*)
k = finallistDecays[[i,2]];
l = finallistDecays[[i,3]];
If[
ampDecays == 0, 
FeynmangraphDecays = InsertFields[topologieDecay, {finallistDecays[[i,1]]} -> {If[!SelfConjugate[finallistDecays[[i,2]]], -finallistDecays[[i,2]], finallistDecays[[i,2]]], If[!SelfConjugate[finallistDecays[[i,3]]], -finallistDecays[[i,3]], finallistDecays[[i,3]]]}, 
Model -> {modelname}, InsertionLevel -> {Particles}, GenericModel -> modelname, ExcludeParticles -> {}];
FCClearScalarProducts[];
ampDecays = FCFAConvert[CreateFeynAmp[FeynmangraphDecays], IncomingMomenta -> {p1}, OutgoingMomenta -> {p2, p3}, UndoChiralSplittings -> True, ChangeDimension -> 4, List -> False,
SMP -> False, Contract -> True, DropSumOver -> True]/.subrule;
k = If[!SelfConjugate[finallistDecays[[i,2]]], -finallistDecays[[i,2]], finallistDecays[[i,2]]];
l = If[!SelfConjugate[finallistDecays[[i,3]]], -finallistDecays[[i,3]], finallistDecays[[i,3]]];
];
			
AppendTo[decayslist, ampDecays];
AppendTo[foutfinallistDecays, {finallistDecays[[i,1]], k, l}];
,{i, Length[finallistDecays]}]

(*foutfinallistDecays
decayslist//TableForm*)


(*computation of the widths for all the 1to2 processes from the previous list*)
finalDecays = {};
subdiagrams = {};
tamp2 = {};
subrule = {FCGV[x_]:>ToExpression[x]};

Do[

	FCClearScalarProducts[];
	SP[p1, p1] = TheMass[foutfinallistDecays[[i,1]]]^2; 
	SP[p2, p2] = TheMass[foutfinallistDecays[[i,2]]]^2; 
	SP[p3, p3] = TheMass[foutfinallistDecays[[i,3]]]^2;
	SP[p1, p2] = (TheMass[foutfinallistDecays[[i,1]]]^2 + TheMass[foutfinallistDecays[[i,2]]]^2 -TheMass[foutfinallistDecays[[i,3]]]^2)/2;
	SP[p1, p3] = (TheMass[foutfinallistDecays[[i,1]]]^2 + TheMass[foutfinallistDecays[[i,3]]]^2 -TheMass[foutfinallistDecays[[i,2]]]^2)/2;
	SP[p2, p3] = (TheMass[foutfinallistDecays[[i,1]]]^2 - TheMass[foutfinallistDecays[[i,2]]]^2 -TheMass[foutfinallistDecays[[i,3]]]^2)/2; 
	
	tamp2 = fastamp2[decayslist[[i]]]; 
	subdiagrams = {};
	prefac=determinefac[foutfinallistDecays[[i]],1];
	
	If[Length[tamp2+placeholder]<=2,
	
	(*which conditions apply when we have photons in the final state*)
	Which[
			TheMass[foutfinallistDecays[[i,2]]] === 0 && !PossibleZeroQ[TheMass[foutfinallistDecays[[i,3]]]],
			subdiagrams=tamp2/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2,0] &// DoPolarizationSums[#, p3] & //DiracSimplify//Expand//Simplify,
			
			!PossibleZeroQ[TheMass[foutfinallistDecays[[i,2]]]] && TheMass[foutfinallistDecays[[i,3]]] === 0, 
			subdiagrams=tamp2/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3,0] & //DiracSimplify//Expand//Simplify,
			
			TheMass[foutfinallistDecays[[i,2]]] === 0 && TheMass[foutfinallistDecays[[i,3]]] === 0,
			subdiagrams=tamp2/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2,0] &// DoPolarizationSums[#, p3,0] & //DiracSimplify//Expand//Simplify,
			
			True,
			subdiagrams=tamp2/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3] & //DiracSimplify//Expand//Simplify
		];
		
	If[FreeQ[subdiagrams,I],
			(*AppendTo[finalDecays,subdiagrams/.SUNN->3/.subrule//Simplify],*)
			AppendTo[finalDecays,subdiagrams/.SUNN->3/.subrule/.Eps[___]->0//Simplify],
			Print["Imaginary"];
			AppendTo[finalDecays,subdiagrams/.SUNN->3/.subrule//Expand//FullSimplify]
		];
	,
	
	Do[
		(*note: which conditions are being checked every time in i1 loop*)
		Which[
			TheMass[foutfinallistDecays[[i,2]]] === 0 && !PossibleZeroQ[TheMass[foutfinallistDecays[[i,3]]]],
			sub=tamp2[[i1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2,0] &// DoPolarizationSums[#, p3, 0] & //DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
			
			!PossibleZeroQ[TheMass[foutfinallistDecays[[i,2]]]] && TheMass[foutfinallistDecays[[i,3]]] === 0, 
			sub=tamp2[[i1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3,0] & //DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
			
			TheMass[foutfinallistDecays[[i,2]]] === 0 && TheMass[foutfinallistDecays[[i,3]]] === 0,
			sub=tamp2[[i1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2,0] &// DoPolarizationSums[#, p3,0] & //DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify,
			
			True,
			sub=tamp2[[i1]]/prefac// FeynAmpDenominatorExplicit // SUNSimplify[#, Explicit -> True, SUNNToCACF -> False] & // FermionSpinSum[#] & 
			// DoPolarizationSums[#, p1]& // DoPolarizationSums[#, p2] &// DoPolarizationSums[#, p3] & //DiracSimplify// Re[#]&// ComplexExpand[#]&// Simplify
			];
			
		If[FreeQ[sub,I],
			(*AppendTo[subdiagrams,sub/.SUNN->3/.subrule//Simplify],*)
			AppendTo[subdiagrams,sub/.SUNN->3/.subrule/.Eps[___]->0//Simplify],
			Print["imaginary"];
			sub=sub/.SUNN->3/.subrule//Expand//FullSimplify;
			AppendTo[subdiagrams,sub]
		];	
	,{i1,Length[tamp2]}];
	
	AppendTo[finalDecays, Plus @@ subdiagrams];
	
	];

, {i, 1, Length[decayslist]}]

(*finalDecays//TableForm*)


(*list of all partial widths*)
pfinalDecays = Table[1/(2*TheMass[foutfinallistDecays[[i,1]]])*Sqrt[(TheMass[foutfinallistDecays[[i,1]]]^2 - (TheMass[foutfinallistDecays[[i,2]]]+TheMass[foutfinallistDecays[[i,3]]])^2)*(TheMass[foutfinallistDecays[[i,1]]]^2 - (TheMass[foutfinallistDecays[[i,2]]]-TheMass[foutfinallistDecays[[i,3]]])^2)], {i, 1, Length[foutfinallistDecays]}]/.subrule;
finalDecaysWidth = Table[pfinalDecays[[i]]/(32*Pi^2*TheMass[foutfinallistDecays[[i,1]]]^2)*finalDecays[[i]]*4*Pi, {i, 1, Length[foutfinallistDecays]}]/.subrule//FullSimplify (*//TableForm*);


(***********************************)
(*BACK TO ORIGINAL MATHEMATICA CODE*)
(***********************************)


(*useful functions for the cpp code*)
defer={x_^2:>Defer[x*x],x_^2:>Defer[x*x],x_^3:>Defer[x*x*x],x_^4:>Defer[x*x*x*x],x_^5:>Defer[x*x*x*x*x],x_^6:>Defer[x*x*x*x*x*x],x_^7:>Defer[x*x*x*x*x*x*x],
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


inimass={};
Do[
	If[possiblemasses[[i,2]]===2,
		AppendTo[inimass,ToString[possiblemasses[[i,1]]]];
		AppendTo[inimass,ToString[possiblemasses[[i,1]]]],
		AppendTo[inimass,ToString[possiblemasses[[i,1]]]];
		AppendTo[inimass,ToString[possiblemasses[[i,2]]]]
	]
,{i,Length[possiblemasses]}]


(*list with all 1to2 decays process names*)
templist2Decays = Table[{foutfinallistDecays[[i,1]], ToExpression[StringReplace[ToString[foutfinallistDecays[[i,2]]], {", {Col2}"->"", ", {Glu2}"->""}]],
ToExpression[StringReplace[ToString[foutfinallistDecays[[i,3]]], {", {Col3}"->"", ", {Glu3}"->""}]]}, {i, Length[foutfinallistDecays]}];

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
	pos=Position[possiblemassesDecays,TheMass[foutfinallistDecays[[i,1]]]/.subrule][[1,1]];
	AppendTo[inifuncDecays[pos],{processnameDecays[[i]],TheMass[foutfinallistDecays[[i,1]]],TheMass[foutfinallistDecays[[i,2]]],TheMass[foutfinallistDecays[[i,3]]],templist2Decays[[i,1]],templist2Decays[[i,2]],templist2Decays[[i,3]],finalDecaysWidth[[i]]}/.subrule]
,{i,Length[processnameDecays]}]


(*declarations file*)
gc = M$FACouplings;
gc1=gc/.subrule; gc1 = Replace[gc1, defer, All];
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
	Write[sfile, "\textern double", " ", ToString[gc1[[i,1]]] , ";"]
,{i,Length[gc1]}];
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
	Write[sfile, "\tdouble", " ", ToString[gc1[[i,1]]] , ";"]
,{i,Length[gc1]}];
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
	Write[sfile, "\t\tchannelnames.push_back(\"",ToString[processname[[i]]],"\");"];
	Write[sfile, "\t\tamp2s[\"",ToString[processname[[i]]],"\"]=",ToString[processname[[i]]],";"];
	Write[sfile, "\t\tamp2fls[\"",ToString[processname[[i]]],"\"]=",ToString[processname[[i]]],"fl;"];
	If[PossibleZeroQ[mi[[i]]],
		Write[sfile, "\t\tmass1s[\"",ToString[processname[[i]]],"\"]=",ToString[ReplaceAll[mi[[i]],subrule]],";"],
		Write[sfile, "\t\tmass1s[\"",ToString[processname[[i]]],"\"]=&",ToString[ReplaceAll[mi[[i]],subrule]],";"];
	];
	If[PossibleZeroQ[mj[[i]]],
		Write[sfile, "\t\tmass2s[\"",ToString[processname[[i]]],"\"]=",ToString[ReplaceAll[mj[[i]],subrule]],";"],
		Write[sfile, "\t\tmass2s[\"",ToString[processname[[i]]],"\"]=&",ToString[ReplaceAll[mj[[i]],subrule]],";"];
	];
	(*If[PossibleZeroQ[mk[[i]]],
		Write[sfile, "\t\tmass3s.push_back(",ToString[ReplaceAll[mk[[i]],subrule]],");"],
		Write[sfile, "\t\tmass3s.push_back(&",ToString[ReplaceAll[mk[[i]],subrule]],");"];
	];
	If[PossibleZeroQ[ml[[i]]],
		Write[sfile, "\t\tmass4s.push_back(",ToString[ReplaceAll[ml[[i]],subrule]],");"],
		Write[sfile, "\t\tmass4s.push_back(&",ToString[ReplaceAll[ml[[i]],subrule]],");"];
	]*)
,{i,Length[processname]}]
Do[
	Write[sfile, "\t\tchannelnames.push_back(\"",ToString[possibleini[[i]]],"\");"];
	Write[sfile, "\t\tamp2fls[\"",ToString[possibleini[[i]]],"\"]=",ToString[possibleini[[i]]],";"];
	If[PossibleZeroQ[inimass[[2*i-1]]],
		Write[sfile, "\t\tmass1s[\"",ToString[possibleini[[i]]],"\"]=",ToString[ReplaceAll[inimass[[2*i-1]],subrule]],";"],
		Write[sfile, "\t\tmass1s[\"",ToString[possibleini[[i]]],"\"]=&",ToString[ReplaceAll[inimass[[2*i-1]],subrule]],";"];
	];
	If[PossibleZeroQ[inimass[[2*i]]],
		Write[sfile, "\t\tmass2s[\"",ToString[possibleini[[i]]],"\"]=",ToString[ReplaceAll[inimass[[2*i]],subrule]],";"],
		Write[sfile, "\t\tmass2s[\"",ToString[possibleini[[i]]],"\"]=&",ToString[ReplaceAll[inimass[[2*i]],subrule]],";"];
	];
,{i,Length[possibleini]}]
Do[
	Write[sfile, "\t\tinifuncs.push_back(", possibleini[[i]] ,");"];
,{i,Length[possibleini]}]
Write[sfile,"\t\tN_initial_states = ",ToString[Length[possibleini]],";"];
Do[
	Write[sfile, "\t\tinimasses.push_back(&", inimass[[i]] , ");"];
,{i,Length[inimass]}]
Do[
	Write[sfile, "\t\tdsmasses.push_back(&", dsmass[[i]],");"];
,{i,Length[dsmass]}]
Do[
	Write[sfile, "\t\tneutraldsmasses.push_back(&", neutraldsmasses[[i]],");"];
,{i,Length[neutraldsmasses]}]
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


sfile=OpenWrite[directory<>"sources/loadparameters.cpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];
Write[sfile, mathlabel];
Write[sfile, "#include \"general_model.hpp\""]
Write[sfile, "#include \"../model.hpp\"\n"]
Write[sfile, "namespace DT{"]

Write[sfile, "\tvoid Model::load_parameters(){"]
Do[
	Write[sfile, "\t\t", internal[[i,1]] ," = ", internal[[i,2]],";"]
,{i,Length[internal]}]
Write[sfile, "\t\tEL = EE;"];
Do[
	gsub=StringReplace[ToString[CForm[gc1[[i,2]]]],{"Power"->"pow","Cos"->"cos","Sin"->"sin","Conjugate"->"", "Sqrt"-> "sqrt", "Defer"-> " ", "FeynCalc_MT"->"MT", "FeynCalc`"->""}];
	Write[sfile, "\t\t", ToString[gc1[[i,1]]] ," = ", gsub,";"],{i,Length[gc1]}]
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
	sfile=OpenWrite[ofile,FormatType->StandardForm];
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
			Write[sfile, "double t = " , tsub , ";"];
			Write[sfile, "double u = -s - t + " , ToString[inifunc[i][[j,2]]] , "*" , ToString[inifunc[i][[j,2]]] ," + ", ToString[inifunc[i][[j,3]]] , "*" , ToString[inifunc[i][[j,3]]] ," + "
			, ToString[inifunc[i][[j,4]]] , "*" , ToString[inifunc[i][[j,4]]] ," + ", ToString[inifunc[i][[j,5]]] , "*" , ToString[inifunc[i][[j,5]]] , ";"];
		];
		
		Write[sfile, "return " , subsamp2 , ";"];
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
	Write[sfile, "double DT::" , ToString[possibleini[[i]]] , "(const double &cos_t, const double &s){"];
	allcontr="( ";
	
	Do[
		If[j!=Length[inifunc[i]],
			allcontr=StringJoin[allcontr,ToString[inifunc[i][[j,1]]],"fl(cos_t, s) + "],
			allcontr=StringJoin[allcontr,ToString[inifunc[i][[j,1]]],"fl(cos_t, s) );"]
		]
	,{j,Length[inifunc[i]]}];
	
	Write[sfile, "\t return ", allcontr];
	Write[sfile, "}"];
	Close[sfile];
,{i,Length[possibleini]}]


(*decays functions files*)
Do[
	ofile=directory<>"sources/amp2s/totalW"<> ToString[possibleiniDecays[[i]]] <> ".cpp";
	sfile=OpenWrite[ofile,FormatType->StandardForm];
	Write[sfile, mathlabel];
	Write[sfile, "#include \"../../model.hpp\""];
	Write[sfile, "#include \"utils.hpp\"\n"];
	
	Do[
		subsDecays=Replace[inifuncDecays[i][[j,8]],defer,All];
		subsDecays=ToString[ToString[CForm[subsDecays],StandardForm]];
		subsDecays=StringReplace[subsDecays,{"Sqrt"-> "sqrt","Defer"->" ","Cos("->"cos( ","Sin"->"sin", "Tan"->"tan"}];
		
		Write[sfile, "double DT::w" , ToString[inifuncDecays[i][[j,1]]] , "(){"];
		
		symfac="";
		If[inifuncDecays[i][[j,6]]===inifuncDecays[i][[j,7]],symfac="0.5*"];
		Write[sfile, "\t if(heaviDecays(" , ToString[inifuncDecays[i][[j,2]]] , "," , ToString[inifuncDecays[i][[j,3]]], "," , ToString[inifuncDecays[i][[j,4]]] , ")){"];
		Write[sfile, "\t\t return " , symfac, subsDecays , ";"];
		Write[sfile, "\t }"];
		Write[sfile, "\t else{ return 0; }\n"];
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
	
	Write[sfile, "\t return ", allcontr];
	Write[sfile, "}"];
	Close[sfile];
	
,{i,Length[possibleiniDecays]}]
