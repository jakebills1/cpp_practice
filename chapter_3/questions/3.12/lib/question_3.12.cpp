// create an account class with a data member of type int, member functions credit, debit, and getBalance. validate all behavoirs so account balance cannot be less than zero
#include <iostream>
#include "Account.h"
using namespace std;
int main()
{
    Account checking( 100 );
    Account savings( 1000);
    cout << "Your checking account balance is $" << checking.getBalance() << "\nYour savings account balance is $" << savings.getBalance() << "\nTransferring $100 to checking..." << endl;
    savings.debit(100);
    checking.credit(100);
    cout << "Your new checking balance is $" << checking.getBalance() << "\nYour new savings account balance is $" << savings.getBalance() << "\nTransferring $300 to savings..." << endl;
    checking.debit(300);
    
    
}
