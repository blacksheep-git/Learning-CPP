#include <string>
#include "Customer.hpp"
using namespace std;

Customer::Customer(string name) {
        this->name=name;
};

ostream& operator<<(ostream& os, const Customer& cust){
    os << cust.name;
    return os;
}