// passing arrays and individual array elements to functions
#include <iostream>
#include <iomanip>
using namespace std;
void modifyArray(int[], int);
void modifyElement(int);
int main()
{
  const int arraySize = 5;
  int a[arraySize] = {0, 1, 2, 3, 4};
  cout << "Effects of passing entire array by reference:"
       << "\nThe values of the original array are:\n";
  for (int i = 0; i < arraySize; ++i)
  {
    cout << setw(3) << a[i];
  }
  cout << endl;
  modifyArray(a, arraySize);
  cout << "The values of the modified array are:\n";
  // output modified array elements
  for (int i = 0; i < arraySize; ++i)
  {
    cout << setw(3) << a[i];
  }
  cout << "\n\nEffects of passing array element by value:"
       << "\\\\na[3] before modifyElement: " << a[3] << endl;
  modifyElement(a[3]); // pass array element 3 by value
  cout << "\na[3] after modifyElement: " << a[3] << endl;
} // end main
void modifyArray(int b[], int size)
{
  // multiply each array element by 2
  for (int i = 0; i < size; ++i)
  {
    b[i] *= 2;
  }
}
void modifyElement(int e)
{
  cout << "Value of element in modifyElement: " << (e *= 2) << endl;
}