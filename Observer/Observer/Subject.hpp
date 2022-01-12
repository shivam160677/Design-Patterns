//
//  Subject.hpp
//  Observer
//
//  Created by Shivam Garg on 09/01/22.
//
#pragma once
#ifndef Subject_hpp
#define Subject_hpp

#include <iostream>
#include "IObserver.h"
#include "ISubject.h"
#include <vector>
using namespace std;

class StockGrabber: public ISubject{
    vector<IObserver *>observersList;
    double ibmPrice, adbPrice, msftPrice;
public:
    void registerObserver(IObserver *ptr);
    void unregisterObserver(IObserver *ptr);
    void notifyObservers();
    void setIBMPrice(double val);
    void setADBPrice(double val);
    void setMSFTPrice(double val);
};

#endif /* Subject_hpp */
