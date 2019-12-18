#pragma once
#include <string>
class Order
{
private:
    int number;
    std::string description;
    int quantity;
    float price;
public:
    Order();
    Order(int number,std::string description, int quantity, float price);

    void setNumber(int number);
    void setDescription(std::string description);
    void setQuantity(int quantity);
    void setPrice(float price);

    int getNumber();
    std::string getDescription();
    int getQuantity();
    int getPrice();
};
