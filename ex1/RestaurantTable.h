#pragma once
#include "Order.h"
#define MAX 100
class RestaurantTable
{
private:
    Order order[MAX];
    int index;
public:
    RestaurantTable();
    void addOrder(Order order);
    void clearOrders();
    double calculateTotal();

    std::string toString();
};
