#ifndef LW_CUSTOMER_HPP
#define LW_CUSTOMER_HPP

#include <string>
#include <utility>
using namespace std;

class Customer {
    public:
        string name;
        Customer();
        explicit Customer(string name){ this->name=std::move(name);};
        friend ostream& operator<<(ostream& os, const Customer& cust);
};
#endif //LW_CUSTOMER_HPP
