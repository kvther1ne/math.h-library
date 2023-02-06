#include "s21_math.h"

long double s21_log(double x) {
  long double rez = 1;
  long double result;
  long double temp = 0;
  if (x != x) {
    result = S21_NAN;
  } else if (x == 0) {
    result = -S21_INF;
  } else if (x < 0 || x == S21_NAN || x == -S21_INF) {
    result = S21_NAN;
  } else if (x == S21_INF) {
    result = S21_INF;
  } else {
    if (s21_fabs(x) > 1e6) {
      while (s21_fabs(x) > 1e6) {
        x /= 1000;
        temp += 6.90775527898;
      }
    } else if (x > -1 && x < 1) {
      while (x > -1 && x < 1) {
        x *= 10;
        temp -= 2.30258509299;
      }
    }

    long double alpha = (x - 1) / (x + 1);
    long double alpha2 =
        alpha * alpha;
    long double znam = 1;
    long double mnozh =
        alpha;
    long double sum =
        alpha;
    while (s21_fabs(rez) > S21_EPS_1) {
      znam += 2;
      mnozh *= alpha2;
      rez = mnozh / znam;
      sum += rez;
    }
    result = 2 * sum;
    result += temp;
  }
  return result;
}