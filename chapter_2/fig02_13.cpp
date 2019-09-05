#include <iostream>
// examples of using directives. replaceable by `using namespace std;`
// assignment is right-to-left associative, where conditional operators act left-to-right
using std::cin;
using std::cout;
using std::endl;
int main()
{
  int num1, num2;
  cout << "Enter two numbers to compare: ";
  cin >> num1 >> num2;
  // demonstrates conditional operators in c++
  if (num1 == num2)
    cout << num1 << " == " << num2 << endl;
  if (num1 != num2)
    cout << num1 << " != " << num2 << endl;
  if (num1 < num2)
    cout << num1 << " < " << num2 << endl;
  if (num1 > num2)
    cout << num1 << " > " << num2 << endl;
  if (num1 <= num2)
    cout << num1 << " <= " << num2 << endl;
  if (num1 >= num2)
    cout << num1 << " >= " << num2 << endl;
}