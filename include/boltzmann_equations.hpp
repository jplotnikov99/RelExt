#pragma once
#include <iostream>
#include <memory>
#include <vector>

#include "EffDof.hpp"
#include "tac.hpp"
#include "utils.hpp"

namespace DT {

struct BeqInfo {
    const double G = 6.7e-39;
    AnnihilationAmps &AA;
    Dof &dof;
    Tac tac;
    BeqInfo(AnnihilationAmps &AnAmps);

    // clear TAC maps which are necessary for faster computation
    void reset_tac_state(const bool full);

    // sorts different channels by their total initial state masses
    bool sort_inimasses(const VecString &ch_str = {});

    double pre(const double &x);
    double T_ent(const double &ent, const double &m);
    double ent_T(const double &x, const double &m);
    double yeq(const double &x);
    double dlogyeq(const double x);
};

class FOCondition {
   private:
    BeqInfo &BI;

   public:
    double del;
    FOCondition(BeqInfo &bi, const double &dell) : BI(bi), del(dell) {}
    double operator()(const double &x);
    ~FOCondition() {}
};

class FOAppr {
   private:
    BeqInfo &BI;

   public:
    FOAppr(BeqInfo &bi) : BI(bi) {};
    double operator()(const double &x);
    ~FOAppr() {};
};

class FOFull {
   private:
    BeqInfo &BI;

   public:
    FOFull(BeqInfo &bi) : BI(bi) {};
    void operator()(const double &x, const double &y, double &dydx);
    ~FOFull() {};
};

}  // namespace DT
