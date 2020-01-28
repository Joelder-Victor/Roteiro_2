#include "HourlyWorker.h"

HourlyWorker::HourlyWorker(string name, float salary, float hourValue)
    : Employee(name)
{
    this->salary=0.0;
    this->hourValue = hourValue;
}
float HourlyWorker::calculateWeeklyPayment(int weekHours)
{

    if (weekHours > 40)
        this->weeklyPayment = ((40 * hourValue) + ((weekHours - 40) * (hourValue * 1.5)));
    else
        this->weeklyPayment = weekHours * hourValue;

    this->salary = weeklyPayment * 4;

    return weeklyPayment;
}