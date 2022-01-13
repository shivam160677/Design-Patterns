//
//  IAnimal.hpp
//  ProtoType
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef IAnimal_hpp
#define IAnimal_hpp

#include <stdio.h>

class IAnimal{
public:
    virtual IAnimal *makeClone()=0;
};

#endif /* IAnimal_hpp */
