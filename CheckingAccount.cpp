#include "CheckingAccount.hpp"
#include <string>
#include <utility>
using namespace std;

CheckingAccount::CheckingAccount(string number, Customer& customer, double balance) : Account(move(number), customer, balance) {}
