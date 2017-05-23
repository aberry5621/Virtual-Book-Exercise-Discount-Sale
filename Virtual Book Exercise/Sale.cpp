//
//  Sale.cpp
//  Virtual Book Exercise
//
//  Created by ax on 4/6/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include "Sale.hpp"
#include <iostream>

// implement Sale class
Sale::Sale() {
    // empty contstructor
}

Sale::Sale(double thePrice) {
    if (thePrice >= 0) {
        price = thePrice;
    } else {
        std::cout << "Error: Cannot have a negative price, yo!\n";
        exit(1);
    }
}

double Sale::getPrice() const {
    return price;
}

void Sale::setPrice(double newPrice) {
    if (newPrice >= 0) {
        price = newPrice;
    } else {
        std::cout << "Error: Cannot have a negative price, yo!\n";
        exit(1);
    }
}

// virtual function
double Sale::bill() const {
    return price;
}

double Sale::savings(const Sale& other) const {
    return (bill() - other.bill());
}

// overload comparison operator
bool operator < (const Sale& first, const Sale& second) {
    return (first.bill() < second.bill());
}
