#pragma once
#include <string>
class Order
{
private:
    static int orderNow;
    int number;
    std::string description;
    int quantity;
    double price;
public:
    Order();
    Order(std::string description, int quantity, double price);

    void setNumber(int number);
    void setDescription(std::string description);
    void setQuantity(int quantity);
    void setPrice(double price);

    int getNumber();
    std::string getDescription();
    int getQuantity();
    double getPrice();

    std::string toString();
};
