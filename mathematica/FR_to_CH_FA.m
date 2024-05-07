(* ::Package:: *)

FRpath = ToString[$CommandLine[[4]]](*"/home/johann/Documents/feynrules-current"*);
ModelName = ToString[$CommandLine[[5]]](*"CPVDM.fr"*);
lagname = ToExpression[$CommandLine[[6]]];
MDpath = ToString[$CommandLine[[7]]](*"/home/johann/Documents/Projects/DM/darktree_new/md_cpvdm/FR_modfiles"*);

$FeynRulesPath=FRpath;
SetDirectory[$FeynRulesPath];
<<FeynRules.m ;


parentPath = $InputFileName /. "" :> NotebookFileName[]
parentDir = DirectoryName @ parentPath
directory = ParentDirectory[parentDir];
$ModelPath= MDpath;(*directory<>"/FR_modfiles";*)
SetDirectory[$ModelPath];
LoadModel[ModelName]


checkPDGs[]:=
Block[{BSMPDGs={},SMPDGs={1,2,3,4,5,6,11,12,13,14,15,16,21,22,23,24,25},LeftPDGs={},
SMNames={"d-Quark","u-Quark","s-Quark","c-Quark","b-Quark","t-Quark",
"Electron","Electron Neutrino","Muon","Muon Neutrino","Tau","Tau Neutrino"
,"Gluon","Photon","Z Boson","W Boson","Higgs Boson"}},
	Do[
		If[M$ClassesDescription[[i,2,j,1]]===PDG,
			AppendTo[BSMPDGs,M$ClassesDescription[[i,2,j,2]]];
		]
	,{i,Length[M$ClassesDescription]},{j,Length[M$ClassesDescription[[i,2]]]}];
	LeftPDGs=Complement[SMPDGs,Intersection[SMPDGs,Flatten[BSMPDGs]]];
	If[Length[LeftPDGs]!=0,
		Print["The following SM particles are either missing from the model file or have a wrong PDG number assigned:"];
		Do[
			Print["Particle: ",SMNames[[Position[SMPDGs,LeftPDGs[[i]]][[1,1]]]]," | PDG Number: ", LeftPDGs[[i]]]
		,{i,Length[LeftPDGs]}];
		Print["Please change your model.fr file accordingly to ensure a correct implementation of the model."];
		Quit[];
	];
	ofile= MDpath <> "/passed.txt";
	sfile=OpenWrite[ofile];
	Close[sfile];
]


checkPDGs[]


WriteCHOutput[lagname, Output->"CH_modfiles"]
WriteFeynArtsOutput[lagname, FlavorExpand->True, Output->"FA_modfiles"]
