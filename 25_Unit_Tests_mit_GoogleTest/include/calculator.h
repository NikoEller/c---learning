#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <vector>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int dividend, int divisor);
double average(const std::vector<int>& values);
bool is_even(int value);

#endif
