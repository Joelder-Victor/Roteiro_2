#pragma once
#include "GeometricFigure.h"

class Circle : public GeometricFigure
{
private:
    float radius;

public:
    Circle(string name, float radius);
};
