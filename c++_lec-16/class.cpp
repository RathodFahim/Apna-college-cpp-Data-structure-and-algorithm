#include <iostream>
using namespace std;

class Student {
public:
    string name;
    float cgpa;

   
    void getPercentage() {
        cout << "Percentage is: " << cgpa * 10 << "%" << endl;
    }
};

int main() {
    Student s1; // Creating an object of the Student class
    // cout << sizeof(s1) << endl; // Output the size of the object
    s1.name = "John Doe"; 
    s1.cgpa = 8.5; 
    s1.getPercentage(); 
    cout << "Name: " << s1.name << endl; 
    cout << "CGPA: " << s1.cgpa << endl; 
    return 0; 
}