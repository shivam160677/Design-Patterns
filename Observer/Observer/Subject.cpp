//
//  Subject.cpp
//  Observer
//
//  Created by Shivam Garg on 09/01/22.
//

#include "Subject.hpp"

void StockGrabber::registerObserver(IObserver *ptr){
    observersList.push_back(ptr);
}

void StockGrabber::unregisterObserver(IObserver *ptr){
    for(int i=0;i<observersList.size();i++)
    {
        if(observersList[i]==ptr)
        {
            observersList.erase(observersList.begin()+i);
            break;
        }
    }
}

void StockGrabber::notifyObservers(){
    for(int i=0;i<observersList.size();i++){
        observersList[i]->update(ibmPrice, adbPrice, msftPrice);
    }
}

void StockGrabber::setIBMPrice(double val){
    ibmPrice=val;
    notifyObservers();
}

void StockGrabber::setADBPrice(double val){
    adbPrice=val;
    notifyObservers();
}

void StockGrabber::setMSFTPrice(double val){
    msftPrice=val;
    notifyObservers();
}
