#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
  // loop runs twenty times
  for (int i = 1; i <= 20; i++)
  {
    // setw will ensure each column of output will be ten spaces wide, in this case 9 + the dice roll
    // the rand expression excludes 0 so only valid dice face values will be produced
    cout << setw(10) << (1 + rand() % 6);
    if (i % 5 == 0)
      cout << endl;
  }
}