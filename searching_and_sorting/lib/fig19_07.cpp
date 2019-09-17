#include <iostream>
#include "mergesort.h"
using namespace std;

int main()
{
  MergeSort sortVector(10);
  cout << "unsorted vector:" << endl;
  sortVector.displayElements();
  cout << endl << endl;
  sortVector.sort();

  cout << "sorted vector:" << endl;
  sortVector.displayElements();
  cout << endl << endl;
}
