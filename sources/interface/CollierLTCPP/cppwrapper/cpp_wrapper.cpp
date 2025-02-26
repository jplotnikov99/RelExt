#include <cmath>
#include <complex>
#include <iostream>

#include "types.h"

const double GammaEuler = 0.577215664901532;

using namespace std;

typedef struct
{
  double re;
  double im;
} FComplexType;

extern "C"
{
  void clearcache_();

  void aput_(FComplexType *atab, FComplexType *m);
  void bput_(FComplexType *Btab,
             FComplexType *p10,
             FComplexType *m02,
             FComplexType *m12);
  void cput_(FComplexType *Ctab,
             FComplexType *p10,
             FComplexType *p21,
             FComplexType *p20,
             FComplexType *m02,
             FComplexType *m12,
             FComplexType *m22);
  void dput_(FComplexType *Dtab,
             FComplexType *p10,
             FComplexType *p21,
             FComplexType *p32,
             FComplexType *p30,
             FComplexType *p20,
             FComplexType *p31,
             FComplexType *m02,
             FComplexType *m12,
             FComplexType *m22,
             FComplexType *m32);

  FComplexType a0i_(int *i, FComplexType *m);
  FComplexType
  b0i_(int *i, FComplexType *p, FComplexType *m0, FComplexType *m1);
  FComplexType c0i_(int *i,
                    FComplexType *p1,
                    FComplexType *p2,
                    FComplexType *p3,
                    FComplexType *m0,
                    FComplexType *m1,
                    FComplexType *m2);
  FComplexType d0i_(int *i,
                    FComplexType *p1,
                    FComplexType *p2,
                    FComplexType *p3,
                    FComplexType *p4,
                    FComplexType *p5,
                    FComplexType *p6,
                    FComplexType *m0,
                    FComplexType *m1,
                    FComplexType *m2,
                    FComplexType *m3);

  void init_collier_(int *Nmax, int *ncache);
  void setparam_collier_(double *uvdiv,
                         double *delta_uv,
                         double *mu2,
                         double *lambda);
  double getlambda_();
}

void Aput(complex<double> *atab, const complex<double> &m)
{
  FComplexType _atab[Naa];
  FComplexType _m;
  _m.re = m.real();
  _m.im = m.imag();
  aput_(_atab, &_m);
  for (int i = 0; i < Naa; ++i)
    atab[i] = complex<double>(_atab[i].re, _atab[i].im);
}

void Bput(complex<double> *btab,
          const complex<double> &p10,
          const complex<double> &m02,
          const complex<double> &m12)
{
  FComplexType _btab[Nbb];
  FComplexType _p10, _m02, _m12;
  _p10.re = p10.real();
  _p10.im = p10.imag();
  _m02.re = m02.real();
  _m02.im = m02.imag();
  _m12.re = m12.real();
  _m12.im = m12.imag();
  bput_(_btab, &_p10, &_m02, &_m12);
  for (int i = 0; i < Nbb; ++i)
    btab[i] = complex<double>(_btab[i].re, _btab[i].im);
}

void Cput(complex<double> *ctab,
          const complex<double> &p10,
          const complex<double> &p21,
          const complex<double> &p20,
          const complex<double> &m02,
          const complex<double> &m12,
          const complex<double> &m22)
{
  FComplexType _ctab[Ncc];
  FComplexType _p10, _p21, _p20, _m02, _m12, _m22;
  _p10.re = p10.real();
  _p10.im = p10.imag();
  _p21.re = p21.real();
  _p21.im = p21.imag();
  _p20.re = p20.real();
  _p20.im = p20.imag();
  _m02.re = m02.real();
  _m02.im = m02.imag();
  _m12.re = m12.real();
  _m12.im = m12.imag();
  _m22.re = m22.real();
  _m22.im = m22.imag();
  cput_(_ctab, &_p10, &_p21, &_p20, &_m02, &_m12, &_m22);
  for (int i = 0; i < Ncc; ++i)
    ctab[i] = complex<double>(_ctab[i].re, _ctab[i].im);
}

