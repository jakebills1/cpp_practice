#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "bubblesort.h"
using namespace std;
BubbleSort::BubbleSort(int vSize)
{
  size = (vSize > 0 ? vSize : 10);
  srand(time(0)); // time(0) is the current system time at runtime
  for(int i = 0; i < size; ++i)
    data.push_back(1 + rand() % 99); // random int between 1 and 99
}
bool BubbleSort::isSorted()
{
  if (is_sorted(data.begin(), data.end()))
    return true;
  else 
    return false;
}
void BubbleSort::sort()
{
  cout << "data pre sort: \n";
  displayElements();
  int temp;
  int j = 1;
  while(!isSorted()) // while isSorted does not return true
  {
    // iterate over data, swapping pairs of element that are out of order
    for(int i = 0; i < size - j; ++i)
    {
      if (data[i] > data[i + 1])
        swap(i, i + 1);
    }
    ++j;
    displayElements();
  }
  cout << "data post sort: \n";
  displayElements();
}
void BubbleSort::displayElements()
{
  for(int i = 0; i < size; i++)
  {
    cout << data[i] << " ";
  }
  cout << endl;
}
void BubbleSort::swap(int index1, int index2)
{
  int temp = data[index1];
  data[index1] = data[index2];
  data[index2] = temp;
}
