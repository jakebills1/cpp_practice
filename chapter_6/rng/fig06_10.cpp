// this program will produce 10 non-deterministic random values each time it is ran, assuming the user enters a different seed value
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
  // unsigned seed; // stores the seed value, as entered by the user
  // cout << "Enter seed: ";
  // cin >> seed;
  srand(time(0));
  // to avoid having seed be reliant on hardcoded values, time can be used as a seed
  for (int i = 0; i <= 10; i++)
  {
    cout << setw(10) << (1 + rand() % 6);
    if (i % 5 == 0)
      cout << endl;
  }
}