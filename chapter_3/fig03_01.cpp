#include <iostream>
using namespace std;
// class definitions come before main, and always end with a semicolon, unlike the main function. class names are in PascalCase
class GradeBook
{
public:
  // methods that are public are accessible in other functions (such as main)
  // the member function displayMessage does not return a value to its calling function, thus its return value is void. it also does not take a parameter
  void displayMessage()
  {
    cout << "Welcome to the Grade Book!" << endl;
  }
};
int main()
{
  // we are declaring a variable called myGradeBook of custom type GradeBook. unlike int and c++ built in types, we must provide a class definition for custom class
  GradeBook myGradeBook;
  myGradeBook.displayMessage();
}