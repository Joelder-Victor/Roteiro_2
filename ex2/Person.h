#pragma once

#include "Address.h"

class Person
{
    
private:
    string name;
    Address address;
    string phone;

public:
    Person(string name);
    Person(string name,Address address,string phone);

    void setName(string name);
    string getName();

    void setAddress(Address address);
    Address getAddress();

    void setPhone(string phone);
    string getPhone();

    string toString();
};

