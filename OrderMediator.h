#ifndef OrderMediator_H
#define OrderMediator_H
#include "Table.h"
class OrderMediator
{
    public:
        virtual void notifyOrderPlaced(Order* o) = 0;

};
#endif