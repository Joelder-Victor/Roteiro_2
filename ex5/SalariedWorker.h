#pragma once

#include "Employee.h"

class SalariedWorker : public Employee
{
public:
    SalariedWorker(string name, float salary);
    float calculateWeeklyPayment();
};
