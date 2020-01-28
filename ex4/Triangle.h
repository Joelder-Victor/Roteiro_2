#pragma once
#include "GeometricFigure.h"

class Triangle : public GeometricFigure
{
private:
    float base;
    float height;

public:
    Triangle(string name, float base, float height);
};
