//
//  CloneFactory.cpp
//  ProtoType
//
//  Created by Shivam Garg on 13/01/22.
//

#include "CloneFactory.hpp"

IAnimal *CloneFactory::createClone(IAnimal *animal){
    return animal->makeClone();
}
