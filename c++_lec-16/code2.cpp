// Destructor in OOPs in c++.
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string color;
    int *mileage;

    // Constructor
    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int; // Dynamic Allocation
        *mileage = 12;
    }

    // Copy Constructor
    Car(Car &original) {
        cout << "copying original to new..\n";
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }

    // Destructor
    ~Car() {
        cout << "deleting object..\n";
        if (mileage != NULL) {
            delete mileage;
            mileage = NULL;
        }
    }
};

int main() {
    Car c1("maruti 800", "white");
    cout << c1.name << endl;
    cout << c1.color << endl;
    cout << *c1.mileage << endl;

    return 0;
}
