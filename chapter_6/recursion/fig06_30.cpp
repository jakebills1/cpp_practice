#include <iostream>
using namespace std;
unsigned long fibonacci(unsigned long);
int main()
{
  for(int i = 0; i <= 10; ++i)
  {
    cout << "fibonacci( " << i << " ) = " << fibonacci(i) << endl;
  }  
  cout << "fibonacci( 20  ) = " << fibonacci(20) << endl;
  cout << "fibonacci( 30  ) = " << fibonacci(30) << endl;
  cout << "fibonacci( 35  ) = " << fibonacci(35) << endl;
}
unsigned long fibonacci(unsigned long number)
{
  if ((number == 0) || (number == 1)) // base case
    return number;
  else
    return fibonacci(number - 1) + fibonacci(number - 2);
}
