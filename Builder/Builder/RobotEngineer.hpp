//
//  RobotEngineer.hpp
//  Builder
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef RobotEngineer_hpp
#define RobotEngineer_hpp

#include <stdio.h>
#include "IBuilder.h"
#include "Robot.hpp"

//Director class
class RobotEngineer{
    IBuilder *bob;
public:
    RobotEngineer(IBuilder *ptr);
    //Instructions for making robot
    void makeRobot();
    Robot getRobot();
};

#endif /* RobotEngineer_hpp */
