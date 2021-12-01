#ifndef LW_CHECKINGACCOUNT_HPP
#define LW_CHECKINGACCOUNT_HPP

#include "Account.hpp"
#include <string>
using namespace std;

class CheckingAccount : virtual public Account {
    public: CheckingAccount(string number, const Customer& customer, double balance); //prototype for the constructor defined in CheckingAccount.cpp
    void accrue(double rate) override{}
};
#endif //LW_CHECKINGACCOUNT_HPP
