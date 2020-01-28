#include "Address.h"

Address::Address()
{
}
Address::Address(string street, int number, string neighborhood,
                 string city, string estate, string zipCode)
{
    setStreet(street);
    setNumber(number);
    setNeighborhood(neighborhood);
    setCity(city);
    setEstate(estate);
    setZipCode(zipCode);
}

void Address::setStreet(string street)
{
    this->street = street;
}
string Address::getStreet()
{
    return street;
}

void Address::setNumber(int number)
{
    this->number = number;
}
int Address::getNumber()
{
    return number;
}

void Address::setNeighborhood(string neighborhood)
{
    this->neighborhood = neighborhood;
}
string Address::getNeighborhood()
{
    return neighborhood;
}

void Address::setCity(string city)
{
    this->city = city;
}
string Address::getCity()
{
    return city;
}

void Address::setEstate(string estate)
{
    this->estate = estate;
}
string Address::getEstate()
{
    return estate;
}

void Address::setZipCode(string zipCode)
{
    this->zipCode = zipCode;
}
string Address::getZipCode()
{
    return zipCode;
}
string Address::toString()
{
    ostringstream output;
    output<<"Street: " << street<< "\nNumber: "<<
           number<<"\nNeighborhood: "<<neighborhood<<
           "\nCity: "<<city<< "\nEstate: "<<estate<<
           "\nZipCode: "<<zipCode; 
    return output.str();
}
