#include "Account.hpp"
#include "Customer.hpp"
#include <iostream>

using namespace std;
ostream& operator<<(ostream& os, const Account& acct) {
    os << acct.number << ':' << acct.customer << ':' << acct.balance;
    return os;
}

