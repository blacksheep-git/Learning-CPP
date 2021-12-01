#include "Account.hpp"
#include "Customer.hpp"
#include <iostream>

using namespace std;

Account::Account(string number, Customer &customer, double balance){
        this->number=std::move(number);
        this->customer = customer;
        this->balance=balance;
}

ostream& operator<<(ostream& os, const Account& acct) {
    os << acct.number << ':' << acct.customer << ':' << acct.balance;
    return os;
}



