//
//  Robot.cpp
//  Builder
//
//  Created by Shivam Garg on 13/01/22.
//

#include "Robot.hpp"

void Robot::setRobotHead(string head){
    this->head=head;
}

void Robot::setRobotLegs(string legs){
    this->legs=legs;
}

void Robot::setRobotTorso(string torso){
    this->torso=torso;
}

string Robot::getRobotHead(){
    return head;
}

string Robot::getRobotLegs(){
    return legs;
}

string Robot::getRobotTorso(){
    return torso;
}
