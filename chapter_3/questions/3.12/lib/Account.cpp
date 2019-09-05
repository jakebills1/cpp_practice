#include <iostream>
#include "Account.h"
using namespace std;
Account::Account(int initialBalance)
{
    setBalance(initialBalance);
}
void Account::setBalance( int amt )
{
    if( amt > 0 )
        balance = amt;
    else
        cout << "Amount invalid! You must retain a positive balance in your Account" << endl;
}
int Account::getBalance()
{
    return balance;
}
void Account::credit(int amt)
{
    setBalance(getBalance() + amt);
}
void Account::debit( int amt )
{
    setBalance(getBalance() - amt);
}

