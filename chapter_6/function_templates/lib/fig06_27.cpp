// will use template in maximum.h to determine the largest of three ints, doubles, chars
#include <iostream>
#include "maximum.h"
using namespace std;
int main()
{
  int int1, int2, int3;
  cout << "Input three integer values: ";
  cin >> int1 >> int2 >> int3;

  // will invoke int version of maximum
  cout << "The maximum integer value is: " << maximum(int1, int2, int3) << endl;

  double d1, d2, d3;
  cout << "Enter three double values: ";
  cin >> d1 >> d2 >> d3;

  // will invoke double version of maximum
  cout << "The maximum double value is: " << maximum(d1, d2, d3) << endl;

  char c1, c2, c3;
  cout << "Enter three char values: ";
  cin >> c1 >> c2 >> c3;

  // will invoke char version of maximum
  cout << "The maximum char value is: " << maximum(c1, c2, c3) << endl;
}