#include "class_vector.h"
#include <initializer_list>
Vector::Vector(std::initializer_list<double> lst)
:elem{new double*[1]}, sz{lst.size()}
{
  elem[0]=new double[lst.size()];
  std::copy(lst.begin(),lst.end(),elem[0]);
}
Vector::Vector()
  :elem{new double*[1]},sz{0}
{}
Vector::~Vector()
{
  delete[] elem[0];
  delete[] elem;
}
double& Vector::operator[](int i)
{
  return elem[0][i];
}

int Vector::size()
{
 return sz;
}

void Vector::push_back(double d)
{
  sz++;
  double *arr=new double[sz];
  for(int i = 0; i != sz; i++)
  {
    if (i==(sz-1))
    {
      arr[i]=d;
    }else{
      arr[i]=elem[0][i];
    }
  }
  delete[] elem[0];
  elem[0]=arr;
}

Vector read(std::istream &is)
{
 Vector v;
 for (double d; is>>d;) 
 {
  v.push_back(d);
 }
 return v;
}
