// preprocessor directives
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "mergesort.h"
using namespace std;
// member functions
MergeSort::MergeSort( int vectorSize )
{
  // validate vectorSize to be positive before saving
  size = ( vectorSize > 0 ? vectorSize : 10 );
  // seed srand
  srand(time(0));
  // fill vector with random ints in range 10-99
  for(int i = 0; i < size; ++i)
    data.push_back(10 + rand() % 90);
}
void MergeSort::sort()
{
  sortSubVector(0, size - 1);
}
void MergeSort::sortSubVector(int low, int high)
{
  // test base case, if vector is size of 1
  if((high - low) >= 1)
  {
    // split vector into two
    int middle1 = ( low + high ) / 2;
    int middle2 = middle1 + 1;

    // display two sub vectors
    cout << "split:   ";
    displaySubVector(low, high);
    cout << endl << "        ";
    displaySubVector(low, middle1);
    cout << endl << "        ";
    displaySubVector(middle2, high);
    cout << endl << endl;
    // sort each half
    sortSubVector(low, middle1);
    sortSubVector(middle2, high);
    // merge each half
    merge(low, middle1, middle2, high);
  }
}
void MergeSort::merge( int left, int middle1, int middle2, int right )
{
  int leftIndex = left;
  int rightIndex = middle2;
  int combinedIndex = left;
  vector< int > combined(size);
  // display subVectors
  cout << "merge:    ";
  displaySubVector( left, middle1 );
  cout << endl << "         ";
  displaySubVector( middle2, right );
  cout << endl;
  // merge vectors until reaching end of either
  while( leftIndex <= middle1 && rightIndex <=  right )
  {
    // place smaller of two alements into result
    if( data[leftIndex] <= data[rightIndex] )
      combined[combinedIndex++] = data[leftIndex++]; // save value in result, then increment both indexes
    else
      combined[combinedIndex++] = data[rightIndex++];
  }

  // if end of left vector is reached
  if( leftIndex == middle2 )
  {
    // copy in rest of right vector
    while( rightIndex <= right )
      combined[ combinedIndex++ ] = data[rightIndex++];
  }
  else // end of right vector
  {
    // copy in rest of left vector
    while ( leftIndex <= middle1 )
      combined[combinedIndex++] = data[leftIndex++];
  }
  // copy values back to original vector
  for( int i = left; i <= right; ++i )
    data[i] = combined[i];
  // display merged vector
  cout << "          ";
  displaySubVector(left, right);
  cout << endl << endl;
}
void MergeSort::displayElements() const
{
  displaySubVector(0, size - 1);
}
void MergeSort::displaySubVector(int low, int high) const
{
  // output spaces for alignment
  for(int i = 0; i < low; ++i)
    cout << "   ";
  for(int i = low; i <= high; ++i)
    cout << " " << data[i];
}


