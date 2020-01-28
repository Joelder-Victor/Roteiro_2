#include "Consultant.h"

Consultant::Consultant(string name, string registration, float salary)
    : Employee(name, registration, salary)
{
}

float Consultant::getSalary()
{
    return salary += (salary * 0.1);
}

float Consultant::getSalary(float percentage)
{
    return salary += (salary * percentage);
}

string Consultant::toString()
{
    ostringstream output;
    output << "Consultant\nName: " << getName() << "\nRegistration: "
    << getRegistration() << "\nSalary: " << getSalary();

    return output.str();
}