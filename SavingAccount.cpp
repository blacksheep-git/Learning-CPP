#include "SavingAccount.hpp"

#include <utility>
using namespace std;
SavingAccount::SavingAccount(string number, Customer& customer, double balance) {
    this->number=std::move(number);
    this->customer=customer;
    this->balance=balance;
};

void SavingAccount::accrue(double rate) {
    interest+=balance*rate;
    balance+=balance*rate;
}

