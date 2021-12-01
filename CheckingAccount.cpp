#include "CheckingAccount.h"
#include <string>
using namespace std;

CheckingAccount::CheckingAccount(string number, Customer customer, double balance) {
    this->number=number;
    this->customer=customer;
    this->balance=balance;
}
