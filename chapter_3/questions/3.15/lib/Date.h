#include <string>
using namespace std;
class Date
{
public:
  Date( string initDay, string initMonth, string initYear );
  void setDay(string initDay);
  void setMonth(string initMonth);
  void setYear(string initYear);
  string getDay();
  string getMonth();
  string getYear();
  string getFullDate();

private:
  string day;
  string month;
  string year;
};
