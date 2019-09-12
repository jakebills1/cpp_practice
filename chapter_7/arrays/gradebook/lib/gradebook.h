#include <string>
using namespace std;
class GradeBook
{
public:
  static const int students = 10;
  // initializes course name and array of grades
  GradeBook(string, const int[]);

  void setCourseName(string);
  string getCourseName();
  void displayMessage();
  void processGrades();
  int getMinimum();
  int getMaximum();
  double getAverage();
  void outputBarChart();
  void outputGrades();

private:
  string courseName;
  int grades[students];
};