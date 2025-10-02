#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
using namespace std;

class Student {
private:
    string* name;
    int* age;

public:
    // Constructor & Destructor
    Student();
    ~Student();

    // Setters
    void setName(string s);
    void setAge(int i);

    // Getters
    string getName() const;
    int getAge() const;
};

#endif
