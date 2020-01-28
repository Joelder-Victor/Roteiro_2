#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

int main()
{
    cout << fixed << setprecision(3);
    Circle c1 = Circle("Circle", 25.9);
    cout << c1.calculateArea() << endl;

    Square s1 = Square("Square", 5);
    cout << s1.calculateArea() << endl;

    Triangle t1 = Triangle("Triangle", 5, 10);
    cout << t1.calculateArea() << endl;
}