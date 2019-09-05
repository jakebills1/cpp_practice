// create an account class with a data member of type int, member functions credit, debit, and getBalance. validate all behavoirs so account balance cannot be less than zero
#include <iostream>
using namespace std;
class Account {
public:
    Account(int initialBalance);
    void setBalance( int amt );
    int getBalance();
    void credit( int amt );
    void debit( int amt );
private:
    int balance;
};
