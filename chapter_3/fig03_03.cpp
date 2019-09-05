#include <iostream>
#include <string> // header file containing string typedef
using namespace std;
class GradeBook
{
public:
  // additional information neede for functions to perform are called oarameters. the value of those parameters when the function is called are called arguments
  void displayMessage(string courseName)
  {
    cout << "Welcome to the Grade Book for\n"
         << courseName << "!" << endl;
  }
};
int main()
{
  string name_of_course;
  GradeBook myGradeBook;
  cout << "Please enter the course name: ";
  // the stream extraction operator will only catch the first word of a multiline string when used with cin. getline (which belongs to string) will catch every word and space until enter is pressed
  getline(cin, name_of_course);
  cout << endl;
  myGradeBook.displayMessage(name_of_course);
}