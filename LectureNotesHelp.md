C++ Object Oriented Programming
Being an object-oriented programming language, C++ uses objects to model real-world problems

Unlike procedural programming, where functions are written to perform operations on data, OOP involves creating objects that contain both data and functions.

An object has two characteristics: attributes and behavior. For example, a car can be an object. And, it has

attributes - brand, model, size, mileage, etc.
behavior - driving, acceleration, parking, etc.
C++ Class
A class is a blueprint for the object.

We can think of a class as the technical design (prototype) of a car. It contains all the details about the brand, model, mileage, etc. We can then build different cars based on these descriptions. Here, each distinct car is an object.

An example for this can be:

<img width="654" height="326" alt="image" src="https://github.com/user-attachments/assets/37ed03ba-26bb-43c3-b8e6-912a8480b2ba" />


A class named Car having data members and member functions
A class named Car
class Car {
  public:

    // class data
    string brand, model;
    int mileage = 0;

    // class function
    void drive(int distance) {
        mileage += distance;
    }
};
In the above code, we have used the class keyword to create a class named Car. Here,

brand and model are class attributes used to store data
drive() is a class function used to perform some operation
The public keyword represents an access modifier. To learn more, visit C++ Access Modifiers.

C++ Objects
An object is an instance of a class.

For example, the Car class defines the model, brand, and mileage. Now, based on the definition, we can create objects like

Car suv;
Car sedan;
Car van;
Here, suv, sedan, and van are objects of the Car class. Hence, the basic syntax for creating objects is:

Class_Name object_name;
Example 1: Class and Objects in C++
#include <iostream>
using namespace std;

class Car {
  public:

    // class data
    string brand, model;
    int mileage = 0;

    // class function to drive the car
    void drive(int distance) {
        mileage += distance;
    }
    
    // class function to print variables
    void show_data() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Distance driven: " << mileage << " miles" << endl;
    }
};

int main() {
    
    // create an object of Car class
    Car my_car;

    // initialize variables of my_car
    my_car.brand = "Honda";
    my_car.model = "Accord";
    my_car.drive(50);

    // display object variables
    my_car.show_data();

    return 0; 
}
Run Code
Output

Brand: Honda
Model: Accord
Distance driven: 50 miles
In this program, we have created a class Car with data members and a member function. Also, we have created an object my_car of the Car class.

Notice that we have used the dot operator . with the my_car object in order to access the class members.

my_car.brand = "Honda";
my_car.model = "Accord";
my_car.drive(50);

my_car.show_data();
To learn more, visit our C++ Classes and Objects tutorial.

Basic Principles of C++ Object-Oriented Programming
The foundational principles of C++ OOP are:

Encapsulation	Bundling of related data and functions together within a single entity.
Abstraction	Showing only the essential attributes of the class, while hiding the technical details from the user.
Inheritance	Using features from an existing class within a new class, without modifying the existing class.
Polymorphism	Ability of the same entity (function or operator) to behave differently in different scenarios.
Let's look at these principles in greater detail.

1. C++ Encapsulation
In C++, object-oriented programming allows us to bundle together data members (such as variables, arrays, etc.) and its related functions into a single entity. This programming feature is known as encapsulation.

<img width="520" height="554" alt="image" src="https://github.com/user-attachments/assets/016e268a-20fd-4e18-a49f-66a0bc713286" />

C++ Encapsulation
Encapsulation in C++
In Example 1, we bundled together the related variables brand, model and mileage with the function show_data() into a class named Car.

class Car {
  public:

    // class data
    string brand;
    string model;
    int mileage = 0;

    // class function
    void show_data() {
        // code
    }
};
Encapsulation ensures that only member functions of a class can access its data, which results in data hiding.

In C++, we hide data using the private and protected keywords. In contrast, using the public keyword for certain class members makes those members accessible to all other functions and classes.

To learn more, visit our C++ Encapsulation tutorial.

2. C++ Abstraction
In object-oriented programming, abstraction refers to the concept of showing only the necessary information to the user i.e. hiding the complex details of program implementation and execution.

For example, let us consider a slightly modified version of the Car class:

class Car {
  private:

    // class data
    int speed;

    // class function
    void show_car_status() {
        // code
    }
};
Suppose we want the show_car_status() function to show the status of the car based on the value of the speed variable.

We can implement such conditional statements using the if...else statement inside the show_car_status() function.

void show_car_status() {
    if (speed != 0)
        cout << "The car is being driven." << endl;
    else
        cout << "The car is stationary." << endl;
}
Here, we do not need to show the user all the codes we have written to determine if the car is stationary or not; we just need to show them whether the car is being driven or not depending on its speed.

In other words, we are only giving useful and relevant information to the user, while hiding all the unnecessary details.

This is data abstraction in OOP.

To learn more about abstraction, visit our C++ Abstraction tutorial.

Note: Abstraction is not the same as data hiding. Abstraction is showing only the relevant information, while data hiding is restricting access to data members (variables, arrays, structures, etc.) so that they cannot be accessed from outside the class.

3. C++ Inheritance
Inheritance in C++ allows us to create a new class (derived class) from an existing class (base class).

The derived class inherits features from the base class and can have additional features of its own.

To learn more, visit our C++ Inheritance tutorial.

Example 2: Use of Inheritance in C++
#include <iostream>
using namespace std;

// base class
class Vehicle {
  public:

    string brand;
    
    void show_brand() {
        cout << "Brand: " << brand << endl;
    }    
};

// derived class
class Car : public Vehicle {  
  public:
   
    string model;

    void show_model() {
        cout << "Model: " << model << endl;
    }
};

int main() {
    
    // create an object of Car class
    Car my_car;

    // initialize variables of my_car
    my_car.brand = "Honda";
    my_car.model = "Accord";

    // display variables of my_car
    my_car.show_brand();
    my_car.show_model();

    return 0;    
}
Run Code
Output

Brand: Honda
Model: Accord
Here,

Vehicle is the base class.
Car is the derived class.
The derived class inherits the features of the base class. We can see this from the brand variable and the show_brand() function, since the Car object my_car can access them.

In addition to the features of the base class, the derived class also has features of its own. The unique features of the Car class are:

model - a string variable
show_model() - a function that prints the model variable.
We can also see that the Vehicle class has not been modified by its derived class.

To learn more, visit our C++ Inheritance tutorial.

4. C++ Polymorphism
Polymorphism is the ability to use a common function (or operator) in multiple ways.

In C++, polymorphism is implemented with the help of function overloading, operator overloading, function overriding, and virtual functions.

Let's look at function overriding as an example.

#include <iostream>
using namespace std;

// base class
class Shape {
  public:

    // function of base class
    void shape_name() {
        cout << "Shape" << endl;
    }
};

// derived class
class Square : public Shape {
  public:

    // overriding function of derived class
    void shape_name() {
        cout << "Square" << endl;
    }
};

int main() {

    // create class objects
    Shape shape;
    Square square;

    // call function from Shape class
    shape.shape_name();

    // call function from Square class
    square.shape_name();

    return 0;
}
Run Code
Output

Shape
Square
Here,

Shape is the base class.
Square is the derived class.
Both these classes have a function called shape_name(). But the body of the shape_name() function are different in the two classes.

When the shape_name() function is called by the shape object, the code inside the function of the Shape class is executed.

Ref: https://www.programiz.com/cpp-programming/oop

However, when shape_name() is called by the square object, the code inside the body of Square class is executed.

Thus, we have used the same function shape_name() in two different ways using C++ polymorphism.

