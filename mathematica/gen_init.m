(* ::Package:: *)

parentPath = $InputFileName /. "" :> NotebookFileName[];
parentDir = DirectoryName @ parentPath;
directory = ParentDirectory[parentDir]<>"/";

MDdir = ToString[$CommandLine[[5]]]<>"/";

mathlabel= "///////////////////CODE GENERATED VIA MATHEMATICA///////////////////\n\n";


(*preparation of the files relevant to define the model parameters*)

(*external parameters*)
varsfile = Import[MDdir<>"FR_modfiles/CH_modfiles/vars1.mdl", "Table", "FieldSeparators"->"|"];
external = Map[StringDelete[StringReplace[ToString[#], "%"->""], WhitespaceCharacter]&, varsfile, {-1}][[4;;, {1,2}]];

(*internal parameters*)
funcfile = Import[MDdir<>"FR_modfiles/CH_modfiles/func1.mdl", "Table", "FieldSeparators"->{"|","%"}];
tempinternal = Map[StringDelete[ToString[#], WhitespaceCharacter]&, funcfile, {-1}][[4;;, {1,2}]];
removeElem = {};
Do[
If[StringContainsQ[ToString[tempinternal[[i, 1]]], "x"~~__~~"x"] || StringContainsQ[ToString[tempinternal[[i,2]]], "if(slhaFound"] || StringContainsQ[ToString[tempinternal[[i,2]]], "1+access"] , AppendTo[removeElem, {i}]];
,{i, Length[tempinternal]}]
internal = Delete[tempinternal, removeElem];

(*neutral ds masses*)
prtclsfile = Import[MDdir<>"FR_modfiles/CH_modfiles/prtcls1.mdl", "Table", "FieldSeparators"->"|"];
neutraldsmasses = {};
Do[
	If[( (StringContainsQ[ToString[prtclsfile[[i, 1]]], "~"] || StringContainsQ[ToString[prtclsfile[[i, 2]]], "~"]) && prtclsfile[[i, 2]]==prtclsfile[[i, 3]] && prtclsfile[[i, 8]] == 1),
	AppendTo[neutraldsmasses, StringDelete[ToString[prtclsfile[[i, 6]]], WhitespaceCharacter]]]
, {i, 4, Length[prtclsfile]}]
neutraldsmasses;


(*init.hpp file*)
initfile=OpenWrite[MDdir<>"include/init.hpp", FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];
Write[initfile, mathlabel];
Write[initfile, "#pragma once \n"];
Write[initfile, "#include <fstream>"];
Write[initfile, "#include <vector>"];
Write[initfile, "#include <iostream>"];
Write[initfile, "#include <sstream>"];
Write[initfile, "#include <cmath>"];
Write[initfile, "#include \"declarations.hpp\"\n"];
Write[initfile, "namespace DT{"];
Write[initfile, "\tvoid loadpoint(std::vector<std::string> data, procinfos *proc);"]
Write[initfile, "\tvoid init(procinfos *proc);"]
Write[initfile, "\tvoid loadmap(std::map<std::string, double*> &map);"]
Write[initfile, "}"];
Close[initfile];


gc1=Import[MDdir<>"amp2s/gcsub.mx"];
possiblemasses=Import[MDdir<>"amp2s/possiblemasses.mx"];
relevantWs=Import[MDdir<>"amp2s/relevantWs.mx"];
possibleini=Import[MDdir<>"amp2s/possibleini.mx"]


(*init.cpp file*)
removeElem = {};
datafile = Import[directory<>"dataInput/"<>ToString[$CommandLine[[4]]], "Table", "FieldSeparators"->{"\t"," ", ","}];
initfile=OpenWrite[MDdir<>"sources/init.cpp", FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];
Write[initfile, mathlabel];
Write[initfile, "#include \"../include/init.hpp\""]
Write[initfile, "#include \"readdata.hpp\""]
Write[initfile, "#include \"../amp2s/allamp2s.hpp\""]
Write[initfile, "#include \"../include/declarations.hpp\"\n"]
Write[initfile, "void DT::init(chinfo& ch, std::vector<std::string> data) {"]
Do[
	If[external[[i,1]]== datafile[[1,j]], 
	Write[initfile, "\t", external[[i,1]] ," = std::stod(data[getColumnIndex(\"", external[[i,1]], "\")]);"];
	AppendTo[removeElem, {i}];
]
, {i, Length[external]}, {j, Length[datafile[[1]]]}]

newexternal = Delete[external, removeElem];

Do[
	Write[initfile, "\t", newexternal[[i,1]] ," = ", newexternal[[i,2]],";"]
,{i,Length[newexternal]}]
Do[
	Write[initfile, "\t", internal[[i,1]] ," = ", internal[[i,2]],";"]
,{i,Length[internal]}]
Write[initfile, "\tEL = EE;"];
Do[
	gsub=StringReplace[ToString[CForm[gc1[[i,2]]]],{"Power"->"pow","Cos"->"cos","Sin"->"sin","Conjugate"->"", "Sqrt"-> "sqrt", "Defer"-> " ", "FeynCalc_MT"->"MT", "FeynCalc`"->""}];
	Write[initfile, "\t", ToString[gc1[[i,1]]] ," = ", gsub,";"]
,{i,Length[gc1]}]
inimass={};
Do[
	If[possiblemasses[[i,2]]===2,
		AppendTo[inimass,ToString[possiblemasses[[i,1]]]];
		AppendTo[inimass,ToString[possiblemasses[[i,1]]]],
		AppendTo[inimass,ToString[possiblemasses[[i,1]]]];
		AppendTo[inimass,ToString[possiblemasses[[i,2]]]]
	]
,{i,Length[possiblemasses]}]
Do[
	Write[initfile, "\tch.inimass[", ToString[i-1] ,"] = " , inimass[[i]] , ";"];
,{i,Length[inimass]}]
Do[
	Write[initfile, "\tch.neutraldsmasses[", ToString[i-1] ,"] = ", neutraldsmasses[[i]], ";"];
,{i,Length[neutraldsmasses]}]
Do[
	Write[initfile, "\tch.den_structure[", ToString[i-1] ,"] = ", StringReplace[ToString[relevantWs[[i]]],{"FeynCalc`"->""}] , ";"];
,{i,Length[relevantWs]}]
Do[
	Write[initfile, "\tch.inifunc[", ToString[i-1] ,"] = amp2s::", possibleini[[i]] , ";"];
,{i,Length[possibleini]}]

(*Write[initfile, "\tutils::assigndm();"]*)
Write[initfile, "}"];
Close[initfile];


(*loadpars file
newexternal = Delete[external, removeElem];
(*gc = M$FACouplings;
gc1=gc/.subrule; gc1 = Replace[gc1, defer, All];*)

sfile=OpenWrite[MDdir<>"amp2s/loadpars.hpp",FormatType->StandardForm, TotalWidth->Infinity, PageWidth->Infinity];
Write[sfile, "namespace DT{"];
Write[sfile,"void loadpars() {"];
Do[
	Write[sfile, "\t", newexternal[[i,1]] ," = ", newexternal[[i,2]],";"]
,{i,Length[newexternal]}]
Do[
	Write[sfile, "\t", internal[[i,1]] ," = ", internal[[i,2]],";"]
,{i,Length[internal]}]
Write[sfile, "\tEL = EE;"];
Do[
	gsub=StringReplace[ToString[CForm[gc1[[i,2]]]],{"Power"->"pow","Cos"->"cos","Sin"->"sin","Conjugate"->"", "Sqrt"-> "sqrt", "Defer"-> " ", "FeynCalc_MT"->"MT"}];
	Write[sfile, "\t", ToString[gc1[[i,1]]] ," = ", gsub,";"]
,{i,Length[gc1]}]
inimass={};
Do[
	If[possiblemasses[[i,2]]===2,
		AppendTo[inimass,ToString[possiblemasses[[i,1]]]];
		AppendTo[inimass,ToString[possiblemasses[[i,1]]]],
		AppendTo[inimass,ToString[possiblemasses[[i,1]]]];
		AppendTo[inimass,ToString[possiblemasses[[i,2]]]]
	]
,{i,Length[possiblemasses]}]
Write[sfile, "\tparams::inimass[", ToString[Length[inimass]] ,"] = " , inimass , ";"];
Write[sfile, "\tparams::neutraldsmasses[", ToString[Length[neutraldsmasses]] ,"] = ", neutraldsmasses, ";"];
Write[sfile, "\tparams::den_structure[", ToString[Length[relevantWs]] ,"] = ", relevantWs , ";"];
Write[sfile, "}"];
Write[sfile, "}"];
Close[sfile];*)
