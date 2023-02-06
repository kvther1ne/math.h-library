# math.h-library
### Implementation of my own version of the math.h library

This library implements basic mathematical operations, which are then used in various algorithms. All functions use floating-point numbers in one manner or another. Any functions that operate on angles use radians as the unit of angle.

Implementing next math.h functions:
1. int abs(int x)
2. long double acos(double x)
3. long double asin(double x)
4. long double atan(double x)
5. long double ceil(double x)
6. long double cos(double x)
7. long double exp(double x)
8. long double fabs(double x)
9. long double floor(double x)
10. long double fmod(double x, double y)
11. long double log(double x)
12. long double pow(double base, double exp)
13. long double sin(double x)
14. long double sqrt(double x)
15. long double tan(double x)

Makefile used for building the library and tests (with the targets all, clean, test, s21_math.a, gcov_report). The gcov_report target generates a gcov report in the form of an html page.
Unit-tests check the result of implementation by comparing them with the implementation of the standard math.h library. Tests cover at least 80% of each function.
