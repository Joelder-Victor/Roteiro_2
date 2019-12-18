#pragma once
#include "Order.h"
#define MAX 100
class RestaurantTable
{
private:
    Order order[MAX];
    int numberTable;
public:
    RestaurantTable(int numberTable, Order order);
    void addOrder(Order order);
    void clearOrders();
    void calculateTotal();
    void setNumberTable(int numberTable);
    void setOrder(Order order);
    int getNumberTable();
    Order getOrder();
    
};
