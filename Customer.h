#ifndef LW_CUSTOMER_H
#define LW_CUSTOMER_H

#include <string>
using namespace std;

class Customer {
    public:
        std::string name;
        Customer(std::string name);
        friend ostream& operator<<(ostream& os, const Customer& cust);
};
#endif //LW_CUSTOMER_H
