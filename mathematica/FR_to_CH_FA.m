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
$ModelPath= MDpath;(*directory<>"/FR_modfiles";*)
SetDirectory[$ModelPath];
LoadModel[ModelName]

WriteCHOutput[lagname, Output->"CH_modfiles"]
WriteFeynArtsOutput[lagname, FlavorExpand->True, Output->"FA_modfiles"]




