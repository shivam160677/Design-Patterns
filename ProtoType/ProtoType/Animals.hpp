//
//  Animals.hpp
//  ProtoType
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef Animals_hpp
#define Animals_hpp

#include <iostream>
using namespace std;
#include "IAnimal.hpp"

class Dog: public IAnimal{
public:
    //Does deep copy instead of shallow copy
    IAnimal *makeClone();
    void animalType();
};

class Cat: public IAnimal{
public:
    IAnimal *makeClone();
    void animalType();
};

#endif /* Animals_hpp */
