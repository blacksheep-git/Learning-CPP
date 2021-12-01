#include "SavingAccount.hpp"

using namespace std;

void SavingAccount::accrue(double rate) {
    interest+=balance*rate;
    balance+=balance*rate;
}

