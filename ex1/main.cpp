#include <iostream>
#include "Order.h"
#include "RestaurantTable.h"

using namespace std;

int main(void){
    
    Order o1 = Order(1,"Juice",5,5.3);
    Order o2 = Order(2,"Juice",2,5.3);
    cout<<o1.getQuantity()<<endl;

    RestaurantTable  t1 = RestaurantTable(1,o1);

    t1.addOrder(o2);

    cout<<t1.getOrder().getQuantity()<<endl;


}