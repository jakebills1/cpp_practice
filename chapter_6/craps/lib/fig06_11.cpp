#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rollDice();
int main()
{
  // constants that represent game status
  enum Status
  {
    CONTINUE,
    WON,
    LOST
  };
  int myPoint;       // represents players point, if they roll the appropriate roll
  Status gameStatus; // CONTINUE, WON, LOST
  srand(time(0));
  int sumOfDice = rollDice(); // initial roll
  switch (sumOfDice)
  {
  case 7:
  case 11:
    gameStatus = WON;
    break;
  case 2:
  case 3:
  case 12:
    gameStatus = LOST;
    break;
  default: // initial roll did not win or lose, so track point
    gameStatus = CONTINUE;
    myPoint = sumOfDice;
    cout << "Point is: " << myPoint << endl;
    break;
  }
  // while game is not complete
  while (gameStatus == CONTINUE)
  {
    sumOfDice = rollDice();
    if (sumOfDice == myPoint)
      gameStatus = WON;
    else if (sumOfDice == 7)
      gameStatus = LOST;
  }
  if (gameStatus == WON)
    cout << "Player wins" << endl;
  else
    cout << "Player loses" << endl;
} // end main
int rollDice()
{
  int die1 = 1 + rand() % 6;
  int die2 = 1 + rand() % 6;
  int sum = die1 + die2;
  cout << "Player rolled " << sum << endl;
  return sum;
}