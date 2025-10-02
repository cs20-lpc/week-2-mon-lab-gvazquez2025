#include "student.hpp"
#include <iostream>
using namespace std;

// Default constructor
Student::Student() {
    name = new string("");
    age = new int(0);
    cout << "Student object created!" << endl;
}

// Destructor
Student::~Student() {
    delete name;
    delete age;
    cout << "Student object destroyed!" << endl;
}

// Setter for name
void Student::setName(string s) {
    *name = s;
}

// Setter for age
void Student::setAge(int i) {
    *age = i;
}

// Getter for name
string Student::getName() const {
    return *name;
}

// Getter for age
int Student::getAge() const {
    return *age;
}
