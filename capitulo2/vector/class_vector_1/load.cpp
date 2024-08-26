#include "class_vector.h"
int main()
{
  Vector v = read(std::cin);
  for (int i = 0; i != v.size(); i++)
  {
   std::cout << v[i] << "\n";
  }
  return 0;
}
