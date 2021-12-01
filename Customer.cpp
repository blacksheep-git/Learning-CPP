#include <string>
#include "Customer.hpp"
using namespace std;

inline ostream& operator<<(ostream& os, const Customer& customer) {
    os << customer.name;
    return os;
}
