#include <iostream>
#include "GradeBook.h"
int main()
{
  GradeBook gradeBook1("CS101 Introduction to Programming in C++");
  GradeBook gradeBook2("CS102 Data Structures in C++");
  cout << "gradeBook1's initial course name is " << gradeBook1.getCourseName() << "\ngradeBook2's initial course name is" << gradeBook2.getCourseName() << endl;
  gradeBook1.setCourseName("CS101 C++ Programming");
  cout << "gradeBook1's course name is now " << gradeBook1.getCourseName() << endl;
}