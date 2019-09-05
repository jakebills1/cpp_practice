#include <iostream>
using namespace std;
int main()
{
  int user_input_weight;
  int user_input_height;
  cout << "BMI VALUES\n";
  cout << "Underweight: less than 18.5\n";
  cout << "Normal:      between 18.5 and 24.9\n";
  cout << "Overweight:  between 25 and 29.9\n";
  cout << "Obese:       30 or greater\n";
  cout << "\n"
       << "Enter Your Weight in pounds, and then your height in inches: ";
  cin >> user_input_weight >> user_input_height;
  cout << "Your BMI is " << (user_input_weight * 703) / (user_input_height * user_input_height) << endl;
}