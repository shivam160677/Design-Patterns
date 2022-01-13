//
//  TomatoSauce.hpp
//  Decorator
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef TomatoSauce_hpp
#define TomatoSauce_hpp

#include <stdio.h>
#include "PizzaDecorator.hpp"

class TomatoSauce: public PizzaDecorator{
public:
    TomatoSauce(IPizza *ptr);
    string getDescription();
    double getCost();
};

#endif /* TomatoSauce_hpp */
