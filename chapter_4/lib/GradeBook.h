// this file is the class definition for a GradeBook. it presents the client interface without revealing the implementations of functions
#include <string>
using namespace std;
class GradeBook
{
public:
  // a member function with the same name as its class is a constructor, used to initialize data in a GradeBook instance
  // default constructors are those with no parameters. they must be declared explicitedly
  GradeBook(string name);
  // this function now has validation but clients of it don't need to know that
  void setCourseName(string name);
  string getCourseName();
  void displayMessage();
  void determineClassAverage();

private:
  string courseName;
};