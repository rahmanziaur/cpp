#include <iostream>
#include <string>
using namespace std;

// 1. Define the class (the blueprint)
class Car {
public:
    // Attributes (data members)
    string brand;
    string model;
    int year;

    // Method (member function)
    void displayInfo() {
        cout << year << " " << brand << " " << model << endl;
    }
};

int main() {
    // 2. Create objects (instances of the Car class)
    Car car1;
    Car car2;

    // 3. Assign values to car1's attributes using the dot (.) operator
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2022;

    // Assign values to car2's attributes
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 2024;

    // 4. Call methods on each object
    car1.displayInfo(); // Output: 2022 Toyota Corolla
    car2.displayInfo(); // Output: 2024 Ford Mustang

    return 0;
}

### Output:

<img width="1024" height="768" alt="image" src="https://github.com/user-attachments/assets/2cb87aa8-420a-4241-8819-5f50cb36ce08" />

