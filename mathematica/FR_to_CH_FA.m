(* ::Package:: *)

FRpath = ToString[$CommandLine[[4]]];
ModelName = ToString[$CommandLine[[5]]];
lagname = ToExpression[$CommandLine[[6]]];
MDpath = ToString[$CommandLine[[7]]];

$FeynRulesPath=FRpath;
SetDirectory[$FeynRulesPath];
<<FeynRules.m ;


parentPath = $InputFileName /. "" :> NotebookFileName[]
parentDir = DirectoryName @ parentPath
directory = ParentDirectory[parentDir];
$ModelPath= MDpath;
SetDirectory[$ModelPath];
LoadModel[ModelName]


checkPDGs[]:=
Block[{BSMPDGs={},SMPDGs={1,2,3,4,5,6,11,12,13,14,15,16,21,22,23,24,25},LeftPDGs={},
SMNames={"d-Quark","u-Quark","s-Quark","c-Quark","b-Quark","t-Quark",
"Electron","Electron Neutrino","Muon","Muon Neutrino","Tau","Tau Neutrino"
,"Gluon","Photon","Z Boson","W Boson","Higgs Boson"}},
	Do[
		AppendTo[BSMPDGs,PDG/.M$ClassesDescription[[i,2]]];
	,{i,Length[M$ClassesDescription]}];
	BSMPDGs=Complement[Flatten[BSMPDGs],{PDG}];
	
	LeftPDGs=Complement[SMPDGs,Intersection[SMPDGs,Flatten[BSMPDGs]]];
	If[Length[LeftPDGs]!=0,
		Print["The following SM particles are either missing from the model file or have a wrong PDG number assigned:"];
		Do[
			Print["Particle: ",SMNames[[Position[SMPDGs,LeftPDGs[[i]]][[1,1]]]]," | PDG Number: ", LeftPDGs[[i]]]
		,{i,Length[LeftPDGs]}];
		Print["Please change your model.fr file accordingly to ensure a correct implementation of the model."];
		Quit[];
	];
]


checkParameters[]:=
Block[{current={},external={},internal={},definitions={},type,val},
	Do[
		type = ParameterType/.M$Parameters[[iii,2]];
		current={M$Parameters[[iii,1]],Value}/.M$Parameters[[iii,2]];
		If[current[[2]]===Value,
			current = Definitions/.M$Parameters[[iii,2]];
			AppendTo[definitions,Rule[current[[1,1]],current[[1,2]]]],
			Which[
			type === External,
				If[!NumericQ[current[[2]]],
					Print["The External parameter: ", current[[1]] ," has a non numeric value given by ", current[[2]],"."];
					Print["Please assign the parameter a numeric value or declare it as Internal"];
					Quit[];
				];
				AppendTo[external,Rule[current[[1]],current[[2]]]],
			type === Internal,
				AppendTo[internal,Flatten[current]],
			True,
				Print["Please define the ParameterType of ",M$Parameters[[iii,1]]," either as external or internal."]
				(*Quit[];*)
			];
		]
	,{iii,Length[M$Parameters]}];
	
	Do[
		current = Mass/.M$ClassesDescription[[iii,2]];
		Which[
		Length[current]===2,
			If[current[[2]]===Internal,
				Continue[],
				AppendTo[external,Rule[current[[1]],current[[2]]]]
			],
		Length[current]>2,
			Do[
				If[current[[jjj,2]]===Internal,
					Continue[],
					AppendTo[external,Rule[current[[jjj,1]],current[[jjj,2]]]]
				]
			,{jjj,2,Length[current]}]
		]
	,{iii,Length[M$ClassesDescription]}];
	(*Print[external];
	Print[internal];*)
	Do[
		If[Length[internal[[iii]]]>2,
			val = internal[[iii,jjj,2]]/.definitions/.external;
			If[NumericQ[val],
				AppendTo[external,Rule[internal[[iii,jjj,1]],val]],
				Print["The Internal parameter: ",internal[[iii,jjj,1]]," has a non numeric value of: ",val," after inserting all external and previous parameters."];
				Print["Please order the internal parameters in the model.fr files such that they only use previously declared internal parameters or external parameters."];
				Quit[];
			]
			,
			val = internal[[iii,jjj]]/.definitions/.external;
			If[NumericQ[val],
				AppendTo[external,Rule[internal[[iii,1]],val]],
				(*Print[FullForm[val]];*)
				Print["The Internal parameter: ",internal[[iii,1]]," has a non numeric value of: " ,val," after inserting all external and previous parameters."];
				Print["Please order the internal parameters in the model.fr files such that they only use previously declared internal parameters or external parameters."];
				Quit[];
			]
		];
	,{iii,Length[internal]},{jjj,2,Length[internal[[iii]]]}];
	
]


checkDarkSector[]:=
Block[{darkSector={}},
Do[
  Do[
    If[StringMatchQ[ToString[subEntry], "~" ~~ __], AppendTo[darkSector, subEntry]],
    {subEntry, Flatten@{ParticleName /. M$ClassesDescription[[i, 2]]}}
  ],
{i, Length[M$ClassesDescription]}];
Do[
  Do[
    If[StringMatchQ[ToString[subEntry], "~" ~~ __], AppendTo[darkSector, subEntry]],
    {subEntry, Flatten@{AntiParticleName /. M$ClassesDescription[[i, 2]]}}
  ],
{i, Length[M$ClassesDescription]}];
 
	If[Length[darkSector]!=0,
		Print["\n"];
		Print["%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"];
		Print["The dark sector particles from the model file are:"];
		Do[
			Print[darkSector[[i]]];
		,{i,Length[darkSector]}];
		Print["%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"];
		Print["\n"]; ,
		Print["\n"];
		Print["%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"];
		Print["There are no dark sector particles in your model. Please change your model.fr file and include in the ParticleName option a ~ before the name of the particles that belong to this sector."];
		Print["%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"];
		Print["\n"];
		Quit[];
	];
]


checkPDGs[]


checkParameters[]


checkDarkSector[]


ofile= MDpath <> "/passed.txt";
sfile=OpenWrite[ofile];
Close[sfile];


WriteCHOutput[lagname, Output->"CH_modfiles"]
WriteFeynArtsOutput[lagname, FlavorExpand->True, Output->"FA_modfiles"]
