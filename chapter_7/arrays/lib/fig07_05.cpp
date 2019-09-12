// using a constant to maintain array size
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  const int arraySize = 10; // all constant variables must be given value as they are declared. initializing after declaring will cause a compiler error
  int s[arraySize];         // s is an array of 10 ints
  for (int i = 0; i < arraySize; i++)
  {
    s[i] = 2 + 2 * i;
  }
  cout << "Element" << setw(13) << "Value" << endl;
  for (int i = 0; i < 10; ++i)
  {
    cout << setw(7) << i << setw(13) << s[i] << endl;
  }
}