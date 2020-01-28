#pragma once

#include "Employee.h"

class Consultant : public Employee
{
public:
    Consultant(string name, string registration, float salary);

    float getSalary();
    float getSalary(float percentage);

    string toString();
};