#pragma once
#include "GeometricFigure.h"

class Square : public GeometricFigure
{
private:
    float side;

public:
    Square(string name, float side);
};
