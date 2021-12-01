#include "CheckingAccount.hpp"
#include <string>
#include <utility>
using namespace std;

CheckingAccount::CheckingAccount(string number, const Customer& customer, double balance) {
    this->number=std::move(number);
    this->customer = customer;
    this->balance=balance;
}
