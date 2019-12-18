#pragma once
#include "RestaurantTable.h"
class HomemadeRestaurant
{
private:
    RestaurantTable tables[MAX];
public:
    HomemadeRestaurant();
    void addToOrder(Order order,int numberTable);
    double billing();
    std::string toString();
};

