#ifndef VEGETABLECHEF_H
#define VEGETABLECHEF_H

#include <string>

#include "Chef.h"

#include "StarterMeal.h"
#include "MainMeal.h"
#include "GreenSalad.h"
#include "StirFry.h"

using namespace std;

class VegetableChef : public Chef {
    public:
        Meal* createStarter();
        Meal* createMain();
        void addMeal(Meal* meal);
        virtual void receiveOrder(std::string meal,int tableNumber,int custID,int numOfItems);
};
#endif