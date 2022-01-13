//
//  PizzaDecorator.cpp
//  Decorator
//
//  Created by Shivam Garg on 13/01/22.
//

#include "PizzaDecorator.hpp"

PizzaDecorator::PizzaDecorator(IPizza *ptr): pizza(ptr){}

double PizzaDecorator::getCost(){
    return pizza->getCost();
}

string PizzaDecorator::getDescription(){
    return pizza->getDescription();
}
