#include "SalariedWorker.h"

SalariedWorker::SalariedWorker(string name, float salary)
    : Employee(name, salary)
{
}
float SalariedWorker::calculateWeeklyPayment()
{
    weeklyPayment = salary / 4;
    return weeklyPayment;
}
