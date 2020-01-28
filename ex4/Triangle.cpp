#include "Triangle.h"

Triangle::Triangle(string name, float base, float height) : GeometricFigure(name, base, height)
{
    this->base = base;
    this->height = height;
}
