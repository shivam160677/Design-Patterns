#ProtoType Pattern

This pattern lets you copy(deep copy) existing objects without making your code dependent on their classes.

We have an interface class containing clone function which is implemented by all of its subclasses. 

In the example added here, IAnimal is the prototype class with clone functions override by its derived classes Cat and Dog

