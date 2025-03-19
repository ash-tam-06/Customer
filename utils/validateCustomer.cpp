#include "validateCustomer.h"
#include <iostream>
using namespace std;

struct address;
struct customer;

customer validateCustomer() {
    int id;
    string name;
    string email;
    address addy;
    cout << "Please enter an ID number: ";
    while (true) {
        if (!(cin >> id)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter an ID number: ";
        } else {
            break;
        }
    }
    while (true) {
        cout << "Please enter the customer name: ";
        getline(cin, name);
        if (!(name.empty())) {
            break;
        }
    }

    while (true) {
        cout << "Please enter the customer email: ";
        getline(cin, email);
        if (!(email.empty())) {
            break;
        }
    }

    while (true) {
        cout << "Please enter the street: ";
        getline(cin, addy.street);
        if (!(addy.street.empty())) {
            break;
        }
    }

    while (true) {
        cout << "Please enter the city: ";
        getline(cin, addy.city);
        if (!(addy.city.empty())) {
            break;
        }
    }

    cout << "Please enter the zipcode: ";
    while (true) {
        if (!(cin >> addy.zipcode)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter the zipcode: ";
        } else {
            break;
        }
    }
    customer customer{id, name, email, addy};
    return customer;
}
