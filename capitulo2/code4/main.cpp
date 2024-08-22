#include <vector>
#include <complex>
// x+y plus 
// +x unary plus
// x−y minus
// −x unary minus
// x∗y multiply
// x/y divide
// x%y remainder (modulus) for integers

void some_function() // function that doesn’t return a value 
{ 
    double d = 2.2; // initialize floating-point number 
    int i = 7; // initialize integer 
    d = d+i; // assign sum to d 
    i = d*i; // assign product to i (truncating the double d*i to an int) 
}
double d1 = 2.3; 
double d2 {2.3}; 
std::complex<double> z = 1; // a complex number with double-precision floating-point scalars 
std::complex<double> z2 {d1,d2}; 
std::complex<double> z3 = {1,2}; // the = is optional with { ... } 
std::vector<int> v {1,2,3,4,5,6}; // a vector of ints

int i1 = 7.2; // i1 becomes 7 
int i2 {7.2}; // error: floating-point to integer conversion 
int i3 = {7.2}; // error: floating-point to integer conversion (the = is redundant)

auto b = true; // a bool 
auto ch = 'x'; // a char 
auto i = 123; // an int 
auto d = 1.2; // a double 
auto z = sqrt(y); // z has the type of whatever sqr t(y) returns

// x+=y (x = x+y)
// ++x increment: x = x+1 
// x−=y (x = x-y) 
// −−x decrement: x = x-1 
// x∗=y scaling: (x = x*y) 
// x/=y scaling: x = x/y 
//x%=y (x = x%y)

int main()
{
    some_function();
    return 0;
}