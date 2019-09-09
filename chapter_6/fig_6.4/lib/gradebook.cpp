#include <iostream>
#include <iomanip>
#include "gradebook.h"
using namespace std;
GradeBook::GradeBook(string name)
{
  setCourseName(name);
  maximumGrade = 0;
}
void GradeBook::setCourseName(string name)
{
  if (name.length() <= 25)
    courseName = name;
  else
  {
    courseName = name.substr(0, 25);
    cout << "Name \"" << name << "\" exceeds length restriction. Shortening to 25 characters" << endl;
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
void GradeBook::inputGrades()
{
  int grade1, grade2, grade3;
  cout << "Enter three integer grades: ";
  cin >> grade1 >> grade2 >> grade3;
  maximumGrade = calculateMax(grade1, grade2, grade3);
}
void GradeBook::displayGradeReport()
{
  cout << "The largest of the three grades you entered was: " << maximumGrade << endl;
}
int GradeBook::calculateMax(int a, int b, int c)
{
  int max = a;
  if (b > max)
    max = b;
  if (c > max)
    max = c;
  return max;
}
// calculateMax's function signature in gradebook.h says it takes three ints and returns an int. it's function definition says those arguments are called a, b, and c. It first sets a equal to max, then tests whether b or c are larger and returns max