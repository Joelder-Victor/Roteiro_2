#include "Order.h"
#include "RestaurantTable.h"
#include <iostream>

using namespace std;

RestaurantTable::RestaurantTable(int numberTable,Order order){
    setNumberTable(numberTable);
    setOrder(order);
}
void RestaurantTable::addOrder(Order order){
    int aux;
    for ( Order o: this->order)
    {
        cout<<order.getQuantity()<<endl;
        cout<<o.getQuantity()<<endl;
        if (order.getDescription()==o.getDescription()){
           
                aux=(o.getQuantity()+order.getQuantity());
                o.setQuantity(aux);
        }
    }
  
}
void RestaurantTable::clearOrders(){
    
}
void RestaurantTable::calculateTotal(){

}
void RestaurantTable::setNumberTable(int numberTable){

}
void RestaurantTable::setOrder(Order order){


}
int RestaurantTable::getNumberTable(){

}
Order RestaurantTable::getOrder(){

}