#include"Order.h"
Order::Order(){
  
}
Order::Order(int number,std::string description, int quantity, float price){
    setNumber(number);
    setDescription(description);
    setQuantity(quantity);
    setPrice(price);
}

void Order::setNumber(int number){
    this-> number = number;
}
void Order::setDescription(std::string description){
    this-> description = description;
}
void Order::setQuantity(int quantity){
    this-> quantity = quantity;
}
void Order::setPrice(float price){
    this-> price = price;
}
int Order::getNumber(){
    return number;
}
std::string Order::getDescription(){
    return description;
}
int Order::getQuantity(){
    return quantity;
}
int Order::getPrice(){
    return price;
}