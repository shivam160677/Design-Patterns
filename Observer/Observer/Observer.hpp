//
//  Observer.hpp
//  Observer
//
//  Created by Shivam Garg on 09/01/22.
//
#pragma once
#ifndef Observer_hpp
#define Observer_hpp

#include <iostream>
#include "IObserver.h"
#include "ISubject.h"

using namespace std;

class StockObserver: public IObserver{
    double adbPrice, msftPrice, ibmPrice;
    int observerID;
    ISubject *sub1;
public:
    StockObserver(ISubject *ptr);
    static int count;
    void update(double ibmPrice, double adbPrice, double msftPrice);
};

#endif /* Observer_hpp */
