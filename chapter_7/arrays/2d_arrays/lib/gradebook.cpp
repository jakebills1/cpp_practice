#include <iostream>
#include <iomanip>
#include "gradebook.h"
using namespace std;
GradeBook::GradeBook(string name, const int gradesArr[][tests])
{
  setCourseName(name);
  for (int student = 0; student < students; student++) // copy gradesArr to grades
  {
    for(int test = 0; test < tests; ++test)
      grades[student][test] = gradesArr[student][test];
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
  cout << "Lowest grade is " << getMinimum() << "\nHighest grade is: " << getMaximum() << endl;
}
int GradeBook::getMinimum()
{
  int lowGrade = 100; // assume lowest grade is highest possible array
  for(int student = 0; student < students; ++student) // for each student
  {
    for(int test = 0; test < tests; ++test) // for each test 
    {
      if(grades[student][test] < lowGrade)
        lowGrade = grades[student][test];
    }
  }
  return lowGrade;
}
int GradeBook::getMaximum()
{
  int highGrade = 0; // assume highest grade is lowest possible
  for(int student = 0; student < students; ++student) // for each student
  {
    for(int test = 0; test < tests; ++test) // for each test 
    {
      if(grades[student][test] > highGrade)
        highGrade = grades[student][test];
    }
  }
  return highGrade;
}
double GradeBook::getAverage(const int setOfGrades[], const int grades)
{
  int total = 0;
  for (int grade = 0; grade < students; ++grade)
  {
    total += setOfGrades[grade];
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
 for(int student = 0; student < students; ++student)
  for(int test = 0; test< tests; ++test)  
    ++frequency[grades[student][test] / 10];
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
  cout << "            ";
  for(int test = 0; test < tests; ++test)
    cout << "Test " << test + 1 << "  ";
  cout << "Average" << endl;
  for(int student = 0; student < students; ++student)
  {
    cout << "Student " << setw(2) << student + 1;
    for(int test = 0; test < tests; ++test)
      cout << setw(8) << grades[student][test];
    double average = getAverage(grades[student], tests);
    cout << setw(9) << setprecision(2) << fixed << average << endl;
  }
  
}