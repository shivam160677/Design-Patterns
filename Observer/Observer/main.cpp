//
//  main.cpp
//  Observer
//
//  Created by Shivam Garg on 09/01/22.
//

#include <iostream>
#include "Subject.hpp"
#include "Observer.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    //Subject object
    StockGrabber *sub=new StockGrabber();
    ISubject *ptr=sub;
    
    //Create Observer and register with Subject
    StockObserver *obs1= new StockObserver(sub);
    StockObserver *obs2=new StockObserver(sub);
    
    //These functions will call observer to update their stock price
    sub->setIBMPrice(50);
    sub->setMSFTPrice(100);
    sub->setADBPrice(150);
    return 0;
}
