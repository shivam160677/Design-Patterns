//
//  EnemyShip.cpp
//  Simple_Factory
//
//  Created by Shivam Garg on 13/01/22.
//

#include "EnemyShip.hpp"

void EnemyShip::setName(string name){
    this->name=name;
}

void EnemyShip::setDamage(int damage){
    this->damage=damage;
}

string EnemyShip::getName(){
    return name;
}

int EnemyShip::getDamage(){
    return damage;
}

void EnemyShip::printAttack(){
    cout<<getName()<<" has attack power of "<<getDamage()<<endl;
}
