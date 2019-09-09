#include <string>
using namespace std;
class GradeBook
{
public:
  GradeBook(string);
  void setCourseName(string);
  string getCourseName();
  void displayMessage();
  void inputGrades();
  void displayGradeReport();
  double calculateGPA();

private:
  string courseName;
  int aCount;
  int bCount;
  int cCount;
  int dCount;
  int fCount;
  int totalGradesEntered;
};