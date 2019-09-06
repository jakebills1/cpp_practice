#include <iostream>
using namespace std;
int main()
{
  cout << "This program will determine the largest number out of a list of ten" << endl;
  int input;
  int compare = 0;
  int counter = 1;
  while (counter < 11)
  {
    cout << "Enter a number: ";
    cin >> input;
    cout << endl;
    if (counter != 1)
    {
      if (compare < input)
        compare = input;
    }
    else
      compare = input;
    counter++;
  }
  cout << "The greatest number you entered was: " << compare << endl;
}