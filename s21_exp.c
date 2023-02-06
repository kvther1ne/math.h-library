#include "s21_math.h"

long double s21_exp(double x) {
  long double result = 0;
  long double temp = 1;
  int f = 0;
  if (x != x) {
    result = S21_NAN;
  } else if (x < -20) {
    result = 0;
  } else if (s21_fabs(x - 0.) < S21_EPS_1) {
    result = 1;
  } else if (x > 706) {
    result = S21_INF;
  } else {
    if (x < 0) {
      x *= -1;
      f = 1;
    }
    int counter = 1;
    long double fact = 1;
    long double power = 1;
    int n = 0;
    long double num = x;
    while (temp > S21_EPS_1) {
      temp = power / fact;
      result += temp;
      n += 1;
      power *= num;
      fact *= n;
      counter++;
    }
    if (f == 1) {
      result = 1 / result;
    }
  }
  return result;
}