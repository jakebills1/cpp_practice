#include <iostream>
using namespace std;
int sum(int n)
{
  int sum;
  int input;
  for (int i = 0; i < n; i++)
  {
    cout << "Enter a number to be summed: ";
    cin >> input;
    sum += input;
  }
  cout << "The sum is " << sum << endl;
  return sum;
}
int main()
{
  int n; // used for how many times sum will take a number
  cout << "Enter a number between 1 and 10: ";
  cin >> n;
  if (n > 0 && n < 11)
    sum(n);
  else
  {
    cout << "Invalid Entry!" << endl;
    return 1;
  }
}