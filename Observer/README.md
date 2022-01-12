#Observer Pattern

This pattern lets you define a subscription mechanism to notify multiple objects about any events that happen to the object they’re observing.

It includes two classes:
1. Subject: Class object which has some interesting state which observers wants to follow. It includes registerObserver, unregisterObserver and notify functions and list of observers.
2. Observer: class objects which wants to track changes to the Subject's state.

In the example added here, We have two classes: 
Subject- StockGrabber which has stock values
Observer- StockObserver which is following stockgrabber stocks.
