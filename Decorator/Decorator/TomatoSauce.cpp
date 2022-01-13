//
//  TomatoSauce.cpp
//  Decorator
//
//  Created by Shivam Garg on 13/01/22.
//

#include "TomatoSauce.hpp"

TomatoSauce::TomatoSauce(IPizza *ptr): PizzaDecorator(ptr){}

double TomatoSauce::getCost(){
    return 0.7 + pizza->getCost();
}

string TomatoSauce::getDescription(){
    return "TomatoSauce, " + pizza->getDescription();
}
