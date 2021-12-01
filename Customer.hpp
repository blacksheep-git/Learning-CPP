#ifndef LW_CUSTOMER_HPP
#define LW_CUSTOMER_HPP

#include <string>
using namespace std;

class Customer {
    public:
        std::string name;
        Customer(std::string name);
        friend ostream& operator<<(ostream& os, const Customer& cust);
};
#endif //LW_CUSTOMER_HPP
