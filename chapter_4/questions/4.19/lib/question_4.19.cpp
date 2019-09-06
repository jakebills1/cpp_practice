#include <iostream>
using namespace std;
int main()
{
  int counter = 1;    // keeps track of loop repeats
  int largest;        // stores largest inputted number
  int second_largest; // stores second largest inputted number
  int input;          // stores user input each loop
  while (counter < 11)
  {
    cout << "Enter a number: ";
    cin >> input;
    if (counter != 1)
    {
      // do comparisons
      if (input > largest)
      {
        largest = input;
      }
      else if (input > second_largest)
      {
        second_largest = input;
      }
    }
    else
    {
      // the first time the loop runs, initialize variables as user input, because no comparison
      largest = input;
      second_largest = input;
    }
    counter++;
  }
  cout << "The largest number you entered was " << largest << "\nthe second largest was " << second_largest << endl;
}