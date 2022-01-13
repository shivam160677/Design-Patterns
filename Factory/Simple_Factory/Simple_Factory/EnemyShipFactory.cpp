//
//  EnemyShipFactory.cpp
//  Simple_Factory
//
//  Created by Shivam Garg on 13/01/22.
//

#include "EnemyShipFactory.hpp"

EnemyShip *EnemyShipFactory::makeEnemyShip(char type){
    if(type=='R')
    {
        RocketEnemyShip *ptr=new RocketEnemyShip("Rocket", 10);
        return ptr;
    }
    else if(type=='U')
    {
        UFOEnemyShip *ptr= new UFOEnemyShip("UFO", 20);
        return ptr;
    }
    else
    {
        cout<<"Enter either R or U";
        return NULL;
    }
}
