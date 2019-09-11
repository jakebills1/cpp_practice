#include <iostream>
using namespace std;
void fibonacci(int n);
int main()
{
  fibonacci(20);
}
void fibonacci(int n)
{
  int n1 = 0;
  int n2 = 1;
  cout << n1 << endl;
  cout << n2 << endl;
  for (int i = 2; i <= n; i++)
  {
    // print the sum of n1 and n2. n1 and n2 can save the previous two values
    cout << (n1 + n2) << endl;
    if (i % 2 == 0)
      n1 = n1 + n2;
    else
      n2 = n2 + n1;
  }
}
// 0, 1, 1, 2, 3, 5, 8, 11 ,,,