void Dput(complex<double> *dtab,
          const complex<double> &p10,
          const complex<double> &p21,
          const complex<double> &p32,
          const complex<double> &p30,
          const complex<double> &p20,
          const complex<double> &p31,
          const complex<double> &m02,
          const complex<double> &m12,
          const complex<double> &m22,
          const complex<double> &m32)
{
  FComplexType _dtab[Ndd];
  FComplexType _p10, _p21, _p32, _p30, _p20, _p31, _m02, _m12, _m22, _m32;
  _p10.re = p10.real();
  _p10.im = p10.imag();
  _p21.re = p21.real();
  _p21.im = p21.imag();
  _p32.re = p32.real();
  _p32.im = p32.imag();
  _p30.re = p30.real();
  _p30.im = p30.imag();
  _p20.re = p20.real();
  _p20.im = p20.imag();
  _p31.re = p31.real();
  _p31.im = p31.imag();
  _m02.re = m02.real();
  _m02.im = m02.imag();
  _m12.re = m12.real();
  _m12.im = m12.imag();
  _m22.re = m22.real();
  _m22.im = m22.imag();
  _m32.re = m32.real();
  _m32.im = m32.imag();
  dput_(_dtab,
        &_p10,
        &_p21,
        &_p32,
        &_p30,
        &_p20,
        &_p31,
        &_m02,
        &_m12,
        &_m22,
        &_m32);
  for (int i = 0; i < Ndd; ++i)
    dtab[i] = complex<double>(_dtab[i].re, _dtab[i].im);
}

complex<double> A0i(const int &i, const complex<double> &m02)
{
  FComplexType cm02 = {m02.real(), m02.imag()};

  int ii           = i + 1; // Fortran starts counting arrays from 1, not 0 ...
  FComplexType res = a0i_(&ii, &cm02);
  return complex<double>(res.re, res.im);
}

complex<double> B0i(const int &i,
                    const complex<double> &p,
                    const complex<double> &m0,
                    const complex<double> &m1)
{
  FComplexType cp  = {p.real(), p.imag()};
  FComplexType cm0 = {m0.real(), m0.imag()};
  FComplexType cm1 = {m1.real(), m1.imag()};

  int ii           = i + 1; // Fortran starts counting arrays from 1, not 0 ...
  FComplexType res = b0i_(&ii, &cp, &cm0, &cm1);
  return complex<double>(res.re, res.im);
}

complex<double> C0i(const int &i,
                    const complex<double> &p12,
                    const complex<double> &p22,
                    const complex<double> &p32,
                    const complex<double> &m02,
                    const complex<double> &m12,
                    const complex<double> &m22)
{
  FComplexType cp12 = {p12.real(), p12.imag()};
  FComplexType cp22 = {p22.real(), p22.imag()};
  FComplexType cp32 = {p32.real(), p32.imag()};
  FComplexType cm02 = {m02.real(), m02.imag()};
  FComplexType cm12 = {m12.real(), m12.imag()};
  FComplexType cm22 = {m22.real(), m22.imag()};

  int ii           = i + 1; // Fortran starts counting arrays from 1, not 0 ...
  FComplexType res = c0i_(&ii, &cp12, &cp22, &cp32, &cm02, &cm12, &cm22);
  return complex<double>(res.re, res.im);
}

complex<double> D0i(const int &i,
                    const complex<double> &p10,
                    const complex<double> &p21,
                    const complex<double> &p32,
                    const complex<double> &p30,
                    const complex<double> &p20,
                    const complex<double> &p31,
                    const complex<double> &m02,
                    const complex<double> &m12,
                    const complex<double> &m22,
                    const complex<double> &m32)

{
  FComplexType cp10 = {p10.real(), p10.imag()};
  FComplexType cp21 = {p21.real(), p21.imag()};
  FComplexType cp32 = {p32.real(), p32.imag()};
  FComplexType cp30 = {p30.real(), p30.imag()};
  FComplexType cp20 = {p20.real(), p20.imag()};
  FComplexType cp31 = {p31.real(), p31.imag()};
  FComplexType cm02 = {m02.real(), m02.imag()};
  FComplexType cm12 = {m12.real(), m12.imag()};
  FComplexType cm22 = {m22.real(), m22.imag()};
  FComplexType cm32 = {m32.real(), m32.imag()};

  int ii           = i + 1;
  FComplexType res = d0i_(&ii,
                          &cp10,
                          &cp21,
                          &cp32,
                          &cp30,
                          &cp20,
                          &cp31,
                          &cm02,
                          &cm12,
                          &cm22,
                          &cm32);
  return complex<double>(res.re, res.im);
}

void init_collier(int Nmax, int ncache)
{
  clearcache_();
  init_collier_(&Nmax, &ncache);
  return;
}

void setparam_collier(double uvdiv, double delta_uv, double mu2, double lambda)
{
  setparam_collier_(&uvdiv, &delta_uv, &mu2, &lambda);
  return;
}

void init_CollierLTCPP(const double &delta, const double &mudim, const double &lambda)
{
  init_collier(4, 1);
  setparam_collier(0., delta, mudim, lambda);
}

double getlambda()
{
  return getlambda_();
}
