// initializing an array with an initializer list
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  // use initializer list to initalize n
  int n[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // initializer lists can be less than the size of the array, but not more
  cout << "Element" << setw(13) << "Value" << endl;
  for (int i = 0; i < 10; ++i)
  {
    cout << setw(7) << i << setw(13) << n[i] << endl;
  }
}