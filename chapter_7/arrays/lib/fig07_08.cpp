// summing elements in an array
#include <iostream>
using namespace std;
int main()
{
  const int arraySize = 10;
  int a[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int total = 0;
  for (int i = 0; i < 10; i++)
  {
    total += a[i];
  }
  cout << total << endl;
}