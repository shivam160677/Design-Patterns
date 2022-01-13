//
//  RobotBuilder1.hpp
//  Builder
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef RobotBuilder1_hpp
#define RobotBuilder1_hpp

#include <stdio.h>
#include "IBuilder.h"
#include "Robot.hpp"

class RobotBuilder1: public IBuilder{
    Robot xyz;
public:
    void buildRobotHead();
    void buildRobotTorso();
    void buildRobotLegs();
    Robot getRobot();
};

#endif /* RobotBuilder1_hpp */
