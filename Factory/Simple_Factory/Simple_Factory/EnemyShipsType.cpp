//
//  EnemyShipsType.cpp
//  Simple_Factory
//
//  Created by Shivam Garg on 13/01/22.
//

#include "EnemyShipsType.hpp"

UFOEnemyShip::UFOEnemyShip(string name, int damage){
    setName(name);
    setDamage(damage);
}

RocketEnemyShip::RocketEnemyShip(string name, int damage){
    setName(name);
    setDamage(damage);
}
