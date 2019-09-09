#include <iostream>
using namespace std;
void useLocal();
void useStaticLocal();
void useGlobal();
int x = 1; // global variable
int main()
{
  cout << "global x in main is " << x << endl;

  int x = 5; // local variable to main

  cout << "local x in main's outer scope is " << x << endl;
  {            // starts new scope
    int x = 7; // hides global x and local x
    cout << "local x in mains inner scope is " << x << endl;
  }
  cout << "local x in main's outer scope is " << x << endl;
  useLocal();       // has local x
  useStaticLocal(); // has static local x
  useGlobal();      // uses global x
  useLocal();       // reinitializes it's local x
  useStaticLocal(); // static local x retains previous value
  useGlobal();      // global x's value also remains unchanged
} // end main
void useLocal()
{
  int x = 25; // enters memory when function is called, receives value, exits memory when control returns to main, repeat when called again
  cout << "\nlocal x is " << x << " on entering useLocal" << endl;
  ++x;
  cout << "\nlocal x is " << x << " on exiting useLocal" << endl;
}
void useStaticLocal()
{
  static int x = 25; // is created and given value first time function is called, retains value between valls
  cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
  ++x;
  cout << "\nlocal static x is " << x << " on exiting useStaticLocal" << endl;
}
// useGlobal modifies global x on each function call
void useGlobal()
{
  // this function can "see" x because it does not contain in local declarations of identifiers named x
  cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
  x *= 10;
  cout << "\nglobal x is " << x << " on exiting useGlobal" << endl;
}