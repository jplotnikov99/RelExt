#pragma once
#include <limits>

#include "../data_structures.hpp"
#include "../utils.hpp"
namespace DT {
class Output {
   private:
    size_t count = 0;
    int kmax, nsave;
    bool dense;
    double x1, x2, xout, dxout;

   public:
    VecDoub xsave;
    VecDoub ysave;
    Output() : kmax(-1), dense(false) {};
    Output(const int nsavee) : kmax(500), nsave(nsavee), xsave(kmax) {
        dense = nsave > 0 ? true : false;
    };
    size_t get_count();
    int get_kmax();
    bool get_dense();
    void init(const double xlo, const double xhi);
    void resize();
    void save(const double x, double &y);

    template <class Stepper>
    void save_dense(Stepper &s, const double xout, const double h);

    template <class Stepper>
    void out(const int nstp, const double x, double &y, Stepper &s,
             const double h);

    ~Output() {};
};

template <class Stepper>
void Output::save_dense(Stepper &s, const double xo, const double h) {
    if (count == kmax) resize();
    ysave[count] = s.dense_out(xo, h);
    xsave[count++] = xo;
}

template <class Stepper>
void Output::out(const int nstp, const double x, double &y, Stepper &s,
                 const double h) {
    assert(dense);
    if (nstp == -1) {
        save(x, y);
        xout += dxout;
    } else {
        while ((x - xout) * (x2 - x1) > 0) {
            save_dense(s, xout, h);
            xout += dxout;
        }
    }
}

template <class Stepper>
class Odeint {
   private:
    static const size_t MAXSTP = 50000;
    size_t nok, nbad;
    double EPS;
    double x, x1, x2, h, hmin;
    bool dense;
    double y, dydx;
    double &ystart;
    Output &out;
    typename Stepper::Dtype &derivs;
    Stepper s;
    size_t nstp;

   public:
    Odeint(double &ystartt, const double xx1, const double xx2,
           const double atol, const double rtol, const double h1,
           const double hminn, Output &outt, typename Stepper::Dtype &derivss)
        : ystart(ystartt),
          x(xx1),
          x1(xx1),
          x2(xx2),
          hmin(hminn),
          dense(outt.get_dense()),
          out(outt),
          derivs(derivss),
          s(y, dydx, x, atol, rtol, dense) {
        EPS = std::numeric_limits<double>::epsilon();
        h = SIGN(h1, x2 - x1);
        y = ystart;
        out.init(x1, x2);
    }

    void integrate();

    ~Odeint() {};
};

template <class Stepper>
void Odeint<Stepper>::integrate() {
    derivs(x, y, dydx);
    if (dense)
        out.out(-1, x, y, s, h);
    else
        out.save(x, y);
    for (nstp = 0; nstp < MAXSTP; nstp++) {
        if ((x + h * 1.0001 - x2) * (x2 - x1) > 0.) h = x2 - x;
        s.step(h, derivs);
        if (s.hdid == h)
            nok++;
        else
            nbad++;
        if (dense)
            out.out(nstp, x, y, s, s.hdid);
        else
            out.save(x, y);
        if ((x - x2) * (x2 - x1) >= 0.) {
            ystart = y;
            if (out.get_kmax() > 0 && std::abs(out.xsave[out.get_count() - 1] -
                                               x2) > 100 * std::abs(x2) * EPS)
                out.save(x, y);
            return;
        }
        if (std::abs(s.hnext) <= hmin)
            std::cout << "Step size too small in Odeint\n";
        h = s.hnext;
    }
    std::cout << "Too many steps in Odeint\n";
}

struct StepperBase {
    double &x;
    double xold, atol, rtol, hdid, hnext, EPS;
    double &y, &dydx;
    double yout;
    double yerr;
    bool dense;
    StepperBase(double &yy, double &dydxx, double &xx, const double atoll,
                const double rtoll, const bool dens)
        : y(yy), dydx(dydxx), x(xx), atol(atoll), rtol(rtoll), dense(dens) {}
};

struct Controller {
    double hnext, errold;
    bool reject;
    Controller() : reject(false), errold(1e-4) {};
    bool success(const double err, double &h);
};
}  // namespace DT
