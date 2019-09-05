#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Enter a number to find out if is odd or even: ";
  cin >> num;
  if (num % 2 == 0)
    cout << num << " is even" << endl;
  else
    cout << num << " is odd" << endl;
}