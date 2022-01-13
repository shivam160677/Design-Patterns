//
//  CloneFactory.hpp
//  ProtoType
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef CloneFactory_hpp
#define CloneFactory_hpp

#include <stdio.h>
#include "IAnimal.hpp"

class CloneFactory{
public:
    IAnimal *createClone(IAnimal *animal);
};

#endif /* CloneFactory_hpp */
