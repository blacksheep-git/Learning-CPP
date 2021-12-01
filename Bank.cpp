#include <iostream>      // Library for I/O
#include <vector>
#include "Account.cpp"
#include "Customer.cpp"
#include "CheckingAccount.cpp"
#include "SavingAccount.cpp"
using namespace std;      // Use names from Standard library (e.g. cout)

static vector<Account> accounts;
class Bank {

    public:
        Bank() = default;;
        void add(Account& newAccount) {
            accounts.push_back(newAccount);
        }
        void accrue(double rate) {
            for (Account& a : accounts) {
                a.accrue(rate);
            }
        }
        inline friend ostream& operator<<(ostream& os, const Bank& bank){
            for (Account& a : accounts) {
                os << a << "\n";
            }
            return os;
        }
};


int main() {
    Bank newBank;
    Customer c("Ann");
    CheckingAccount cAcc("01001",c,100.00);
    SavingAccount sAcc("01002", c, 200.00);
    newBank.add(cAcc);
    newBank.add(sAcc);
    newBank.accrue(0.02);
    cout << newBank << endl;
    return 0;
}