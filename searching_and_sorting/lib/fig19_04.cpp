#include <iostream>
#include "binarysearch.h"
using namespace std;
int main()
{
  int searchInt;
  int position;
  BinarySearch searchVector(15);
  searchVector.displayElements();

  // get search key from user
  cout << "Please enter a integer search value(-1 to quit)";
  cin >> searchInt;
  cout << endl;
  while (searchInt != -1)
  {
    position = searchVector.binarySearch(searchInt);
    if (position == -1)
      cout << "The integer " << searchInt << " was not found\n";
    else
      cout << "The integer " << searchInt << " was found at index " << position << endl;
    // get a new search key
    cout << "Please enter a integer search value(-1 to quit)";
    cin >> searchInt;
    cout << endl;
  }
}