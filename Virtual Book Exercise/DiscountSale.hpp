//
//  DiscountSale.hpp
//  Virtual Book Exercise
//
//  Created by ax on 4/6/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#ifndef DiscountSale_hpp
#define DiscountSale_hpp

#include "Sale.hpp"

class DiscountSale : public Sale {
public:
    DiscountSale();
    DiscountSale(double thePrice, double theDiscount);
    // discount expressed as percentage of price
    double getDiscount() const;
    void setDiscount (double newDiscount);
    // virtually virtual (inherited)
    virtual double bill() const;
private:
    double discount;
};

#endif /* DiscountSale_hpp */
