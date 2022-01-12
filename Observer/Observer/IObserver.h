//
//  IObserver.h
//  Observer
//
//  Created by Shivam Garg on 12/01/22.
//

#ifndef IObserver_h
#define IObserver_h

class IObserver{
public:
    virtual void update(double ibmPrice, double adbPrice, double msftPrice)=0;
};

#endif /* IObserver_h */
