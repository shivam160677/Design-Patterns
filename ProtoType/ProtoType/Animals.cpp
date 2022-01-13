//
//  Animals.cpp
//  ProtoType
//
//  Created by Shivam Garg on 13/01/22.
//

#include "Animals.hpp"

IAnimal *Dog::makeClone(){
    return new Dog(*this);
}

void Dog::animalType(){
    cout<<"I am type dog"<<endl;
}

IAnimal *Cat::makeClone(){
    return new Cat(*this);
}

void Cat::animalType(){
    cout<<"I am type cat"<<endl;
}
