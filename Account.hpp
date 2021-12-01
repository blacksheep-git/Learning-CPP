#ifndef BANK_CPP_ACCOUNT_H
#define BANK_CPP_ACCOUNT_H

#include <string>
#include "Customer.hpp"
using namespace std;

class Account {
    protected:
        Customer customer;
        string number;
        double balance{};

    public:
        Account(string number, Customer& customer, double balance);
        virtual ~Account() = default;
        virtual void accrue(double rate) {};
        virtual double getBalance() { return balance; };
        virtual void deposit(double amount) { balance += amount; };
        virtual void withdraw(double amount) { balance -= amount; };
        friend ostream& operator<<(ostream& os, const Account& acct);
};
#endif //BANK_CPP_ACCOUNT_H
