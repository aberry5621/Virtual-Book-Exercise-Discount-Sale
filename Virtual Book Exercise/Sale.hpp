//
//  Sale.hpp
//  Virtual Book Exercise
//
//  Created by ax on 4/6/17.
//  Copyright © 2017 COMP235. All rights reserved.
//

#ifndef Sale_hpp
#define Sale_hpp

class Sale {
public:
    Sale();
    Sale(double thePrice);
    double getPrice() const;
    void setPrice(double newPrice);
    virtual double bill() const;
    double savings(const Sale& other) const;
private:
    double price;
};

// overload comparison operator
bool operator < (const Sale& first, const Sale& second);



#endif /* Sale_hpp */
