//
//  main.cpp
//  ProtoType
//
//  Created by Shivam Garg on 13/01/22.
//

#include <iostream>
#include "Animals.hpp"
#include "CloneFactory.hpp"

int main(int argc, const char * argv[]) {
    CloneFactory *factory=new CloneFactory();
    Dog *animal=new Dog();
    IAnimal *clonedAnimal=factory->createClone(animal);
    ((Dog *)clonedAnimal)->animalType();
    return 0;
}
