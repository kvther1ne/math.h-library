# math.h-library
### Реализация библиотеки math.h на языке С

В данном проекте наша команда разработала свою версию стандартной библиотеки math.h на языке программирования Си. Эта библиотека реализует базовые математические операции, которые затем используются в различных алгоритмах. 

Математические операции на языке Си представляют собой группу функций в стандартной библиотеке языка программирования Си, реализующих основные математические функции. Все функции так или иначе используют числа с плавающей запятой. Различные стандарты C предоставляют различные, хотя и обратно совместимые, наборы функций. Любые функции, которые работают с углами, используют радианы в качестве единицы измерения угла.

Обзор некоторых функций math.h:
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

Сборка программ настроена с помощью Makefile с соответствующими целями: all, clean, test, s21_math.a, gcov_report. Реализовано покрытие интеграционными тестами для всех вариантов флагов и входных значений.
