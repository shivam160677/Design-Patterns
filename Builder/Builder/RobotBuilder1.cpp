//
//  RobotBuilder1.cpp
//  Builder
//
//  Created by Shivam Garg on 13/01/22.
//

#include "RobotBuilder1.hpp"

void RobotBuilder1::buildRobotHead(){
    xyz.setRobotHead("Tin Head");
}

void RobotBuilder1::buildRobotLegs(){
    xyz.setRobotLegs("Tin Legs");
}

void RobotBuilder1::buildRobotTorso(){
    xyz.setRobotLegs("Tin Torso");
}

Robot RobotBuilder1::getRobot(){
    return xyz;
}
