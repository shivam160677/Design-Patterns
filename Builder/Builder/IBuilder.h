//
//  IBuilder.h
//  Builder
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef IBuilder_h
#define IBuilder_h

class IBuilder{
public:
    virtual void buildRobotHead()=0;
    virtual void buildRobotTorso()=0;
    virtual void buildRobotLegs()=0;
};

#endif /* IBuilder_h */
