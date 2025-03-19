//
// Created by Asmita Tamang on 3/18/25.
//
#ifndef VALIDATECUSTOMER_H
#define VALIDATECUSTOMER_H

#include <iostream>


struct address {
    std::string street;
    std::string city;
    int zipcode;
};
struct customer {
    int id;
    std::string name;
    std::string email;
    address addy;
};

customer validateCustomer();



#endif //VALIDATECUSTOMER_H

