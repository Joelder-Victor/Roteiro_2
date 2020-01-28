#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Consultant.h"

int main()
{
    Employee e1 = Employee("Joelder", "5555555", 5000);
    Consultant c1 = Consultant("Victor", "8888888", 5000);

    cout << fixed << setprecision(2);

    cout << e1.toString() << endl;

    e1.setSalary(10000);

    cout << e1.toString() << endl;

    cout << c1.toString() << endl;

    c1.getSalary(0.2);

    cout << c1.toString() << endl;
}