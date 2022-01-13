//
//  Robot.hpp
//  Builder
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef Robot_hpp
#define Robot_hpp

//Product class
#include <iostream>
using namespace std;

class Robot{
    string head;
    string torso;
    string legs;
public:
    void setRobotHead(string head);
    void setRobotLegs(string legs);
    void setRobotTorso(string torso);
    
    string getRobotHead();
    string getRobotLegs();
    string getRobotTorso();
};

#endif /* Robot_hpp */
