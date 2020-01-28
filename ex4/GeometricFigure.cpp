#include "GeometricFigure.h"

GeometricFigure::GeometricFigure(string name, float mensuare1, float mensuare2)
{
    this->name = name;
    this->measure1 = mensuare1;
    this->measure2 = mensuare2;
}
float GeometricFigure::calculateArea()
{
    if (name == "Circle")
        return PI * measure1 * measure1;
    else if (name == "Square")
        return measure1 * measure1;
    else
        return (measure1 * measure2) / 2;
}
