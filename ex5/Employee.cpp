#include "Employee.h"

Employee::Employee(string name, float salary)
{
    setName(name);
    this->salary = salary;
}

void Employee::setName(string name)
{
    this->name = name;
}
string Employee::getName()
{
    return name;
}

float Employee::getSalary()
{
    return salary;
}

string Employee::toString()
{
    ostringstream output;

    output << "Name: " << getName() << "\nSalary: " << getSalary();

    return output.str();
}