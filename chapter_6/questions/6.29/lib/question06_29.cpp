#include <iostream>
#include <iomanip>
#include "prime.h"
using namespace std;
int main()
{
  // // test primes
  // cout << boolalpha << is_prime(2) << endl;
  // cout << is_prime(3) << endl;
  // cout << is_prime(5) << endl;
  // cout << is_prime(7) << endl;
  // // test non-primes
  // cout << is_prime(4) << endl;
  // cout << is_prime(6) << endl;
  // cout << is_prime(8) << endl;
  // cout << is_prime(9) << endl;
  for (int i = 2; i < 10000; i++)
  {
    if (is_prime(i))
      cout << i << endl;
  }
}