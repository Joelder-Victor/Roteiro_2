#pragma once
#define PI 3.14
#include <string>
using std::string;

class GeometricFigure 
{
protected:
    string name;
    float measure1;
    float measure2;
public:
    GeometricFigure(string name,float mesuare1, float = 0.0);
    float calculateArea();

};
