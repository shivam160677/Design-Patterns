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
    virtual void registerObserver(IObserver *ptr)=0;
    virtual void unregisterObserver(IObserver *ptr)=0;
    virtual void notifyObservers()=0;
};

#endif /* ISubject_h */
