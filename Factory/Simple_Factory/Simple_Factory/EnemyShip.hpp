//
//  EnemyShip.hpp
//  Simple_Factory
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef EnemyShip_hpp
#define EnemyShip_hpp

#include <iostream>
using namespace std;

class EnemyShip{
    int damage;
    string name;
    
public:
    void setName(string name);
    string getName();
    
    void setDamage(int damage);
    int getDamage();
    virtual void printAttack();
};

#endif /* EnemyShip_hpp */
