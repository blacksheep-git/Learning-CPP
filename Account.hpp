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
        virtual ~Account() = default;
        virtual void accrue(double rate) {};
        [[maybe_unused]] virtual double getBalance() { return balance; };
        [[maybe_unused]] virtual void deposit(double amount) { balance += amount; };
        [[maybe_unused]] virtual void withdraw(double amount) { balance -= amount; };
        friend ostream& operator<<(ostream& os, const Account& acct);
};
#endif //BANK_CPP_ACCOUNT_H
