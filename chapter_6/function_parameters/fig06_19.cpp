#include <iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int &);
int main()
{
  int x = 2;
  int y = 4;

  // squareByValue
  cout << "x = " << x << " before squareByValue\n";
  cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
  cout << "x = " << x << " after squareByValue\n";
  // squarebyReference
  cout << "y = " << y << " before squareByReference\n";
  squareByReference(y);
  cout << "y = " << y << " after squareByReference" << endl;
} // end main

int squareByValue(int n)
{
  return n *= n;
}
void squareByReference(int &ref)
{
  ref *= ref;
}