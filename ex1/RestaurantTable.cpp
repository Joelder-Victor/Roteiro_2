#include "Order.h"
#include "RestaurantTable.h"
#include <sstream>

using namespace std;

RestaurantTable::RestaurantTable(){
    index=0;
}
void RestaurantTable::addOrder(Order order){
    for ( int i=0;i<MAX;i++)
    {
        if (this->order[i].getDescription() == order.getDescription()){
                this->order[i].setQuantity((this->order[i].getQuantity()+order.getQuantity()));
                return;
        }
    }
    this->order[index]=order;
    index++;
}
void RestaurantTable::clearOrders(){
    for (int i = 0; i < MAX; i++)
    {
       order[i].setQuantity(0);
    }
    
}
double RestaurantTable::calculateTotal(){
    double total = 0;
    for (int i = 0; i < MAX; i++)
    {
        total += order[i].getQuantity()*order[i].getPrice();
    }
    return total;
}
std::string RestaurantTable::toString(){
    std::string output;
    stringstream total;
    for (int i = 0; i < index; i++)
    {
        output += order[i].toString() + "\n";
    }
    total << calculateTotal();
    output += "Total: " + total.str();

    return output;
}