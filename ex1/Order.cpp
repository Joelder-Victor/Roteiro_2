#include"Order.h"
#include <sstream>
int Order:: orderNow = 1;
using namespace std;
Order::Order(){
    number=orderNow;
    orderNow++;
}
Order::Order(std::string description, int quantity, double price):Order(){
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
void Order::setPrice(double price){
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
double Order::getPrice(){
    return price;
}
std::string Order::toString(){
    stringstream ssNumber;
    ssNumber << number;
    stringstream ssQuantity;
    ssQuantity << quantity;
    stringstream ssPrice;
    ssPrice << price;
    return "Number: " +ssNumber.str() + ", Description: " + description + ", Quantity: "
    + ssQuantity.str() + ", Price: " + ssPrice.str();
}