#include <iostream>
#include <string>
using namespace std;
class GradeBook
{
public:
  // a member function with the same name as its class is a constructor, used to initialize data in a GradeBook instance
  // default constructors are those with no parameters. they must be declared explicitedly
  GradeBook(string name)
  {
    setCourseName(name);
  }
  void setCourseName(string name)
  {
    courseName = name;
  }
  string getCourseName()
  {
    return courseName;
  }
  void displayMessage()
  {
    cout << "Welcome to the Grade Book for\n"
         << getCourseName() << "!" << endl;
  }

private:
  string courseName;
};
int main()
{
  GradeBook gradeBook1("CS101");
  GradeBook gradeBook2("CS102");
  cout << "gradeBook1 created for course " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
}