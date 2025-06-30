// Constructor in OOPs
#include <iostream>
using namespace std;

class Student {
    string name;
    float cgpa;
public:
    // Constructor
    Student(string n, float c) {
        name = n;
        cgpa = c;
    }

    void getPercentage() {
        cout << "Percentage is: " << cgpa * 10 << "%" << endl;
    }

    // Getters
    string getName() {
        return name;
    }
    
    float getCgpa() {
        return cgpa;
    }
};

int main() {
    // Creating an object of the Student class using the constructor
    Student s1("John Doe", 8.5);
    
    // Call the method to get percentage
    s1.getPercentage();
    
    // Use getters to access name and CGPA
    cout << "Name: " << s1.getName() << endl;
    cout << "CGPA: " << s1.getCgpa() << endl;
    
    return 0;
}