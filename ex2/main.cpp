#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"

int main()
{
    Address a1 = Address("Rua dos Escoteiros", 60, "Mangabeira", "João Pessoa",
                         "Paraiba", "58028-000");
    Person p1 = Person("Joelder", a1, "985282650");

    Address a2 = Address("Rua Quimico", 58,"Pilão","Serra Branca","Paraiba","58000-000");
    Person p2 = Person("Victor",a2,"988582525");

    cout<<p1.toString()<<endl;
    a1.setStreet("Rua nova");
    p1.setAddress(a1);

    cout<<p2.toString()<<endl;
    cout<<p1.toString()<<endl;

}