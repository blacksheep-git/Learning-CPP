#include <string>
#include "Customer.hpp"
using namespace std;

ostream &operator<<(ostream &os, const Customer &customer) {
    os << customer.name;
    return os;
}
