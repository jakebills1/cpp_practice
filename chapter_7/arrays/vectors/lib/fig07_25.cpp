#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void outputVector(const vector<int> &);
void inputVector(vector<int> &);
int main()
{
  // declaration of two vectors
  vector<int> integers1(7);  // 7-element vector
  vector<int> integers2(10); // 10 element vector

  // printing size and initial values
  cout << "Size of vector integers1 is " << integers1.size() << "\nVector after initialization: " << endl;
  outputVector(integers1);
  cout << "Size of vector integers2 is " << integers2.size() << "\nVector after initialization: " << endl;
  outputVector(integers2);

  // input values and print both vectors
  cout << "\nEnter 17 integers" << endl;
  inputVector(integers1);
  inputVector(integers2);
  cout << "\nAfter input, the vectors contain:\n"
       << "integers1: " << endl;
  outputVector(integers1);
  cout << "integers2:" << endl;
  outputVector(integers2);

  // test for equality of vectors with ==/!=
  cout << "\nEvaluating: integers1 != integers2" << endl;

  if (integers1 != integers2)
    cout << "integers1 is not equal to integers2\n";

  // creating a new vector from the contents of an existing vector
  vector<int> integers3(integers1);
  cout << "Size of vector integers3 is " << integers3.size() << "\nVector after initialization:" << endl;
  outputVector(integers3);

  // using overloaded assignment operator
  cout << "\nAssigning integers2 to integers1:" << endl;
  integers1 = integers2;
  cout << "integers1:" << endl;
  outputVector(integers1);
  cout << "integers2:" << endl;
  outputVector(integers2);

  // using equality operator with vector objects
  cout << "/nEvaluating: integers1 == integers2" << endl;
  if (integers1 == integers2)
    cout << "integers1 is equal to integers2\n";

  // use square brackets to retrieve value (rvalue)
  cout << "integers1[5] is " << integers1[5];

  // using square brackets to assign value (lvalue)
  cout << "\nassigning 1000 to integers1[5] " << endl;
  integers1[5] = 1000;
  cout << "integers1: " << endl;
  outputVector(integers1);

  // attempting to access out of range subscript
  try
  {
    cout << "\nAttempt to display integers1.at(15)" << endl;
    cout << integers1.at(15) << endl;
  }
  catch (out_of_range &ex)
  {
    cout << "An exception occurred: " << ex.what() << '\n';
  }
} // end main

// outputs vector contents
void outputVector(const vector<int> &array)
{
  size_t i; // unsigned integer type; used for count
  for (i = 0; i < array.size(); ++i)
  {
    cout << setw(12) << array[i];
    if ((i + 1) % 4 == 0) // tableize output to four columns
      cout << endl;
  }
  if ((i + 1) % 4 == 0)
    cout << endl;
}

// input vector contents
void inputVector(vector<int> &array)
{
  size_t i;
  for (i = 0; i < array.size(); ++i)
    cin >> array[i];
}