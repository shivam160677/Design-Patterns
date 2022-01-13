//
//  IPizza.h
//  Decorator
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef IPizza_h
#define IPizza_h

#include <iostream>
using namespace std;

class IPizza{
public:
    virtual double getCost()=0;
    virtual string getDescription()=0;
};

#endif /* IPizza_h */
