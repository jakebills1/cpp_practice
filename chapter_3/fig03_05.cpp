#include <iostream>
#include <string>
using namespace std;
class GradeBook
{
public:
  // main is a client of the class GradeBook. setter and getter functions allow clients to manipulate and retreive data encapsulated in the class
  // member functions should also use getter and setter functions to manipulate data, even though they can access private data
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
  // courseName is a variable local to instances of GradeBook. Each instance has its own copy
  // variables and functions in private are only accessible to member functions of the class they are in. data is most often private.
  string courseName;
};
int main()
{
  string name_of_course;
  GradeBook myGradeBook;
  cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;
  cout << "Please enter the course name: ";
  getline(cin, name_of_course);
  cout << endl;
  myGradeBook.setCourseName(name_of_course);
  cout << endl;
  myGradeBook.displayMessage();
}