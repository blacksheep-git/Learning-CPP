#include <string>
#include "Customer.hpp"
using namespace std;


ostream& operator<<(ostream& os, const Customer& cust){
    os << cust.name;
    return os;
}