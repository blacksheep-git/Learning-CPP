#include "CheckingAccount.hpp"
#include <string>
#include <utility>
using namespace std;

inline CheckingAccount::CheckingAccount(string number, Customer& customer, double balance){
    this->number=std::move(number);
    this->customer = customer;
    this->balance=balance;
}
