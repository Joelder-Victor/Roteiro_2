#include "Employee.h"

Employee::Employee(string name, string refistration, float salary)
{
    setName(name);
    setRegitration(registration);
    setSalary(salary);
}

void Employee::setName(string name)
{
    this->name = name;
}
string Employee::getName()
{
    return name;
}

void Employee::setRegitration(string registration)
{
    this->registration = registration;
}
string Employee::getRegistration()
{
    return registration;
}

void Employee::setSalary(float salary)
{
    this->salary = salary;
}
float Employee::getSalary()
{
    return salary;
}
string Employee::toString()
{
    ostringstream output;

    output << "Name: " << getName() << "\nRegistration: " << getRegistration() 
    << "\nSalary: " << getSalary();

    return output.str();
}