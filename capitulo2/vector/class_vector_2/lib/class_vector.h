#pragma once
#include <initializer_list>
#include <iostream>
#include <list>
class Vector {
public:
  Vector(std::initializer_list<double>);
  Vector();
  ~Vector();
  double& operator[](int i);
  int size();
  void push_back(double);
private:
  double *elem; // pointer to the elements
  int sz; // the number of elements
};
Vector read(std::istream &is);
