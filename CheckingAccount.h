#ifndef LW_CHECKINGACCOUNT_H
#define LW_CHECKINGACCOUNT_H

#include "Account.h"
#include <string>
using namespace std;

class CheckingAccount : public Account {
    public: CheckingAccount(string number, Customer customer, double balance); //prototype for the constructor defined in CheckingAccount.cpp
    void accrue(double rate) override {}
};
#endif //LW_CHECKINGACCOUNT_H
