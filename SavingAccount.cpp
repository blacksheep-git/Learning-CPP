#include "SavingAccount.hpp"

inline void SavingAccount::accrue(double rate) {
    interest+=balance*rate;
    balance+=balance*rate;
}

