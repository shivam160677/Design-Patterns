//
//  PizzaDecorator.hpp
//  Decorator
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef PizzaDecorator_hpp
#define PizzaDecorator_hpp

#include <stdio.h>
#include "IPizza.h"

class PizzaDecorator: public IPizza{
protected:
    IPizza *pizza;
public:
    PizzaDecorator(IPizza *ptr);
    virtual double getCost();
    virtual string getDescription();
};

#endif /* PizzaDecorator_hpp */
