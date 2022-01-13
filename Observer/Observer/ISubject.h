//
//  ISubject.h
//  Observer
//
//  Created by Shivam Garg on 12/01/22.
//

#ifndef ISubject_h
#define ISubject_h

#include "IObserver.h"

class ISubject{
public: 
    virtual void registerObserver(IObserver *ptr){};
    virtual void unregisterObserver(IObserver *ptr){};
    virtual void notifyObservers(){};
};

#endif /* ISubject_h */
