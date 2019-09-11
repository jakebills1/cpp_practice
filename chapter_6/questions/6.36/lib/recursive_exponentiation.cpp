#include <iostream>
using namespace std;
int power(int base, int exp);
int main()
{
  cout << power(2, 4) << endl;
  cout << power(3, 2) << endl;
  cout << power(6, 1) << endl;
  cout << power(4, 0) << endl;
}
int power(int base, int exp)
{
  if(exp == 1)
    return base;
  else if(exp == 0)
    return 1;
  else
    return base = base * power(base, exp - 1);
}
