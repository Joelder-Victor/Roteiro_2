#pragma once
#include <iostream>
using std::ostream;

#include <sstream>
using std::ostringstream;

#include <string>
using std::string;

class Employee
{
protected:
    string name;
    string registration;
    float salary;

public:
    Employee(string name, string refistration, float salary);

    void setName(string name);
    string getName();

    void setRegitration(string registration);
    string getRegistration();

    void setSalary(float salary);
    float getSalary();

    string toString();
};
