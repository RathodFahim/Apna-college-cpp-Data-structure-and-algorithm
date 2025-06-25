#include <iostream>
using namespace std;

class Student {

    string name;
    float cgpa;

public:
      void getPercentage() {
        cout << "Percentage is: " << cgpa * 10 << "%" << endl;
    }

    //Setters
    void setName(string n) {
        name = n;
    }
    void setCgpa(float c) {
        cgpa = c;
    }
    //Getters
    string getName() {
        return name;
    }
    float getCgpa() {
        return cgpa;
    }
};

int main() {
    Student s1; // Creating an object of the Student class
    s1.setName("John Doe");
    s1.setCgpa(8.5);
    s1.getPercentage(); // Call the method to get percentage
    cout << "Name: " << s1.getName() << endl; // Use getter to access name
    cout << "CGPA: " << s1.getCgpa() << endl; // Use getter to access CGPA
    return 0; 
}