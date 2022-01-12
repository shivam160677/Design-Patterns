//
//  Observer.cpp
//  Observer
//
//  Created by Shivam Garg on 09/01/22.
//

#include "Observer.hpp"

int StockObserver::count=0;

StockObserver::StockObserver(ISubject *ptr): sub1(ptr){
    observerID=count++;
    sub1->registerObserver(this);
}

void StockObserver::update(double ibmPrice, double adbPrice, double msftPrice){
    this->adbPrice=adbPrice;
    this->ibmPrice=ibmPrice;
    this->msftPrice=msftPrice;
    cout<<"Observer: "<<observerID<<endl;
    cout<<"Share prices:"<<endl;
    cout<<"Adobe price: "<<this->adbPrice<<endl;
    cout<<"MSFT price: "<<this->msftPrice<<endl;
    cout<<"IBM price: "<<this->ibmPrice<<endl;
    cout<<endl;
}
