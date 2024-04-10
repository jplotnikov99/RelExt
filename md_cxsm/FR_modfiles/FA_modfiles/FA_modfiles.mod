(* Patched for use with FeynCalc *)
(* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *)
(*                                                                             *)
(*         This file has been automatically generated by FeynRules.            *)
(*                                                                             *)
(* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *)


FR$ModelInformation={
  ModelName->"CxSM",
  Authors -> {"Joa~o Viana"},
  Version -> "1.0"};

FR$ClassesTranslation={A -> V[1], Z -> V[2], W -> V[3], G -> V[4], ghA -> U[1], ghZ -> U[2], ghWp -> U[3], ghWm -> U[4], ghG -> U[5], ve -> F[1], vm -> F[2], vt -> F[3], e -> F[4], mu -> F[5], ta -> F[6], u -> F[7], c -> F[8], t -> F[9], d -> F[10], s -> F[11], b -> F[12], H -> S[1], G0 -> S[2], GP -> S[3], S1 -> S[4], A1 -> S[5]};

FR$InteractionOrderPerturbativeExpansion={{QCD, 0}, {QED, 0}};

FR$GoldstoneList={S[2], S[3]};

(*     Declared indices    *)

IndexRange[ Index[Gluon] ] = NoUnfold[ Range[ 8 ] ]

IndexRange[ Index[SU2W] ] = Range[ 3 ]

IndexRange[ Index[Generation] ] = Range[ 3 ]

IndexRange[ Index[Colour] ] = NoUnfold[ Range[ 3 ] ]

IndexRange[ Index[SU2D] ] = Range[ 2 ]

(*     Declared particles    *)

M$ClassesDescription = {
V[1] == {
    SelfConjugate -> True,
    PropagatorType -> Sine,
    PropagatorArrow -> None,
    Mass -> 0,
    Indices -> {},
    PropagatorLabel -> "A" },

V[2] == {
    SelfConjugate -> True,
    PropagatorType -> Sine,
    PropagatorArrow -> None,
    Mass -> FCGV["MZ"],
    Indices -> {},
    PropagatorLabel -> "Z" },

V[3] == {
    SelfConjugate -> False,
    QuantumNumbers -> {Q},
    PropagatorType -> Sine,
    PropagatorArrow -> Forward,
    Mass -> FCGV["MW"],
    Indices -> {},
    PropagatorLabel -> "W" },

V[4] == {
    SelfConjugate -> True,
    PropagatorType -> Cycles,
    PropagatorArrow -> None,
    Mass -> 0,
    Indices -> {Index[Gluon]},
    PropagatorLabel -> "G" },

U[1] == {
    SelfConjugate -> False,
    QuantumNumbers -> {GhostNumber},
    PropagatorType -> GhostDash,
    PropagatorArrow -> Forward,
    Mass -> 0,
    Indices -> {},
    PropagatorLabel -> "ghA" },

U[2] == {
    SelfConjugate -> False,
    QuantumNumbers -> {GhostNumber},
    PropagatorType -> GhostDash,
    PropagatorArrow -> Forward,
    Mass -> FCGV["MZ"],
    Indices -> {},
    PropagatorLabel -> "ghZ" },

U[3] == {
    SelfConjugate -> False,
    QuantumNumbers -> {GhostNumber, Q},
    PropagatorType -> GhostDash,
    PropagatorArrow -> Forward,
    Mass -> FCGV["MW"],
    Indices -> {},
    PropagatorLabel -> "ghWp" },

U[4] == {
    SelfConjugate -> False,
    QuantumNumbers -> {GhostNumber, -Q},
    PropagatorType -> GhostDash,
    PropagatorArrow -> Forward,
    Mass -> FCGV["MW"],
    Indices -> {},
    PropagatorLabel -> "ghWm" },

U[5] == {
    SelfConjugate -> False,
    QuantumNumbers -> {GhostNumber},
    PropagatorType -> GhostDash,
    PropagatorArrow -> Forward,
    Mass -> 0,
    Indices -> {Index[Gluon]},
    PropagatorLabel -> "ghG" },

F[1] == {
    SelfConjugate -> False,
    QuantumNumbers -> {LeptonNumber},
    PropagatorType -> Straight,
    PropagatorArrow -> Forward,
    Mass -> 0,
    Indices -> {},
    PropagatorLabel -> "ve" },

F[2] == {
    SelfConjugate -> False,
    QuantumNumbers -> {LeptonNumber},
    PropagatorType -> Straight,
    PropagatorArrow -> Forward,
    Mass -> 0,
    Indices -> {},
    PropagatorLabel -> "vm" },

F[3] == {
    SelfConjugate -> False,
    QuantumNumbers -> {LeptonNumber},
    PropagatorType -> Straight,
    PropagatorArrow -> Forward,
    Mass -> 0,
    Indices -> {},
    PropagatorLabel -> "vt" },

F[4] == {
    SelfConjugate -> False,
    QuantumNumbers -> {-Q, LeptonNumber},
    PropagatorType -> Straight,
    PropagatorArrow -> Forward,
    Mass -> Me,
    Indices -> {},
    PropagatorLabel -> "e" },

F[5] == {
    SelfConjugate -> False,
    QuantumNumbers -> {-Q, LeptonNumber},
    PropagatorType -> Straight,
    PropagatorArrow -> Forward,
    Mass -> MMU,
    Indices -> {},
    PropagatorLabel -> "mu" },

F[6] == {
    SelfConjugate -> False,
    QuantumNumbers -> {-Q, LeptonNumber},
    PropagatorType -> Straight,
    PropagatorArrow -> Forward,
    Mass -> MTA,
    Indices -> {},
    PropagatorLabel -> "ta" },

F[7] == {
    SelfConjugate -> False,
    QuantumNumbers -> {(2*Q)/3},
    PropagatorType -> Straight,
    PropagatorArrow -> Forward,
    Mass -> FCGV["MU"],
    Indices -> {Index[Colour]},
    PropagatorLabel -> "u" },

F[8] == {
    SelfConjugate -> False,
    QuantumNumbers -> {(2*Q)/3},
    PropagatorType -> Straight,
    PropagatorArrow -> Forward,
    Mass -> FCGV["MC"],
    Indices -> {Index[Colour]},
    PropagatorLabel -> "c" },

F[9] == {
    SelfConjugate -> False,
    QuantumNumbers -> {(2*Q)/3},
    PropagatorType -> Straight,
    PropagatorArrow -> Forward,
    Mass -> FCGV["MT"],
    Indices -> {Index[Colour]},
    PropagatorLabel -> "t" },

F[10] == {
    SelfConjugate -> False,
    QuantumNumbers -> {-1/3*Q},
    PropagatorType -> Straight,
    PropagatorArrow -> Forward,
    Mass -> FCGV["MD"],
    Indices -> {Index[Colour]},
    PropagatorLabel -> "d" },

F[11] == {
    SelfConjugate -> False,
    QuantumNumbers -> {-1/3*Q},
    PropagatorType -> Straight,
    PropagatorArrow -> Forward,
    Mass -> FCGV["MS"],
    Indices -> {Index[Colour]},
    PropagatorLabel -> "s" },

F[12] == {
    SelfConjugate -> False,
    QuantumNumbers -> {-1/3*Q},
    PropagatorType -> Straight,
    PropagatorArrow -> Forward,
    Mass -> FCGV["MB"],
    Indices -> {Index[Colour]},
    PropagatorLabel -> "b" },

S[1] == {
    SelfConjugate -> True,
    PropagatorType -> ScalarDash,
    PropagatorArrow -> None,
    Mass -> FCGV["MH"],
    Indices -> {},
    PropagatorLabel -> "H" },

S[2] == {
    SelfConjugate -> True,
    PropagatorType -> ScalarDash,
    PropagatorArrow -> None,
    Mass -> FCGV["MZ"],
    Indices -> {},
    PropagatorLabel -> "G0" },

S[3] == {
    SelfConjugate -> False,
    QuantumNumbers -> {Q},
    PropagatorType -> ScalarDash,
    PropagatorArrow -> None,
    Mass -> FCGV["MW"],
    Indices -> {},
    PropagatorLabel -> "GP" },

S[4] == {
    SelfConjugate -> True,
    PropagatorType -> ScalarDash,
    PropagatorArrow -> None,
    Mass -> MS1,
    Indices -> {},
    PropagatorLabel -> "S1" },

S[5] == {
    SelfConjugate -> True,
    PropagatorType -> ScalarDash,
    PropagatorArrow -> None,
    Mass -> MA1,
    Indices -> {},
    PropagatorLabel -> "A1" }
}


