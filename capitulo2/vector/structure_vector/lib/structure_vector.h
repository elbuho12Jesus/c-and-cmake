#pragma once
#include <iostream>
struct Vector {
  int sz;
  double* elem;
};
void vector_init(Vector& v, int s);
double read_and_sum(int s);
