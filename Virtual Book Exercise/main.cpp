//
//  main.cpp
//  Virtual Book Exercise
//
//  Created by ax on 4/6/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#include "Sale.hpp"
#include "DiscountSale.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::ios;



int main() {
    // insert code here...
    std::cout << "Welcome to Discount Automotive!\n";
    
    Sale simple(10.00); // sold one item at $10
    DiscountSale discount(11.00, 10); // discount sale item $11 with 10% discount
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    if (discount < simple) {
        cout << "Discounted item is less expensive\n";
        cout << "Savings is $" << simple.savings(discount) << endl;
    } else {
        cout << "Discounted item is not cheeper\n";
        return 0;
    }
    
    
    return 0;
}
