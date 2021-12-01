#include <iostream>      // Library for I/O
#include <vector>
#include "Account.cpp"
#include "Customer.cpp"
#include "CheckingAccount.cpp"
#include "SavingAccount.cpp"
using namespace std;      // Use names from Standard library (e.g. cout)

class Bank {
    private:
        static vector<Account> accounts;
        int numAccounts = 0;
    public:
        void add(Account& newAccount) {
            accounts.push_back(newAccount);
            numAccounts++;
        }
        static void accrue(double rate) {
            for (Account& a : accounts) {
                a.accrue(rate);
            }
        }
        friend ostream& operator<<(ostream& os, const Bank& bank){
            for (Account& a : Bank::accounts) {
                os << a;
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
    Bank::accrue(0.02);
    cout << newBank << endl;
    return 0;
}