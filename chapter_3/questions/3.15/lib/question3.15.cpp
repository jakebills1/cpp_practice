#include <iostream>
#include "Date.h"
using namespace std;
int main()
{
  string day = "01";
  string month = "05";
  string year = "1993";
  Date newDate(day, month, year);
  cout << "Your birthday is " << newDate.getFullDate() << endl;
}