(*        Definitions       *)

FAGaugeXi[ V[1] ] = FAGaugeXi[A];
FAGaugeXi[ V[2] ] = FAGaugeXi[Z];
FAGaugeXi[ V[3] ] = FAGaugeXi[W];
FAGaugeXi[ V[4] ] = FAGaugeXi[G];
FAGaugeXi[ U[1] ] = FAGaugeXi[A];
FAGaugeXi[ U[2] ] = FAGaugeXi[Z];
FAGaugeXi[ U[3] ] = FAGaugeXi[W];
FAGaugeXi[ U[4] ] = FAGaugeXi[W];
FAGaugeXi[ U[5] ] = FAGaugeXi[G];
FAGaugeXi[ S[1] ] = 1;
FAGaugeXi[ S[2] ] = FAGaugeXi[Z];
FAGaugeXi[ S[3] ] = FAGaugeXi[W];

FCGV["MZ"][ ___ ] := FCGV["MZ"];
FCGV["MW"][ ___ ] := FCGV["MW"];
Me[ ___ ] := Me;
MMU[ ___ ] := MMU;
MTA[ ___ ] := MTA;
FCGV["MU"][ ___ ] := FCGV["MU"];
FCGV["MC"][ ___ ] := FCGV["MC"];
FCGV["MT"][ ___ ] := FCGV["MT"];
FCGV["MD"][ ___ ] := FCGV["MD"];
FCGV["MS"][ ___ ] := FCGV["MS"];
FCGV["MB"][ ___ ] := FCGV["MB"];
FCGV["MH"][ ___ ] := FCGV["MH"];
MS1[ ___ ] := MS1;
MA1[ ___ ] := MA1;


TheLabel[ V[4, {__}] ] := TheLabel[V[4]];
TheLabel[ U[5, {__}] ] := TheLabel[U[5]];
TheLabel[ F[7, {__}] ] := TheLabel[F[7]];
TheLabel[ F[8, {__}] ] := TheLabel[F[8]];
TheLabel[ F[9, {__}] ] := TheLabel[F[9]];
TheLabel[ F[10, {__}] ] := TheLabel[F[10]];
TheLabel[ F[11, {__}] ] := TheLabel[F[11]];
TheLabel[ F[12, {__}] ] := TheLabel[F[12]];


(*      Couplings (calculated by FeynRules)      *)

