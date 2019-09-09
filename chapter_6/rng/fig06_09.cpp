#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
  int f1, f2, f3, f4, f5, f6; // count of occurences of each dice face
  int face;                   // most recently rolled value
  // collect frequencies over 6,000,000 dice rolls
  for (int roll = 1; roll < 6000000; roll++)
  {
    face = 1 + rand() % 6;
    switch (face)
    {
    case 1:
      ++f1;
      break;
    case 2:
      ++f2;
      break;
    case 3:
      ++f3;
      break;
    case 4:
      ++f4;
      break;
    case 5:
      ++f5;
      break;
    case 6:
      ++f6;
      break;
    default: // invalid value
      cout << "Program should never reach here";
    }
  }
  // table-ized result
  cout << "Face" << setw(13) << "Frequency" << endl; // table headings
  cout << "   1" << setw(13) << f1
       << "\n   2" << setw(13) << f2
       << "\n   3" << setw(13) << f3
       << "\n   4" << setw(13) << f4
       << "\n   5" << setw(13) << f5
       << "\n   6" << setw(13) << f6 << endl;
}