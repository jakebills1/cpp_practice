#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "binarysearch.h"
using namespace std;
BinarySearch::BinarySearch(int vectorSize)
{
  // ternary operator to validate size
  size = (vectorSize > 0 ? vectorSize : 10);
  srand(time(0)); // seed randomness
  for (int i = 0; i < size; i++)
    data.push_back(10 + rand() % 90); // seeds data with random values between 10 and 99
  sort(data.begin(), data.end());
}
int BinarySearch::binarySearch(int searchElement) const
{
  int low = 0; // lower half of search space
  int high = size - 1; // higher half of search space
  int middle = (low + high + 1) / 2; // middle marker
  int location  = -1; // location where value is found or return -1
  do
  {
    displaySubElements(low, high); // print elements of vector that will be searched
    for( int i = 0; i < middle; ++i) // alignment
      cout << "   ";
    cout << " * " << endl; // indicates current middle
    if(searchElement == data[middle]) // if searchElement is in the middle position
      location = middle; // return middle
    else if(searchElement < data[middle]) // is searchElement is in the lower half
      high = middle - 1; // discard the higher half
    else // if searchElement is in the higher half
      low = middle + 1; // discard lower half
    middle = (low + high + 1) / 2; // redefine middle
  } while ((low <= high) && ( location == -1)); // while search space remains and location has not been found
  return location; // return location or -1 
}
void BinarySearch::displayElements() const // displays all elements in vector
{
  displaySubElements(0, size - 1);
}
void BinarySearch::displaySubElements(int low, int high) const
{
  for (int i = 0; i < low; ++i) // output spaces for alignment
    cout << "   ";
  for(int i = low; i <= high; ++i) // output data
    cout << data[i] << " ";
  cout << endl;
}