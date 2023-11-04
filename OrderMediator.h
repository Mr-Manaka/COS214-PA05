#ifndef OrderMediator_H
#define OrderMediator_H
#include "Table.h"
class Plate;
class DrinkTray;
class OrderMediator
{
    public:
        virtual void notifyOrderPlaced(Order* o) = 0;
        virtual void notifyPlateReady(Plate* p) = 0;
        virtual void notifyDrinksReady(DrinkTray* d) = 0;
        virtual void addWaiter(Waiter* Waiter) = 0;

};
#endif