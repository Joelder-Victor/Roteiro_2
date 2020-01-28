
#include "Person.h"

Person::Person(string name)
{
    setName(name);
}
Person::Person(string name, Address address, string phone)
{
    setName(name);
    setAddress(address);
    setPhone(phone);
}

void Person::setName(string name)
{
    this->name = name;
}
string Person::getName()
{
    return name;
}

void Person::setAddress(Address address)
{
    this->address = address;
}
Address Person::getAddress()
{
    return address;
}

void Person::setPhone(string phone)
{
    this->phone = phone;
}
string Person::getPhone()
{
    return phone;
}
string Person::toString()
{
    ostringstream output;
    output<<"Name: "<<name<<"\nAddress\n"<<address.toString()
    <<"\nPhone: "<<phone;
    return output.str();
}