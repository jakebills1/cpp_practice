#include <iostream>
using namespace std;
int palindrome_test(int num)
{
  int dig1, dig2, dig3, dig4, dig5; // slots to place digits peeled off number
  dig1 = num % 10;
  num = num / 10;
  dig2 = num % 10;
  num = num / 10;
  dig3 = num % 10;
  num = num / 10;
  dig4 = num % 10;
  num = num / 10;
  dig5 = num % 10;
  num = num / 10;
  if (dig1 == dig5 && dig2 == dig4)
    return 0;
  return 1;
}

int main()
{
  int num1 = 45554;
  int num2 = 12345;
  if (palindrome_test(num1) == 0)
  {
    cout << num1 << " is a palindrome\n";
  }
  else
  {
    cout << num1 << " is not a palindrome\n";
  }
  if (palindrome_test(num2) == 0)
  {
    cout << num2 << " is a palindrome\n";
  }
  else
  {
    cout << num2 << " is not a palindrome\n";
  }
}