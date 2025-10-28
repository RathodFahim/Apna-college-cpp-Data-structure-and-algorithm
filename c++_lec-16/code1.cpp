//Shallow and the Deep copy
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int; // Dynamic Allocation
        *mileage = 12;
    }

    Car(Car &original) {
        cout << "copying original to new..\n";
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }
};

int main() {
    Car c1("maruti 800", "white");

    Car c2(c1);
    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << *c2.mileage << endl;
    *c2.mileage = 10;

    cout << *c1.mileage << endl; // 12
    cout << *c2.mileage << endl; // 10

    return 0;
}
// This code demonstrates shallow vs deep copy concepts in C++ using a Car class

// Car class definition with string and pointer members
// - name: stores car name as string
// - color: stores car color as string 
// - mileage: pointer to int storing mileage value

// Constructor takes name and color parameters
// - Initializes name and color member variables
// - Dynamically allocates memory for mileage pointer
// - Sets initial mileage value to 12

// Copy constructor performs deep copy:
// - Takes reference to original Car object
// - Copies name and color values
// - Creates new memory allocation for mileage
// - Copies value pointed to by original mileage

// Main function demonstrates:
// 1. Creates c1 car object
// 2. Creates c2 as copy of c1 using copy constructor
// 3. Modifies c2's mileage to show objects are independent
// 4. Prints mileage of both cars to show deep copy worked:
//    - c1 mileage stays 12
//    - c2 mileage changes to 10