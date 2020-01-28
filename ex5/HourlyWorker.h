#pragma once

#include "Employee.h"

class HourlyWorker : public Employee
{

private:
    float hourValue;

public:
    HourlyWorker(string name, float salary, float hourValue);

    float calculateWeeklyPayment(int weekHours);
};
