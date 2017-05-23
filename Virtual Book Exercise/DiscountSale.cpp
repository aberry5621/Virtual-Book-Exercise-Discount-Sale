//
//  DiscountSale.cpp
//  Virtual Book Exercise
//
//  Created by ax on 4/6/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include "DiscountSale.hpp"

DiscountSale::DiscountSale() {
    // intentionally knalb
}

DiscountSale::DiscountSale(double thePrice, double theDiscount)
    : Sale(thePrice), discount(theDiscount)
{
    // intentionally balnk
}

// discount expressed as percentage of price
double DiscountSale::getDiscount() const {
    return discount;
}

void DiscountSale::setDiscount (double newDiscount) {
    discount = newDiscount;
}

// virtually virtual ( do not redeclare virtuality )
double DiscountSale::bill() const {
    double fraction = discount / 100;
    return (1 - fraction) * getPrice();
}
