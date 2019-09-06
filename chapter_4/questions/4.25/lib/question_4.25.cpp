#include <iostream>
#include <string>
using namespace std;
int main()
{
  int size;
  int counter = 1;
  char ast = '*';
  char blank = ' ';
  cout << "Enter a size between 1 and 20: ";
  cin >> size;
  if (size > 0 && size < 21)
  {
    while (counter <= size)
    {
      if (counter != 1 && counter != size)
      {
        int rowCounter = 2;
        cout << ast;
        while (rowCounter < size)
        {
          cout << blank;
          rowCounter++;
        }
        cout << ast;
        cout << endl;
      }
      else
      {
        int rowCounter = 1;
        while (rowCounter <= size)
        {
          cout << ast;
          rowCounter++;
        }
        cout << endl;
      }
      counter++;
    }
  }
  else
  {
    cout << "Invalid size" << endl;
  }
}