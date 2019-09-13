#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  const int arraySize = 10; // size of array
  int data[arraySize] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52}; // unsorted array
  int insert; // temporary variable to hold element to insert
  for (int i = 0; i < arraySize; i++)
    cout << setw(4) << data[i];
  cout << endl;
  // insertion sort algorithm
  for (int next = 1; next < arraySize; ++next) // consider first pair of items 
  {
    insert = data[next]; // second data index
    int moveItem = next; 
    while ((moveItem > 0) && (data[moveItem - 1] > insert)) // moves data[next] back in data until no smaller elements exist
    {
      data[moveItem] = data[moveItem - 1];
      moveItem--;
    }
    data[moveItem] = insert;
  }
  for (int i = 0; i < arraySize; i++)
    cout << setw(4) << data[i];
  cout << endl;
}

// 