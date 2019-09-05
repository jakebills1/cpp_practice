#include <iostream>
// user defined header files are enclosed in qoutes and should be in the same directory as the source code files
#include "gradebook.h"
// header files like gradebook or string let the preproccessor know how much memory to reserve for instances of classes and the definitions of their member functions before compiling
int main()
{
  GradeBook gradeBook1("CS101");
  GradeBook gradeBook2("CS102");
  cout << "gradeBook1 created for course " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
}