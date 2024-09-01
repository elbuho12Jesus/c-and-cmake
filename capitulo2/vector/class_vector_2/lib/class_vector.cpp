#include "class_vector.h"
#include <initializer_list>
#include <utility>
Vector::Vector(std::initializer_list<double> lst)
:elem{new double[lst.size()]}, sz{lst.size()}
{
  std::cout<<"Costructor ("<< elem <<") "<<"\n";
  std::copy(lst.begin(),lst.end(),elem);
}
Vector::Vector()
  :sz{0}
{
  std::cout<<"Costructor ("<< "00" <<") "<<"\n";
}
Vector::~Vector()
{
  std::cout<<"Destructor"<<"\n";
  delete[] elem;
}
double& Vector::operator[](int i)
{
  return elem[i];
}

int Vector::size()
{
 return sz;
}

void Vector::push_back(double d)
{
  sz++;
  double *arr=new double[sz];
  if(sz>1)
  {
    for(int i = 0; i != sz; i++)
    {
      if (i==(sz-1))
      {
        arr[i]=d;
      }else{
        arr[i]=elem[i];
      }
    }
    delete[] elem;
  }else{
    arr[0]=d;
  }
  elem=std::move(arr);
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
