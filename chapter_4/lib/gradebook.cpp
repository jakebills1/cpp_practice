#include <iostream>
#include <iomanip>
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
void GradeBook::determineClassAverage()
{
  // have user enter 10 grades, add each to total. return total / 10
  int total = 0;
  int average;
  int gradeCounter = 1;
  int grade;
  int sentinal = -1;
  while (grade != sentinal)
  {
    cout << "Enter grade or -1 to calculate average: ";
    cin >> grade;
    if (grade != sentinal)
    {
      total += grade;
      gradeCounter += 1;
    }
  }
  average = static_cast<double>(total) / gradeCounter;
  // casts total to a double precision floating point
  cout << "the average of those grades is " << setprecision(2) << fixed << average << endl;
  // setprecision is a parameterized stream manipulator which indicates that average will be displayed with 2 points of precision to the right of the decimal point
  // fixed is a stream manipulator which indicates that average will be displayed in fixed point notation
}