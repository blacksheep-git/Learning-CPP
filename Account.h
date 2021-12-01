#ifndef BANK_CPP_ACCOUNT_H
#define BANK_CPP_ACCOUNT_H

#include <string>
#include "Customer.h"
using namespace std;

class Account {
    protected:
        Customer customer;
        string number;
        double balance;

    public:
        virtual void accrue(double rate) = 0; // Virtual method
        double getBalance() { return balance; };
        void deposit(double amount) { balance += amount; };
        void withdraw(double amount) { balance -= amount; };
        friend ostream& operator<<(ostream& os, const Account& acct);
};

#endif //BANK_CPP_ACCOUNT_H
