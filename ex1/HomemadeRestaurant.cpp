#include "HomemadeRestaurant.h"

HomemadeRestaurant::HomemadeRestaurant(){

}
void HomemadeRestaurant::addToOrder(Order order,int numberTable){
    tables[numberTable].addOrder(order);
}
double HomemadeRestaurant::billing(){
    double total = 0;
    for (int i = 0; i < MAX; i++)
    {
        total += tables[i].calculateTotal();
    }
    return total;
}
std::string HomemadeRestaurant::toString(){
    std::string output;
    for (int i = 0; i < MAX; i++)
    {
        if(tables[i].calculateTotal()>0)
            output += tables[i].toString() +"\n";
    }
    return output;
    
}