#include <iostream>
#include <iomanip>
using namespace std;
unsigned long factorial(unsigned long);

int main()
{
  // calculate the factorials of 0 through 10
  for (int counter = 0; counter <= 10; counter++)
  {
    cout << setw(2) << counter << "! = " << factorial(counter) << endl;
  }
  // end main
}
unsigned long factorial(unsigned long n)
{
  if (n <= 1)
    return 1;
  else
    return n * factorial(n - 1);
}