#ifndef ITEM_H
#define ITEM_H
#include <string>

class FoodItem
{
    private:
        double price;
        std::string name;
    public:
        FoodItem(double p,std::string n);
       
        std::string getItemName();
        
        double getPrice();

};
#endif