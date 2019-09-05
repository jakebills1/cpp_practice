#include <iostream>
#include "Date.h"
using namespace std;
Date::Date(string initDay, string initMonth, string initYear)
{
  setDay(initDay);
  setMonth(initMonth);
  setYear(initYear);
}
void Date::setDay(string initDay)
{
  if (stoi(initDay) > 0 && stoi(initDay) < 32)
    day = initDay;
}
void Date::setMonth(string initMonth)
{
  if (stoi(initMonth) > 0 && stoi(initMonth) < 13)
  {
    month = initMonth; 
  }
}
void Date::setYear(string initYear)
{
  if (stoi(initYear) > 0)
    year = initYear;
}
string Date::getDay()
{
  return day;
}
string Date::getMonth()
{
  return month;
}
string Date::getYear()
{
  return year;
}
string Date::getFullDate()
{
  string hyphen = "-";
  string fullDate = day + hyphen + month + hyphen + year;
  return fullDate;
}
