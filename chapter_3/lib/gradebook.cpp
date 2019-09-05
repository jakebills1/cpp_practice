#include <iostream>
#include "GradeBook.h"
using namespace std;
// namespacing these functions with :: (binary scope resolution operator) lets the preprocessor know these are member functions of the GradeBook class
GradeBook::GradeBook(string name)
{
  setCourseName(name);
}
void GradeBook::setCourseName(string name)
{
  // validation appears here, which is the only function that will directly set courseName
  if (name.length() <= 25)
    courseName = name;
  if (name.length() > 25)
  {
    courseName = name.substr(0, 25);
    // substr returns a portion of the string it is invoked on (start, end)
    cout << "Name \"" << name << "\" exceeds max length of 25 characters.\n"
         << "Limiting courseName to 25 characters" << endl;
  }
}
string GradeBook::getCourseName()
{
  return courseName;
}
void GradeBook::displayMessage()
{
  cout << "Welcome to the grade book for\n"
       << getCourseName() << endl;
}