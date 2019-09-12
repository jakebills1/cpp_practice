#include <iostream>
using namespace std;
int linearSearch(const int[], int, int);
int main()
{
  const int arraySize = 100;
  int a[arraySize];
  int searchKey; // value to locate in array
  for (int i = 0; i < arraySize; ++i)
    a[i] = 2 * i; // initialize some data
  cout << "Enter integer to search for: ";
  cin >> searchKey;
  int el = linearSearch(a, searchKey, arraySize);
  if (el != -1)
    cout << "Found value in element " << el << endl;
  else
    cout << "value no found" << endl;
} // end main
int linearSearch(const int array[], int key, int sizeOfArray)
{
  for (int j = 0; j < sizeOfArray; ++j)
    if (array[j] == key) // if element at j matches key
      return j;          // return index
  return -1;             // if key not found
}