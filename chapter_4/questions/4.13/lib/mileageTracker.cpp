#include <iostream>
using namespace std;
int main()
{
  int miles;
  int gallons;
  double milesPerGallon;
  int tankCounter = 0;
  double runningTotal = 0;
  int sentinal = -1;
  while (true)
  {
    cout << "Enter the miles from your last tank, or enter -1 to quit: ";
    cin >> miles;
    if (miles == sentinal)
      break;
    cout << "Enter how many gallons it took to fill the tank: ";
    cin >> gallons;
    milesPerGallon = static_cast<double>(miles) / gallons;
    cout << "MPG this tank: " << milesPerGallon << endl;
    runningTotal += milesPerGallon;
    tankCounter += 1;
    cout << "Total MPG: " << runningTotal / tankCounter << endl;
  }
}