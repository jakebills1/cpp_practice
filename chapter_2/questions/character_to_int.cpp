#include <iostream>
using namespace std;
int main()
{
  char input;
  cout << "Enter a character to see its ACSII value: ";
  cin >> input;
  cout << static_cast<int>(input);
}