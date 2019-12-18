#include <iostream>
#include "Order.h"
#include "RestaurantTable.h"
#include "HomemadeRestaurant.h"
using namespace std;

int main(void){
    
    Order o1 = Order("Juice",5,5.3);
    Order o2 = Order("Juice",2,5.3);
    Order o3 = Order("Cake",7,5.5);

    HomemadeRestaurant r1;

    r1.addToOrder(o1,1);
    r1.addToOrder(o2,1);
    r1.addToOrder(o3,1);   

    r1.addToOrder(o1,2);
    r1.addToOrder(o3,2);

    cout<< r1.toString()<<endl;

}