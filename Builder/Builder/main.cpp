//
//  main.cpp
//  Builder
//
//  Created by Shivam Garg on 13/01/22.
//

#include <iostream>
#include "RobotEngineer.hpp"
#include "RobotBuilder1.hpp"

int main(int argc, const char * argv[]) {
    RobotBuilder1 *bob=new RobotBuilder1();
    RobotEngineer *eng= new RobotEngineer(bob);
    eng->makeRobot();
    Robot frank=bob->getRobot();
    cout<<"Robot legs are of type "<<frank.getRobotLegs()<<endl;
    delete bob;
    delete eng;
    return 0;
}
