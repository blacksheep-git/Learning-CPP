#include "Account.h"
#include "Customer.h"
#include <iostream>

using namespace std;
ostream& operator<<(ostream& os, const Account& acct) {
    os << acct.number << ':' << acct.customer << ':' << acct.balance;
    return os;
}

