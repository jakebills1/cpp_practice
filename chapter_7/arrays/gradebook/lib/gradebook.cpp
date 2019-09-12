#include <iostream>
#include <iomanip>
#include "gradebook.h"
using namespace std;
GradeBook::GradeBook(string name, const int gradesArr[])
{
  setCourseName(name);
  for (int grade = 0; grade < students; grade++) // copy gradesArr to grades
  {
    grades[grade] = gradesArr[grade];
  }
} // end constructor
void GradeBook::setCourseName(string name)
{
  courseName = name;
}
string GradeBook::getCourseName()
{
  return courseName;
}
void GradeBook::displayMessage()
{
  cout << "Welcome to the grade book for\n"
       << getCourseName() << "!" << endl;
}
void GradeBook::processGrades()
{
  outputGrades();
  cout << "\nClass average is " << setprecision(2) << fixed << getAverage() << "\nLowest grade is " << getMinimum() << "\nHighest grade is: " << getMaximum() << endl;
}
int GradeBook::getMinimum()
{
  int lowGrade = 100; // assume lowest grade is highest possible array
  for (int grade = 0; grade < students; grade++)
  {
    if (grades[grade] < lowGrade) //  if current grade is less than lowGrade
      lowGrade = grades[grade];
  }
  return lowGrade;
}
int GradeBook::getMaximum()
{
  int highGrade = 0; // assume highest grade is lowest possible
  for (int grade = 0; grade < students; grade++)
  {
    if (grades[grade] > highGrade)
      highGrade = grades[grade];
  }
  return highGrade;
}
double GradeBook::getAverage()
{
  int total = 0;
  for (int grade = 0; grade < students; ++grade)
  {
    total += grades[grade];
  }
  return static_cast<double>(total) / students;
}
void GradeBook::outputBarChart()
{
  cout << "Grade Distribution:" << endl;
  // stores frequencies of grades in eaach range of ten grades
  const int frequencySize = 11;
  int frequency[frequencySize] = {}; // initialize elements to 0
  // increment the appropriate frequency for each grade
  for (int grade = 0; grade < students; ++grade)
    ++frequency[grades[grade] / students];
  // for each frequency, print bar in chart
  for (int count = 0; count < frequencySize; ++count)
  {
    // output bar labels for approprate distribution
    if (count == 0)
      cout << "  0-9: ";
    else if (count == 10)
      cout << "  100: ";
    else
      cout << count * 10 << "-" << (count * 10) + 9 << ":";
    for (int stars = 0; stars < frequency[count]; ++stars)
      cout << "*";
  }
}
void GradeBook::outputGrades()
{
  cout << "\nThe grades are:\n\n";
  for (int student = 0; student < students; ++student)
  {
    cout << "Student " << setw(2) << student + 1 << ": " << setw(3) << grades[student] << endl;
  }
}