#pragma once
#include <iostream>
using std::ostream;
using std::istream;

#include <sstream>
using std::ostringstream;

#include <string>
using std::string;

class Address
{
    
private:
    string street;
    int number;
    string neighborhood;
    string city;
    string estate;
    string zipCode;
public:
    Address();
    Address(string street, int number, string neighborhood,
        string city, string estate, string zipCode);

    void setStreet(string street);
    string getStreet();

    void setNumber(int number);
    int getNumber();

    void setNeighborhood(string neighborhood);
    string getNeighborhood();

    void setCity(string city);
    string getCity();

    void setEstate(string estate);
    string getEstate();

    void setZipCode(string zipCode);
    string getZipCode();

    string toString();
    
};

