#Builder Pattern

This pattern lets you construct complex objects step by step. The pattern allows you to produce different types and representations of an object using the same construction code.

It includes three classes:
1. Director(Boss): Class object which contain instructions for making product with the help of appropriate builder. It includes a variable of type Builder.
2. Builder: Class which knows each instruction step of making a product. It includes a variable of type Product.
3. Product: Product produced by builder.

In the example added here, We have three classes:
RobotBuilder1: Builder 1 which knows about each step of making robot.
RobotEngineer: Director who knows the order of instruction for making Robot with the help of builder.
Robot: product class. 

