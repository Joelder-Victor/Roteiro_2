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
    float salary;
    float weeklyPayment;

public:
    Employee(string name, float salary = 0.0);

    void setName(string name);
    string getName();

    float getSalary();

    string toString();
};
