#ifndef _INTEGRAL_H_

#ifndef NAN
#define _HUGE_ENUF  1e+300
#define INFINITY   ((float)(_HUGE_ENUF * _HUGE_ENUF))
#define NAN        ((float)(INFINITY * 0.0F))
#endif


double pdIntegral(double(*func)(double x), double from, double to, double step);

double pSinPlusCos(double x);

double pSinDivideId(double x);

double pSecMultiplyId(double x);
#define _INTEGRAL_H_
#endif
