//
//  Mozarella.hpp
//  Decorator
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef Mozarella_hpp
#define Mozarella_hpp

#include <stdio.h>
#include "PizzaDecorator.hpp"

class Mozarella: public PizzaDecorator{
public:
    Mozarella(IPizza *ptr);
    string getDescription();
    double getCost();
};

#endif /* Mozarella_hpp */
