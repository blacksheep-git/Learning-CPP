#ifndef BANK_CPP_SAVINGACCOUNT_H
#define BANK_CPP_SAVINGACCOUNT_H

#include "Customer.hpp"
#include "Account.hpp"
#include <string>
using namespace std;

class SavingAccount : public Account {
    private:
        double interest = 0;

    public:
        SavingAccount(string number, Customer& customer, double balance);
        void accrue(double rate);
};

#endif //BANK_CPP_SAVINGACCOUNT_H
