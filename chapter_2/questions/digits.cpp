#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  int digit1 = num % 10;
  num = num / 10;
  int digit2 = num % 10;
  num = num / 10;
  int digit3 = num % 10;
  num = num / 10;
  int digit4 = num % 10;
  num = num / 10;

  cout << digit1 << "\n"
       << digit2 << "\n"
       << digit3 << "\n"
       << digit4 << "\n"
       << num << endl;
}