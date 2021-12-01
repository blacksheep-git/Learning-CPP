#include "SavingAccount.h"
using namespace std;
SavingAccount::SavingAccount(string number, Customer& customer, double balance) {
    this->number=number;
    this->customer=customer;
    this->balance=balance;
};

void SavingAccount::accrue(double rate) {
    interest+=balance*rate;
    balance+=balance*rate;
}