M$CouplingMatrices = {

C[ S[5] , S[5] , S[5] , S[5] ] == {{(((3*I)/2)*(-FCGV["MH"]^2 - MS1^2 + (FCGV["MH"]^2 - MS1^2)*Cos[2*alpha]))/svev^2, 0}},

C[ S[2] , S[2] , S[2] , S[2] ] == {{(((-3*I)/2)*(FCGV["MH"]^2 + MS1^2 + (FCGV["MH"]^2 - MS1^2)*Cos[2*alpha]))/vev^2, 0}},

C[ S[2] , S[2] , S[3] , -S[3] ] == {{((-1/2*I)*(FCGV["MH"]^2 + MS1^2 + (FCGV["MH"]^2 - MS1^2)*Cos[2*alpha]))/vev^2, 0}},

C[ S[3] , S[3] , -S[3] , -S[3] ] == {{((-I)*(FCGV["MH"]^2 + MS1^2 + (FCGV["MH"]^2 - MS1^2)*Cos[2*alpha]))/vev^2, 0}},

C[ S[3] , -S[3] , V[1] , V[1] ] == {{(2*I)*FCGV["EL"]^2, 0}},

C[ S[5] , S[5] , S[4] ] == {{((-I)*MS1^2*Cos[alpha])/svev, 0}},

C[ S[2] , S[2] , S[1] ] == {{((-I)*FCGV["MH"]^2*Cos[alpha])/vev, 0}},

C[ S[3] , -S[3] , S[1] ] == {{((-I)*FCGV["MH"]^2*Cos[alpha])/vev, 0}},

C[ S[5] , S[5] , S[4] , S[4] ] == {{((-1/2*I)*Cos[alpha]*(vev*Cos[alpha]*(FCGV["MH"]^2 + MS1^2 + (-FCGV["MH"]^2 + MS1^2)*Cos[2*alpha]) + 2*(FCGV["MH"]^2 - MS1^2)*svev*Sin[alpha]^3))/(svev^2*vev), 0}},

C[ S[2] , S[2] , S[1] , S[1] ] == {{((-1/2*I)*Cos[alpha]*(svev*Cos[alpha]*(FCGV["MH"]^2 + MS1^2 + (FCGV["MH"]^2 - MS1^2)*Cos[2*alpha]) + 2*(FCGV["MH"]^2 - MS1^2)*vev*Sin[alpha]^3))/(svev*vev^2), 0}},

C[ S[3] , -S[3] , S[1] , S[1] ] == {{((-1/2*I)*Cos[alpha]*(svev*Cos[alpha]*(FCGV["MH"]^2 + MS1^2 + (FCGV["MH"]^2 - MS1^2)*Cos[2*alpha]) + 2*(FCGV["MH"]^2 - MS1^2)*vev*Sin[alpha]^3))/(svev*vev^2), 0}},

C[ S[4] , S[4] , S[4] ] == {{(((-9*I)/2)*MS1^2*vev*Cos[alpha] - ((3*I)/2)*MS1^2*vev*Cos[alpha]^3 + ((9*I)/2)*MS1^2*svev*Sin[alpha] - ((9*I)/2)*MS1^2*svev*Cos[alpha]^2*Sin[alpha] + ((9*I)/2)*MS1^2*vev*Cos[alpha]*Sin[alpha]^2 + ((3*I)/2)*MS1^2*svev*Sin[alpha]^3)/(2*svev*vev), 0}},

C[ S[1] , S[1] , S[1] ] == {{(((-3*I)/4)*FCGV["MH"]^2*(3*svev*Cos[alpha] + svev*Cos[3*alpha] + 4*vev*Sin[alpha]^3))/(svev*vev), 0}},

C[ S[4] , S[4] , S[4] , S[4] ] == {{(((-3*I)/2)*(-(vev^2*Cos[alpha]^4*(-FCGV["MH"]^2 - MS1^2 + (FCGV["MH"]^2 - MS1^2)*Cos[2*alpha])) + 4*(FCGV["MH"]^2 - MS1^2)*svev*vev*Cos[alpha]^3*Sin[alpha]^3 + svev^2*(FCGV["MH"]^2 + MS1^2 + (FCGV["MH"]^2 - MS1^2)*Cos[2*alpha])*Sin[alpha]^4))/(svev^2*vev^2), 0}},

C[ S[1] , S[1] , S[1] , S[1] ] == {{(((-3*I)/2)*(svev^2*Cos[alpha]^4*(FCGV["MH"]^2 + MS1^2 + (FCGV["MH"]^2 - MS1^2)*Cos[2*alpha]) + 4*(FCGV["MH"]^2 - MS1^2)*svev*vev*Cos[alpha]^3*Sin[alpha]^3 + vev^2*(FCGV["MH"]^2 + MS1^2 + (-FCGV["MH"]^2 + MS1^2)*Cos[2*alpha])*Sin[alpha]^4))/(svev^2*vev^2), 0}},

C[ S[3] , -S[3] , V[1] ] == {{(-I)*gc16, 0}, {I*gc16, 0}},

C[ -U[1] , U[4] , V[3] ] == {{I*gc17, 0}, {I*gc17, 0}, {0, 0}},

C[ -U[1] , U[3] , -V[3] ] == {{I*gc18, 0}, {I*gc18, 0}, {0, 0}},

C[ -S[3] , -U[4] , U[1] ] == {{(FCGV["EL"]^2*vev)/(2*sw), 0}},

C[ -U[4] , U[1] , -V[3] ] == {{I*gc20, 0}, {I*gc20, 0}, {0, 0}},

C[ S[2] , -U[4] , U[4] ] == {{-1/4*(FCGV["EL"]^2*vev)/sw^2, 0}},

C[ S[1] , -U[4] , U[4] ] == {{((-1/4*I)*FCGV["EL"]^2*vev*Cos[alpha])/sw^2, 0}},

C[ -U[4] , U[4] , V[1] ] == {{I*gc23, 0}, {I*gc23, 0}, {0, 0}},

C[ -U[4] , U[4] , V[2] ] == {{I*gc24, 0}, {I*gc24, 0}, {0, 0}},

C[ -S[3] , -U[4] , U[2] ] == {{(FCGV["EL"]^2*(cw - sw)*(cw + sw)*vev)/(4*cw*sw^2), 0}},

C[ -U[4] , U[2] , -V[3] ] == {{I*gc26, 0}, {I*gc26, 0}, {0, 0}},

C[ S[3] , -U[3] , U[1] ] == {{-1/2*(FCGV["EL"]^2*vev)/sw, 0}},

C[ -U[3] , U[1] , V[3] ] == {{I*gc28, 0}, {I*gc28, 0}, {0, 0}},

C[ S[2] , -U[3] , U[3] ] == {{(FCGV["EL"]^2*vev)/(4*sw^2), 0}},

C[ S[1] , -U[3] , U[3] ] == {{((-1/4*I)*FCGV["EL"]^2*vev*Cos[alpha])/sw^2, 0}},

C[ -U[3] , U[3] , V[1] ] == {{I*gc31, 0}, {I*gc31, 0}, {0, 0}},

C[ -U[3] , U[3] , V[2] ] == {{I*gc32, 0}, {I*gc32, 0}, {0, 0}},

C[ S[3] , -U[3] , U[2] ] == {{-1/4*(FCGV["EL"]^2*(cw - sw)*(cw + sw)*vev)/(cw*sw^2), 0}},

C[ -U[3] , U[2] , V[3] ] == {{I*gc34, 0}, {I*gc34, 0}, {0, 0}},

C[ S[3] , -U[2] , U[4] ] == {{(FCGV["EL"]^2*(cw^2 + sw^2)*vev)/(4*cw*sw^2), 0}},

C[ -U[2] , U[4] , V[3] ] == {{I*gc36, 0}, {I*gc36, 0}, {0, 0}},

C[ -S[3] , -U[2] , U[3] ] == {{-1/4*(FCGV["EL"]^2*(cw^2 + sw^2)*vev)/(cw*sw^2), 0}},

C[ -U[2] , U[3] , -V[3] ] == {{I*gc38, 0}, {I*gc38, 0}, {0, 0}},

C[ S[1] , -U[2] , U[2] ] == {{((-1/4*I)*FCGV["EL"]^2*(cw^2 + sw^2)^2*vev*Cos[alpha])/(cw^2*sw^2), 0}},

C[ -U[5, {e1x1}] , U[5, {e2x1}] , V[4, {e3x2}] ] == {{gc40*FASUNF[e3x2, e1x1, e2x1], 0}, {gc40*FASUNF[e3x2, e1x1, e2x1], 0}, {0, 0}},

C[ V[4, {e1x2}] , V[4, {e2x2}] , V[4, {e3x2}] ] == {{-(gc41*FASUNF[e1x2, e2x2, e3x2]), 0}, {gc41*FASUNF[e1x2, e2x2, e3x2], 0}, {gc41*FASUNF[e1x2, e2x2, e3x2], 0}, {-(gc41*FASUNF[e1x2, e2x2, e3x2]), 0}, {-(gc41*FASUNF[e1x2, e2x2, e3x2]), 0}, {gc41*FASUNF[e1x2, e2x2, e3x2], 0}},

C[ V[4, {e1x2}] , V[4, {e2x2}] , V[4, {e3x2}] , V[4, {e4x2}] ] == {{(-I)*gc42*(FASUNF[e1x2, e2x2, e3x2, e4x2] + FASUNF[e1x2, e3x2, e2x2, e4x2]), 0}, {I*gc42*(FASUNF[e1x2, e2x2, e3x2, e4x2] - FASUNF[e1x2, e4x2, e2x2, e3x2]), 0}, {I*gc42*(FASUNF[e1x2, e3x2, e2x2, e4x2] + FASUNF[e1x2, e4x2, e2x2, e3x2]), 0}},

C[ -F[12, {e1x2}] , F[8, {e2x2}] , -S[3] ] == {{gc43L*IndexDelta[e1x2, e2x2], 0}, {gc43R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[12, {e1x2}] , F[9, {e2x2}] , -S[3] ] == {{gc44L*IndexDelta[e1x2, e2x2], 0}, {gc44R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[12, {e1x2}] , F[7, {e2x2}] , -S[3] ] == {{gc45L*IndexDelta[e1x2, e2x2], 0}, {gc45R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[10, {e1x2}] , F[8, {e2x2}] , -S[3] ] == {{gc46L*IndexDelta[e1x2, e2x2], 0}, {gc46R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[10, {e1x2}] , F[9, {e2x2}] , -S[3] ] == {{gc47L*IndexDelta[e1x2, e2x2], 0}, {gc47R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[10, {e1x2}] , F[7, {e2x2}] , -S[3] ] == {{gc48L*IndexDelta[e1x2, e2x2], 0}, {gc48R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[11, {e1x2}] , F[8, {e2x2}] , -S[3] ] == {{gc49L*IndexDelta[e1x2, e2x2], 0}, {gc49R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[11, {e1x2}] , F[9, {e2x2}] , -S[3] ] == {{gc50L*IndexDelta[e1x2, e2x2], 0}, {gc50R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[11, {e1x2}] , F[7, {e2x2}] , -S[3] ] == {{gc51L*IndexDelta[e1x2, e2x2], 0}, {gc51R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[12, {e1x2}] , F[12, {e2x2}] , S[2] ] == {{gc52L*IndexDelta[e1x2, e2x2], 0}, {gc52R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[10, {e1x2}] , F[10, {e2x2}] , S[2] ] == {{gc53L*IndexDelta[e1x2, e2x2], 0}, {gc53R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[11, {e1x2}] , F[11, {e2x2}] , S[2] ] == {{gc54L*IndexDelta[e1x2, e2x2], 0}, {gc54R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[12, {e1x2}] , F[12, {e2x2}] , S[1] ] == {{I*gc55*IndexDelta[e1x2, e2x2], 0}, {I*gc55*IndexDelta[e1x2, e2x2], 0}},

C[ -F[10, {e1x2}] , F[10, {e2x2}] , S[1] ] == {{I*gc56*IndexDelta[e1x2, e2x2], 0}, {I*gc56*IndexDelta[e1x2, e2x2], 0}},

C[ -F[11, {e1x2}] , F[11, {e2x2}] , S[1] ] == {{I*gc57*IndexDelta[e1x2, e2x2], 0}, {I*gc57*IndexDelta[e1x2, e2x2], 0}},

C[ -F[4] , F[1] , -S[3] ] == {{gc58, 0}, {0, 0}},

C[ -F[5] , F[2] , -S[3] ] == {{gc59, 0}, {0, 0}},

C[ -F[6] , F[3] , -S[3] ] == {{gc60, 0}, {0, 0}},

C[ -F[4] , F[4] , S[2] ] == {{gc61L, 0}, {gc61R, 0}},

C[ -F[5] , F[5] , S[2] ] == {{gc62L, 0}, {gc62R, 0}},

C[ -F[6] , F[6] , S[2] ] == {{gc63L, 0}, {gc63R, 0}},

C[ -F[4] , F[4] , S[1] ] == {{I*gc64, 0}, {I*gc64, 0}},

C[ -F[5] , F[5] , S[1] ] == {{I*gc65, 0}, {I*gc65, 0}},

C[ -F[6] , F[6] , S[1] ] == {{I*gc66, 0}, {I*gc66, 0}},

C[ -F[8, {e1x2}] , F[12, {e2x2}] , S[3] ] == {{gc67L*IndexDelta[e1x2, e2x2], 0}, {gc67R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[8, {e1x2}] , F[10, {e2x2}] , S[3] ] == {{gc68L*IndexDelta[e1x2, e2x2], 0}, {gc68R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[8, {e1x2}] , F[11, {e2x2}] , S[3] ] == {{gc69L*IndexDelta[e1x2, e2x2], 0}, {gc69R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[9, {e1x2}] , F[12, {e2x2}] , S[3] ] == {{gc70L*IndexDelta[e1x2, e2x2], 0}, {gc70R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[9, {e1x2}] , F[10, {e2x2}] , S[3] ] == {{gc71L*IndexDelta[e1x2, e2x2], 0}, {gc71R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[9, {e1x2}] , F[11, {e2x2}] , S[3] ] == {{gc72L*IndexDelta[e1x2, e2x2], 0}, {gc72R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[7, {e1x2}] , F[12, {e2x2}] , S[3] ] == {{gc73L*IndexDelta[e1x2, e2x2], 0}, {gc73R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[7, {e1x2}] , F[10, {e2x2}] , S[3] ] == {{gc74L*IndexDelta[e1x2, e2x2], 0}, {gc74R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[7, {e1x2}] , F[11, {e2x2}] , S[3] ] == {{gc75L*IndexDelta[e1x2, e2x2], 0}, {gc75R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[8, {e1x2}] , F[8, {e2x2}] , S[2] ] == {{gc76L*IndexDelta[e1x2, e2x2], 0}, {gc76R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[9, {e1x2}] , F[9, {e2x2}] , S[2] ] == {{gc77L*IndexDelta[e1x2, e2x2], 0}, {gc77R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[7, {e1x2}] , F[7, {e2x2}] , S[2] ] == {{gc78L*IndexDelta[e1x2, e2x2], 0}, {gc78R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[8, {e1x2}] , F[8, {e2x2}] , S[1] ] == {{I*gc79*IndexDelta[e1x2, e2x2], 0}, {I*gc79*IndexDelta[e1x2, e2x2], 0}},

C[ -F[9, {e1x2}] , F[9, {e2x2}] , S[1] ] == {{I*gc80*IndexDelta[e1x2, e2x2], 0}, {I*gc80*IndexDelta[e1x2, e2x2], 0}},

C[ -F[7, {e1x2}] , F[7, {e2x2}] , S[1] ] == {{I*gc81*IndexDelta[e1x2, e2x2], 0}, {I*gc81*IndexDelta[e1x2, e2x2], 0}},

C[ S[5] , S[5] , S[1] ] == {{((-I)*FCGV["MH"]^2*Sin[alpha])/svev, 0}},

C[ S[2] , S[2] , S[4] ] == {{(I*MS1^2*Sin[alpha])/vev, 0}},

C[ S[3] , -S[3] , S[4] ] == {{(I*MS1^2*Sin[alpha])/vev, 0}},

C[ S[5] , S[5] , S[1] , S[4] ] == {{((I/2)*Cos[alpha]*Sin[alpha]*(-((FCGV["MH"]^2 + MS1^2)*vev) + (FCGV["MH"]^2 - MS1^2)*vev*Cos[2*alpha] + (FCGV["MH"]^2 - MS1^2)*svev*Sin[2*alpha]))/(svev^2*vev), 0}},

C[ S[2] , S[2] , S[1] , S[4] ] == {{((I/2)*Cos[alpha]*Sin[alpha]*((FCGV["MH"]^2 + MS1^2)*svev + (FCGV["MH"]^2 - MS1^2)*svev*Cos[2*alpha] - (FCGV["MH"]^2 - MS1^2)*vev*Sin[2*alpha]))/(svev*vev^2), 0}},

C[ S[3] , -S[3] , S[1] , S[4] ] == {{((I/2)*Cos[alpha]*Sin[alpha]*((FCGV["MH"]^2 + MS1^2)*svev + (FCGV["MH"]^2 - MS1^2)*svev*Cos[2*alpha] - (FCGV["MH"]^2 - MS1^2)*vev*Sin[2*alpha]))/(svev*vev^2), 0}},

C[ S[1] , S[4] , S[4] ] == {{((-I)*(FCGV["MH"]^2 + 2*MS1^2)*Cos[alpha]*Sin[alpha]*(vev*Cos[alpha] + svev*Sin[alpha]))/(svev*vev), 0}},

C[ S[1] , S[1] , S[4] ] == {{(I*(2*FCGV["MH"]^2 + MS1^2)*Cos[alpha]*Sin[alpha]*(svev*Cos[alpha] - vev*Sin[alpha]))/(svev*vev), 0}},

C[ S[1] , S[4] , S[4] , S[4] ] == {{(((3*I)/8)*(vev*Cos[alpha] + svev*Sin[alpha])*(-((FCGV["MH"]^2 + 3*MS1^2)*vev*Cos[alpha]) + (FCGV["MH"]^2 - MS1^2)*vev*Cos[3*alpha] + 2*svev*(FCGV["MH"]^2 + MS1^2 + (FCGV["MH"]^2 - MS1^2)*Cos[2*alpha])*Sin[alpha])*Sin[2*alpha])/(svev^2*vev^2), 0}},

C[ S[1] , S[1] , S[1] , S[4] ] == {{(((3*I)/8)*(svev*Cos[alpha] - vev*Sin[alpha])*Sin[2*alpha]*((3*FCGV["MH"]^2 + MS1^2)*svev*Cos[alpha] + (FCGV["MH"]^2 - MS1^2)*svev*Cos[3*alpha] + (3*FCGV["MH"]^2 + MS1^2)*vev*Sin[alpha] + (-FCGV["MH"]^2 + MS1^2)*vev*Sin[3*alpha]))/(svev^2*vev^2), 0}},

C[ S[4] , -U[4] , U[4] ] == {{((I/4)*FCGV["EL"]^2*vev*Sin[alpha])/sw^2, 0}},

C[ S[4] , -U[3] , U[3] ] == {{((I/4)*FCGV["EL"]^2*vev*Sin[alpha])/sw^2, 0}},

C[ S[4] , -U[2] , U[2] ] == {{((I/4)*FCGV["EL"]^2*(cw^2 + sw^2)^2*vev*Sin[alpha])/(cw^2*sw^2), 0}},

C[ -F[12, {e1x2}] , F[12, {e2x2}] , S[4] ] == {{I*gc95*IndexDelta[e1x2, e2x2], 0}, {I*gc95*IndexDelta[e1x2, e2x2], 0}},

C[ -F[10, {e1x2}] , F[10, {e2x2}] , S[4] ] == {{I*gc96*IndexDelta[e1x2, e2x2], 0}, {I*gc96*IndexDelta[e1x2, e2x2], 0}},

C[ -F[11, {e1x2}] , F[11, {e2x2}] , S[4] ] == {{I*gc97*IndexDelta[e1x2, e2x2], 0}, {I*gc97*IndexDelta[e1x2, e2x2], 0}},

C[ -F[4] , F[4] , S[4] ] == {{I*gc98, 0}, {I*gc98, 0}},

C[ -F[5] , F[5] , S[4] ] == {{I*gc99, 0}, {I*gc99, 0}},

C[ -F[6] , F[6] , S[4] ] == {{I*gc100, 0}, {I*gc100, 0}},

C[ -F[8, {e1x2}] , F[8, {e2x2}] , S[4] ] == {{I*gc101*IndexDelta[e1x2, e2x2], 0}, {I*gc101*IndexDelta[e1x2, e2x2], 0}},

C[ -F[9, {e1x2}] , F[9, {e2x2}] , S[4] ] == {{I*gc102*IndexDelta[e1x2, e2x2], 0}, {I*gc102*IndexDelta[e1x2, e2x2], 0}},

C[ -F[7, {e1x2}] , F[7, {e2x2}] , S[4] ] == {{I*gc103*IndexDelta[e1x2, e2x2], 0}, {I*gc103*IndexDelta[e1x2, e2x2], 0}},

C[ S[5] , S[5] , S[1] , S[1] ] == {{((-1/2*I)*Sin[alpha]*(2*(FCGV["MH"]^2 - MS1^2)*svev*Cos[alpha]^3 + vev*(FCGV["MH"]^2 + MS1^2 + (-FCGV["MH"]^2 + MS1^2)*Cos[2*alpha])*Sin[alpha]))/(svev^2*vev), 0}},

C[ S[2] , S[2] , S[4] , S[4] ] == {{((-1/2*I)*Sin[alpha]*(2*(FCGV["MH"]^2 - MS1^2)*vev*Cos[alpha]^3 + svev*(FCGV["MH"]^2 + MS1^2 + (FCGV["MH"]^2 - MS1^2)*Cos[2*alpha])*Sin[alpha]))/(svev*vev^2), 0}},

C[ S[3] , -S[3] , S[4] , S[4] ] == {{((-1/2*I)*Sin[alpha]*(2*(FCGV["MH"]^2 - MS1^2)*vev*Cos[alpha]^3 + svev*(FCGV["MH"]^2 + MS1^2 + (FCGV["MH"]^2 - MS1^2)*Cos[2*alpha])*Sin[alpha]))/(svev*vev^2), 0}},

C[ S[1] , S[1] , S[4] , S[4] ] == {{((-1/16*I)*Sin[2*alpha]*(6*(FCGV["MH"]^2 - MS1^2)*svev*vev*Cos[4*alpha] + 6*(FCGV["MH"]^2 + MS1^2)*(svev^2 + vev^2)*Sin[2*alpha] + (FCGV["MH"]^2 - MS1^2)*(2*svev*vev + 3*(svev^2 - vev^2)*Sin[4*alpha])))/(svev^2*vev^2), 0}},

C[ S[5] , S[5] , S[2] , S[2] ] == {{((-I)*(FCGV["MH"] - MS1)*(FCGV["MH"] + MS1)*Cos[alpha]*Sin[alpha])/(svev*vev), 0}},

C[ S[5] , S[5] , S[3] , -S[3] ] == {{((-I)*(FCGV["MH"] - MS1)*(FCGV["MH"] + MS1)*Cos[alpha]*Sin[alpha])/(svev*vev), 0}},

C[ S[2] , -S[3] , V[1] , V[3] ] == {{((-1/2*I)*FCGV["EL"]^2)/sw, 0}},

C[ -S[3] , V[1] , V[3] ] == {{-1/2*(FCGV["EL"]^2*vev)/sw, 0}},

C[ -S[3] , S[1] , V[1] , V[3] ] == {{-1/2*(FCGV["EL"]^2*Cos[alpha])/sw, 0}},

C[ S[2] , -S[3] , V[3] ] == {{(-I)*gc113, 0}, {I*gc113, 0}},

C[ -S[3] , S[1] , V[3] ] == {{-gc114, 0}, {gc114, 0}},

C[ V[1] , V[3] , -V[3] ] == {{(-I)*gc115, 0}, {I*gc115, 0}, {I*gc115, 0}, {(-I)*gc115, 0}, {(-I)*gc115, 0}, {I*gc115, 0}},

C[ -S[3] , S[4] , V[1] , V[3] ] == {{(FCGV["EL"]^2*Sin[alpha])/(2*sw), 0}},

C[ -S[3] , S[4] , V[3] ] == {{-gc117, 0}, {gc117, 0}},

C[ S[2] , S[3] , V[1] , -V[3] ] == {{((-1/2*I)*FCGV["EL"]^2)/sw, 0}},

C[ S[3] , V[1] , -V[3] ] == {{(FCGV["EL"]^2*vev)/(2*sw), 0}},

C[ S[3] , S[1] , V[1] , -V[3] ] == {{(FCGV["EL"]^2*Cos[alpha])/(2*sw), 0}},

C[ S[2] , S[3] , -V[3] ] == {{(-I)*gc121, 0}, {I*gc121, 0}},

C[ S[3] , S[1] , -V[3] ] == {{-gc122, 0}, {gc122, 0}},

C[ S[3] , S[4] , V[1] , -V[3] ] == {{-1/2*(FCGV["EL"]^2*Sin[alpha])/sw, 0}},

C[ S[3] , S[4] , -V[3] ] == {{-gc124, 0}, {gc124, 0}},

C[ S[2] , S[2] , V[3] , -V[3] ] == {{((I/2)*FCGV["EL"]^2)/sw^2, 0}},

C[ S[3] , -S[3] , V[3] , -V[3] ] == {{((I/2)*FCGV["EL"]^2)/sw^2, 0}},

C[ V[1] , V[1] , V[3] , -V[3] ] == {{(-I)*gc127, 0}, {(-I)*gc127, 0}, {(2*I)*gc127, 0}},

C[ S[1] , V[3] , -V[3] ] == {{((I/2)*FCGV["EL"]^2*vev*Cos[alpha])/sw^2, 0}},

C[ S[1] , S[1] , V[3] , -V[3] ] == {{((I/2)*FCGV["EL"]^2*Cos[alpha]^2)/sw^2, 0}},

C[ S[4] , V[3] , -V[3] ] == {{((-1/2*I)*FCGV["EL"]^2*vev*Sin[alpha])/sw^2, 0}},

C[ S[1] , S[4] , V[3] , -V[3] ] == {{((-1/2*I)*FCGV["EL"]^2*Cos[alpha]*Sin[alpha])/sw^2, 0}},

C[ S[4] , S[4] , V[3] , -V[3] ] == {{((I/2)*FCGV["EL"]^2*Sin[alpha]^2)/sw^2, 0}},

C[ V[3] , -V[3] , V[2] ] == {{(-I)*gc133, 0}, {I*gc133, 0}, {I*gc133, 0}, {(-I)*gc133, 0}, {(-I)*gc133, 0}, {I*gc133, 0}},

C[ V[3] , V[3] , -V[3] , -V[3] ] == {{(-I)*gc134, 0}, {(-I)*gc134, 0}, {(2*I)*gc134, 0}},

C[ -F[1] , F[4] , S[3] ] == {{0, 0}, {gc135R, 0}},

C[ -F[2] , F[5] , S[3] ] == {{0, 0}, {gc136R, 0}},

C[ -F[3] , F[6] , S[3] ] == {{0, 0}, {gc137R, 0}},

C[ S[3] , -S[3] , V[1] , V[2] ] == {{(I*FCGV["EL"]^2*(cw - sw)*(cw + sw))/(cw*sw), 0}},

C[ S[2] , S[1] , V[2] ] == {{-gc139, 0}, {gc139, 0}},

C[ S[3] , -S[3] , V[2] ] == {{(-I)*gc140, 0}, {I*gc140, 0}},

C[ S[2] , S[4] , V[2] ] == {{-gc141, 0}, {gc141, 0}},

C[ S[2] , -S[3] , V[3] , V[2] ] == {{((I/2)*FCGV["EL"]^2)/cw, 0}},

C[ -S[3] , V[3] , V[2] ] == {{(FCGV["EL"]^2*vev)/(2*cw), 0}},

C[ -S[3] , S[1] , V[3] , V[2] ] == {{(FCGV["EL"]^2*Cos[alpha])/(2*cw), 0}},

C[ -S[3] , S[4] , V[3] , V[2] ] == {{-1/2*(FCGV["EL"]^2*Sin[alpha])/cw, 0}},

C[ S[2] , S[3] , -V[3] , V[2] ] == {{((I/2)*FCGV["EL"]^2)/cw, 0}},

C[ S[3] , -V[3] , V[2] ] == {{-1/2*(FCGV["EL"]^2*vev)/cw, 0}},

C[ S[3] , S[1] , -V[3] , V[2] ] == {{-1/2*(FCGV["EL"]^2*Cos[alpha])/cw, 0}},

C[ S[3] , S[4] , -V[3] , V[2] ] == {{(FCGV["EL"]^2*Sin[alpha])/(2*cw), 0}},

C[ V[1] , V[3] , -V[3] , V[2] ] == {{(-2*I)*gc150, 0}, {I*gc150, 0}, {I*gc150, 0}},

C[ S[2] , S[2] , V[2] , V[2] ] == {{((I/2)*FCGV["EL"]^2*(cw^2 + sw^2)^2)/(cw^2*sw^2), 0}},

C[ S[3] , -S[3] , V[2] , V[2] ] == {{((I/2)*FCGV["EL"]^2*(cw - sw)^2*(cw + sw)^2)/(cw^2*sw^2), 0}},

C[ S[1] , V[2] , V[2] ] == {{((I/2)*FCGV["EL"]^2*(cw^2 + sw^2)^2*vev*Cos[alpha])/(cw^2*sw^2), 0}},

C[ S[1] , S[1] , V[2] , V[2] ] == {{((I/2)*FCGV["EL"]^2*(cw^2 + sw^2)^2*Cos[alpha]^2)/(cw^2*sw^2), 0}},

C[ S[4] , V[2] , V[2] ] == {{((-1/2*I)*FCGV["EL"]^2*(cw^2 + sw^2)^2*vev*Sin[alpha])/(cw^2*sw^2), 0}},

C[ S[1] , S[4] , V[2] , V[2] ] == {{((-1/4*I)*FCGV["EL"]^2*(cw^2 + sw^2)^2*Sin[2*alpha])/(cw^2*sw^2), 0}},

C[ S[4] , S[4] , V[2] , V[2] ] == {{((I/2)*FCGV["EL"]^2*(cw^2 + sw^2)^2*Sin[alpha]^2)/(cw^2*sw^2), 0}},

C[ V[3] , -V[3] , V[2] , V[2] ] == {{(-I)*gc158, 0}, {(-I)*gc158, 0}, {(2*I)*gc158, 0}},

C[ -F[4] , F[4] , V[1] ] == {{I*gc159, 0}, {I*gc159, 0}},

C[ -F[5] , F[5] , V[1] ] == {{I*gc160, 0}, {I*gc160, 0}},

C[ -F[6] , F[6] , V[1] ] == {{I*gc161, 0}, {I*gc161, 0}},

C[ -F[8, {e1x2}] , F[8, {e2x2}] , V[1] ] == {{I*gc162*IndexDelta[e1x2, e2x2], 0}, {I*gc162*IndexDelta[e1x2, e2x2], 0}},

C[ -F[9, {e1x2}] , F[9, {e2x2}] , V[1] ] == {{I*gc163*IndexDelta[e1x2, e2x2], 0}, {I*gc163*IndexDelta[e1x2, e2x2], 0}},

C[ -F[7, {e1x2}] , F[7, {e2x2}] , V[1] ] == {{I*gc164*IndexDelta[e1x2, e2x2], 0}, {I*gc164*IndexDelta[e1x2, e2x2], 0}},

C[ -F[12, {e1x2}] , F[12, {e2x2}] , V[1] ] == {{I*gc165*IndexDelta[e1x2, e2x2], 0}, {I*gc165*IndexDelta[e1x2, e2x2], 0}},

C[ -F[10, {e1x2}] , F[10, {e2x2}] , V[1] ] == {{I*gc166*IndexDelta[e1x2, e2x2], 0}, {I*gc166*IndexDelta[e1x2, e2x2], 0}},

C[ -F[11, {e1x2}] , F[11, {e2x2}] , V[1] ] == {{I*gc167*IndexDelta[e1x2, e2x2], 0}, {I*gc167*IndexDelta[e1x2, e2x2], 0}},

C[ -F[8, {e1x2}] , F[8, {e2x2}] , V[4, {e3x2}] ] == {{I*gc168*FASUNT[e3x2, e1x2, e2x2], 0}, {I*gc168*FASUNT[e3x2, e1x2, e2x2], 0}},

C[ -F[9, {e1x2}] , F[9, {e2x2}] , V[4, {e3x2}] ] == {{I*gc169*FASUNT[e3x2, e1x2, e2x2], 0}, {I*gc169*FASUNT[e3x2, e1x2, e2x2], 0}},

C[ -F[7, {e1x2}] , F[7, {e2x2}] , V[4, {e3x2}] ] == {{I*gc170*FASUNT[e3x2, e1x2, e2x2], 0}, {I*gc170*FASUNT[e3x2, e1x2, e2x2], 0}},

C[ -F[12, {e1x2}] , F[12, {e2x2}] , V[4, {e3x2}] ] == {{I*gc171*FASUNT[e3x2, e1x2, e2x2], 0}, {I*gc171*FASUNT[e3x2, e1x2, e2x2], 0}},

C[ -F[10, {e1x2}] , F[10, {e2x2}] , V[4, {e3x2}] ] == {{I*gc172*FASUNT[e3x2, e1x2, e2x2], 0}, {I*gc172*FASUNT[e3x2, e1x2, e2x2], 0}},

C[ -F[11, {e1x2}] , F[11, {e2x2}] , V[4, {e3x2}] ] == {{I*gc173*FASUNT[e3x2, e1x2, e2x2], 0}, {I*gc173*FASUNT[e3x2, e1x2, e2x2], 0}},

C[ -F[8, {e1x2}] , F[12, {e2x2}] , V[3] ] == {{I*gc174*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[8, {e1x2}] , F[10, {e2x2}] , V[3] ] == {{I*gc175*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[8, {e1x2}] , F[11, {e2x2}] , V[3] ] == {{I*gc176*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[9, {e1x2}] , F[12, {e2x2}] , V[3] ] == {{I*gc177*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[9, {e1x2}] , F[10, {e2x2}] , V[3] ] == {{I*gc178*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[9, {e1x2}] , F[11, {e2x2}] , V[3] ] == {{I*gc179*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[7, {e1x2}] , F[12, {e2x2}] , V[3] ] == {{I*gc180*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[7, {e1x2}] , F[10, {e2x2}] , V[3] ] == {{I*gc181*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[7, {e1x2}] , F[11, {e2x2}] , V[3] ] == {{I*gc182*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[12, {e1x2}] , F[8, {e2x2}] , -V[3] ] == {{I*gc183*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[12, {e1x2}] , F[9, {e2x2}] , -V[3] ] == {{I*gc184*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[12, {e1x2}] , F[7, {e2x2}] , -V[3] ] == {{I*gc185*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[10, {e1x2}] , F[8, {e2x2}] , -V[3] ] == {{I*gc186*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[10, {e1x2}] , F[9, {e2x2}] , -V[3] ] == {{I*gc187*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[10, {e1x2}] , F[7, {e2x2}] , -V[3] ] == {{I*gc188*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[11, {e1x2}] , F[8, {e2x2}] , -V[3] ] == {{I*gc189*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[11, {e1x2}] , F[9, {e2x2}] , -V[3] ] == {{I*gc190*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[11, {e1x2}] , F[7, {e2x2}] , -V[3] ] == {{I*gc191*IndexDelta[e1x2, e2x2], 0}, {0, 0}},

C[ -F[1] , F[4] , V[3] ] == {{I*gc192, 0}, {0, 0}},

C[ -F[2] , F[5] , V[3] ] == {{I*gc193, 0}, {0, 0}},

C[ -F[3] , F[6] , V[3] ] == {{I*gc194, 0}, {0, 0}},

C[ -F[4] , F[1] , -V[3] ] == {{I*gc195, 0}, {0, 0}},

C[ -F[5] , F[2] , -V[3] ] == {{I*gc196, 0}, {0, 0}},

C[ -F[6] , F[3] , -V[3] ] == {{I*gc197, 0}, {0, 0}},

C[ -F[8, {e1x2}] , F[8, {e2x2}] , V[2] ] == {{I*gc198L*IndexDelta[e1x2, e2x2], 0}, {I*gc198R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[9, {e1x2}] , F[9, {e2x2}] , V[2] ] == {{I*gc199L*IndexDelta[e1x2, e2x2], 0}, {I*gc199R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[7, {e1x2}] , F[7, {e2x2}] , V[2] ] == {{I*gc200L*IndexDelta[e1x2, e2x2], 0}, {I*gc200R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[12, {e1x2}] , F[12, {e2x2}] , V[2] ] == {{I*gc201L*IndexDelta[e1x2, e2x2], 0}, {I*gc201R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[10, {e1x2}] , F[10, {e2x2}] , V[2] ] == {{I*gc202L*IndexDelta[e1x2, e2x2], 0}, {I*gc202R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[11, {e1x2}] , F[11, {e2x2}] , V[2] ] == {{I*gc203L*IndexDelta[e1x2, e2x2], 0}, {I*gc203R*IndexDelta[e1x2, e2x2], 0}},

C[ -F[1] , F[1] , V[2] ] == {{I*gc204, 0}, {0, 0}},

C[ -F[2] , F[2] , V[2] ] == {{I*gc205, 0}, {0, 0}},

C[ -F[3] , F[3] , V[2] ] == {{I*gc206, 0}, {0, 0}},

C[ -F[4] , F[4] , V[2] ] == {{I*gc207L, 0}, {I*gc207R, 0}},

C[ -F[5] , F[5] , V[2] ] == {{I*gc208L, 0}, {I*gc208R, 0}},

C[ -F[6] , F[6] , V[2] ] == {{I*gc209L, 0}, {I*gc209R, 0}}

}

(* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *)

(* Parameter replacement lists (These lists were created by FeynRules) *)

(* FA Couplings *)

M$FACouplings = {
     gc16 -> -FCGV["EL"],
     gc17 -> FCGV["EL"],
     gc18 -> -FCGV["EL"],
     gc20 -> FCGV["EL"],
     gc23 -> -FCGV["EL"],
     gc24 -> -((cw*FCGV["EL"])/sw),
     gc26 -> (cw*FCGV["EL"])/sw,
     gc28 -> -FCGV["EL"],
     gc31 -> FCGV["EL"],
     gc32 -> (cw*FCGV["EL"])/sw,
     gc34 -> -((cw*FCGV["EL"])/sw),
     gc36 -> (cw*FCGV["EL"])/sw,
     gc38 -> -((cw*FCGV["EL"])/sw),
     gc40 -> FAGS,
     gc41 -> -FAGS,
     gc42 -> -FAGS^2,
     gc43L -> yb*Conjugate[CKM2x3],
     gc43R -> -(yc*Conjugate[CKM2x3]),
     gc44L -> yb*Conjugate[CKM3x3],
     gc44R -> -(yt*Conjugate[CKM3x3]),
     gc45L -> yb*Conjugate[CKM1x3],
     gc45R -> -(yup*Conjugate[CKM1x3]),
     gc46L -> ydo*Conjugate[CKM2x1],
     gc46R -> -(yc*Conjugate[CKM2x1]),
     gc47L -> ydo*Conjugate[CKM3x1],
     gc47R -> -(yt*Conjugate[CKM3x1]),
     gc48L -> ydo*Conjugate[CKM1x1],
     gc48R -> -(yup*Conjugate[CKM1x1]),
     gc49L -> ys*Conjugate[CKM2x2],
     gc49R -> -(yc*Conjugate[CKM2x2]),
     gc50L -> ys*Conjugate[CKM3x2],
     gc50R -> -(yt*Conjugate[CKM3x2]),
     gc51L -> ys*Conjugate[CKM1x2],
     gc51R -> -(yup*Conjugate[CKM1x2]),
     gc52L -> -(yb/Sqrt[2]),
     gc52R -> yb/Sqrt[2],
     gc53L -> -(ydo/Sqrt[2]),
     gc53R -> ydo/Sqrt[2],
     gc54L -> -(ys/Sqrt[2]),
     gc54R -> ys/Sqrt[2],
     gc55 -> -((yb*Cos[alpha])/Sqrt[2]),
     gc56 -> -((ydo*Cos[alpha])/Sqrt[2]),
     gc57 -> -((ys*Cos[alpha])/Sqrt[2]),
     gc58 -> ye,
     gc59 -> ym,
     gc60 -> ytau,
     gc61L -> -(ye/Sqrt[2]),
     gc61R -> ye/Sqrt[2],
     gc62L -> -(ym/Sqrt[2]),
     gc62R -> ym/Sqrt[2],
     gc63L -> -(ytau/Sqrt[2]),
     gc63R -> ytau/Sqrt[2],
     gc64 -> -((ye*Cos[alpha])/Sqrt[2]),
     gc65 -> -((ym*Cos[alpha])/Sqrt[2]),
     gc66 -> -((ytau*Cos[alpha])/Sqrt[2]),
     gc67L -> CKM2x3*yc,
     gc67R -> -(CKM2x3*yb),
     gc68L -> CKM2x1*yc,
     gc68R -> -(CKM2x1*ydo),
     gc69L -> CKM2x2*yc,
     gc69R -> -(CKM2x2*ys),
     gc70L -> CKM3x3*yt,
     gc70R -> -(CKM3x3*yb),
     gc71L -> CKM3x1*yt,
     gc71R -> -(CKM3x1*ydo),
     gc72L -> CKM3x2*yt,
     gc72R -> -(CKM3x2*ys),
     gc73L -> CKM1x3*yup,
     gc73R -> -(CKM1x3*yb),
     gc74L -> CKM1x1*yup,
     gc74R -> -(CKM1x1*ydo),
     gc75L -> CKM1x2*yup,
     gc75R -> -(CKM1x2*ys),
     gc76L -> yc/Sqrt[2],
     gc76R -> -(yc/Sqrt[2]),
     gc77L -> yt/Sqrt[2],
     gc77R -> -(yt/Sqrt[2]),
     gc78L -> yup/Sqrt[2],
     gc78R -> -(yup/Sqrt[2]),
     gc79 -> -((yc*Cos[alpha])/Sqrt[2]),
     gc80 -> -((yt*Cos[alpha])/Sqrt[2]),
     gc81 -> -((yup*Cos[alpha])/Sqrt[2]),
     gc95 -> (yb*Sin[alpha])/Sqrt[2],
     gc96 -> (ydo*Sin[alpha])/Sqrt[2],
     gc97 -> (ys*Sin[alpha])/Sqrt[2],
     gc98 -> (ye*Sin[alpha])/Sqrt[2],
     gc99 -> (ym*Sin[alpha])/Sqrt[2],
     gc100 -> (ytau*Sin[alpha])/Sqrt[2],
     gc101 -> (yc*Sin[alpha])/Sqrt[2],
     gc102 -> (yt*Sin[alpha])/Sqrt[2],
     gc103 -> (yup*Sin[alpha])/Sqrt[2],
     gc113 -> FCGV["EL"]/(2*sw),
     gc114 -> -1/2*(FCGV["EL"]*Cos[alpha])/sw,
     gc115 -> FCGV["EL"],
     gc117 -> (FCGV["EL"]*Sin[alpha])/(2*sw),
     gc121 -> -1/2*FCGV["EL"]/sw,
     gc122 -> -1/2*(FCGV["EL"]*Cos[alpha])/sw,
     gc124 -> (FCGV["EL"]*Sin[alpha])/(2*sw),
     gc127 -> -FCGV["EL"]^2,
     gc133 -> (cw*FCGV["EL"])/sw,
     gc134 -> FCGV["EL"]^2/sw^2,
     gc135R -> -ye,
     gc136R -> -ym,
     gc137R -> -ytau,
     gc139 -> -1/2*(FCGV["EL"]*(cw^2 + sw^2)*Cos[alpha])/(cw*sw),
     gc140 -> -1/2*(cw*FCGV["EL"])/sw + (FCGV["EL"]*sw)/(2*cw),
     gc141 -> (FCGV["EL"]*(cw^2 + sw^2)*Sin[alpha])/(2*cw*sw),
     gc150 -> (cw*FCGV["EL"]^2)/sw,
     gc158 -> -((cw^2*FCGV["EL"]^2)/sw^2),
     gc159 -> -FCGV["EL"],
     gc160 -> -FCGV["EL"],
     gc161 -> -FCGV["EL"],
     gc162 -> (2*FCGV["EL"])/3,
     gc163 -> (2*FCGV["EL"])/3,
     gc164 -> (2*FCGV["EL"])/3,
     gc165 -> -1/3*FCGV["EL"],
     gc166 -> -1/3*FCGV["EL"],
     gc167 -> -1/3*FCGV["EL"],
     gc168 -> FAGS,
     gc169 -> FAGS,
     gc170 -> FAGS,
     gc171 -> FAGS,
     gc172 -> FAGS,
     gc173 -> FAGS,
     gc174 -> (CKM2x3*FCGV["EL"])/(Sqrt[2]*sw),
     gc175 -> (CKM2x1*FCGV["EL"])/(Sqrt[2]*sw),
     gc176 -> (CKM2x2*FCGV["EL"])/(Sqrt[2]*sw),
     gc177 -> (CKM3x3*FCGV["EL"])/(Sqrt[2]*sw),
     gc178 -> (CKM3x1*FCGV["EL"])/(Sqrt[2]*sw),
     gc179 -> (CKM3x2*FCGV["EL"])/(Sqrt[2]*sw),
     gc180 -> (CKM1x3*FCGV["EL"])/(Sqrt[2]*sw),
     gc181 -> (CKM1x1*FCGV["EL"])/(Sqrt[2]*sw),
     gc182 -> (CKM1x2*FCGV["EL"])/(Sqrt[2]*sw),
     gc183 -> (FCGV["EL"]*Conjugate[CKM2x3])/(Sqrt[2]*sw),
     gc184 -> (FCGV["EL"]*Conjugate[CKM3x3])/(Sqrt[2]*sw),
     gc185 -> (FCGV["EL"]*Conjugate[CKM1x3])/(Sqrt[2]*sw),
     gc186 -> (FCGV["EL"]*Conjugate[CKM2x1])/(Sqrt[2]*sw),
     gc187 -> (FCGV["EL"]*Conjugate[CKM3x1])/(Sqrt[2]*sw),
     gc188 -> (FCGV["EL"]*Conjugate[CKM1x1])/(Sqrt[2]*sw),
     gc189 -> (FCGV["EL"]*Conjugate[CKM2x2])/(Sqrt[2]*sw),
     gc190 -> (FCGV["EL"]*Conjugate[CKM3x2])/(Sqrt[2]*sw),
     gc191 -> (FCGV["EL"]*Conjugate[CKM1x2])/(Sqrt[2]*sw),
     gc192 -> FCGV["EL"]/(Sqrt[2]*sw),
     gc193 -> FCGV["EL"]/(Sqrt[2]*sw),
     gc194 -> FCGV["EL"]/(Sqrt[2]*sw),
     gc195 -> FCGV["EL"]/(Sqrt[2]*sw),
     gc196 -> FCGV["EL"]/(Sqrt[2]*sw),
     gc197 -> FCGV["EL"]/(Sqrt[2]*sw),
     gc198L -> (cw*FCGV["EL"])/(2*sw) - (FCGV["EL"]*sw)/(6*cw),
     gc198R -> (-2*FCGV["EL"]*sw)/(3*cw),
     gc199L -> (cw*FCGV["EL"])/(2*sw) - (FCGV["EL"]*sw)/(6*cw),
     gc199R -> (-2*FCGV["EL"]*sw)/(3*cw),
     gc200L -> (cw*FCGV["EL"])/(2*sw) - (FCGV["EL"]*sw)/(6*cw),
     gc200R -> (-2*FCGV["EL"]*sw)/(3*cw),
     gc201L -> -1/6*(FCGV["EL"]*(3*cw^2 + sw^2))/(cw*sw),
     gc201R -> (FCGV["EL"]*sw)/(3*cw),
     gc202L -> -1/6*(FCGV["EL"]*(3*cw^2 + sw^2))/(cw*sw),
     gc202R -> (FCGV["EL"]*sw)/(3*cw),
     gc203L -> -1/6*(FCGV["EL"]*(3*cw^2 + sw^2))/(cw*sw),
     gc203R -> (FCGV["EL"]*sw)/(3*cw),
     gc204 -> (FCGV["EL"]*(cw^2 + sw^2))/(2*cw*sw),
     gc205 -> (FCGV["EL"]*(cw^2 + sw^2))/(2*cw*sw),
     gc206 -> (FCGV["EL"]*(cw^2 + sw^2))/(2*cw*sw),
     gc207L -> -1/2*(FCGV["EL"]*(cw^2 - sw^2))/(cw*sw),
     gc207R -> (FCGV["EL"]*sw)/cw,
     gc208L -> -1/2*(FCGV["EL"]*(cw^2 - sw^2))/(cw*sw),
     gc208R -> (FCGV["EL"]*sw)/cw,
     gc209L -> -1/2*(FCGV["EL"]*(cw^2 - sw^2))/(cw*sw),
     gc209R -> (FCGV["EL"]*sw)/cw};

