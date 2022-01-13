//
//  PlainPizza.hpp
//  Decorator
//
//  Created by Shivam Garg on 13/01/22.
//

#ifndef PlainPizza_hpp
#define PlainPizza_hpp

#include "IPizza.h"

class PlainPizza: public IPizza{
public:
    double getCost();
    string getDescription();
};

#endif /* PlainPizza_hpp */
