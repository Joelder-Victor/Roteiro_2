#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "HourlyWorker.h"
#include "SalariedWorker.h"

int main()
{
    cout<<fixed<<setprecision(2);

    HourlyWorker w1 = HourlyWorker("Joelder",50.0,80.0);
    SalariedWorker w2 = SalariedWorker("Victor",8000);

    w1.calculateWeeklyPayment(50);
    cout<<w1.toString()<<endl;

    w2.calculateWeeklyPayment();
    cout<<w2.toString()<<endl;

}