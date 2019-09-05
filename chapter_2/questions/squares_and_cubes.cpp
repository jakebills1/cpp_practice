#include <iostream>
using namespace std;
int main()
{
  int count = 11;
  int square;
  int cube;
  cout << "integer"
       << " "
       << "square"
       << "  "
       << "cube" << endl;
  for (int i = 0; i < count; i++)
  {
    if (i < 4)
      cout << i << "       " << i * i << "       " << i * i * i << endl;
    else if (i < 10)
      cout << i << "       " << i * i << "      " << i * i * i << endl;
    else
      cout << i << "      " << i * i << "     " << i * i * i << endl;
  }
}