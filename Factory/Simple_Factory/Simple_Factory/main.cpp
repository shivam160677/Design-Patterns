//
//  main.cpp
//  Simple_Factory
//
//  Created by Shivam Garg on 13/01/22.
//

#include <iostream>
using namespace std;
#include "EnemyShipFactory.hpp"

int main(int argc, const char * argv[]) {
    EnemyShipFactory factory;
    char type;
    cout<<"Enter type of ship"<<endl;
    cin>>type;
    EnemyShip *ptr=factory.makeEnemyShip(type);
    ptr->printAttack();
    return 0;
}
