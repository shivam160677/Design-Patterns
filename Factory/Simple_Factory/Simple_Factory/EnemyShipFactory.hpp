//
//  EnemyShipFactory.hpp
//  Simple_Factory
//
//  Created by Shivam Garg on 13/01/22.
//
#ifndef EnemyShipFactory_hpp
#define EnemyShipFactory_hpp

#include <stdio.h>
#include "EnemyShipsType.hpp"

class EnemyShipFactory{
public:
    EnemyShip *makeEnemyShip(char type);
};

#endif /* EnemyShipFactory_hpp */
