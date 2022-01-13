//
//  RobotEngineer.cpp
//  Builder
//
//  Created by Shivam Garg on 13/01/22.
//

#include "RobotEngineer.hpp"

RobotEngineer::RobotEngineer(IBuilder *ptr): bob(ptr){};

void RobotEngineer::makeRobot(){
    bob->buildRobotHead();
    bob->buildRobotTorso();
    bob->buildRobotLegs();
}
