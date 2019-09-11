#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int n)
{
  int limit = sqrt(n);
  // int limit = n / 2;
  for (int i = 2; i <= limit; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}