//
//  Mozarella.cpp
//  Decorator
//
//  Created by Shivam Garg on 13/01/22.
//

#include "Mozarella.hpp"

Mozarella::Mozarella(IPizza *ptr): PizzaDecorator(ptr){}

double Mozarella::getCost(){
    return 0.5 + pizza->getCost();
}

string Mozarella::getDescription(){
    return "Mozarella, " + pizza->getDescription();
}
