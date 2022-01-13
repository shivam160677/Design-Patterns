//
//  main.cpp
//  Decorator
//
//  Created by Shivam Garg on 13/01/22.
//

#include <iostream>
#include "PlainPizza.hpp"
#include "TomatoSauce.hpp"
#include "Mozarella.hpp"

int main(int argc, const char * argv[]) {
    
    //PlainPizza wrapped with TomatoSauce and Mozarella
    IPizza *ptr=new PlainPizza();
    ptr= new TomatoSauce(ptr);
    ptr= new Mozarella(ptr);
    cout<<ptr->getDescription()<<endl;
    cout<<ptr->getCost()<<endl;
    return 0;
}
