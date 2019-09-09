#include <iostream>
#include <iomanip>
#include "gradebook.h"
using namespace std;
GradeBook::GradeBook(string name)
{
  setCourseName(name);
  aCount = 0;
  bCount = 0;
  cCount = 0;
  dCount = 0;
  fCount = 0;
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
  cout << "Welcome to the grade book for\n" << getCourseName() << endl;
}
void GradeBook::inputGrades()
{
  char grade;
  cout << "Enter the letter grades/" << endl << "Enter the EOF character to end input" << endl;
  while ((grade = cin.get() ) != EOF)
  {
    switch ( grade )
    {
      case 'A':
      case 'a':
        ++aCount;
        ++totalGradesEntered;
        break;
      case 'B':
      case 'b':
        ++bCount;
        ++totalGradesEntered;
        break;
      case 'C':
      case 'c':
        ++cCount;
        ++totalGradesEntered;
        break;
      case 'D':
      case 'd':
        ++dCount;
        ++totalGradesEntered;
        break;
      case 'F':
      case 'f':
        ++fCount;
        ++totalGradesEntered;
        break;
      case '\n':
      case '\t':
      case ' ':
        break;
      default:
        cout << "Incorrect letter grade entered." << "Enter a new grade" << endl;
        break;
    }
  }
}
void GradeBook::displayGradeReport()
{
  cout << "Number of students who received each letter grade: " << 
  "\nA: " << aCount <<
  "\nB: " << bCount <<
  "\nC: " << cCount <<
  "\nD: " << dCount <<
  "\nF: " << fCount << 
  "\nAverage GPA: " << fixed << setprecision(2) << calculateGPA() << endl;
}
double GradeBook::calculateGPA()
{
  double gpa = ((aCount * 4) + (bCount * 3) + (cCount * 2) + (dCount)) / totalGradesEntered;
  return gpa;
}