//
//  EnemyShipsType.hpp
//  Simple_Factory
//
//  Created by Shivam Garg on 13/01/22.
//
#ifndef EnemyShipsType_hpp
#define EnemyShipsType_hpp

#include <iostream>
using namespace std;
#include "EnemyShip.hpp"

class UFOEnemyShip: public EnemyShip{
public:
    UFOEnemyShip(string name, int damage);
};

class RocketEnemyShip: public EnemyShip{
public:
    int weight;
    RocketEnemyShip(string name, int damage);
};

#endif /* EnemyShipsType_hpp */
