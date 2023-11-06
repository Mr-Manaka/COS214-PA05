#ifndef VALLETHANDLER_H
#define VALLETHANDLER_H

#include "CustomerHandler.h"
#include "ValetFactoryImpl.h"
#include <iostream>
class ValletHandler: public CustomerHandler
{
private:
    /* data */
public:
    ValletHandler(/* args */);
    void valletRequest(Customer* customer);
    void handleRequest(Customer* customer);
    virtual ~ValletHandler();
};
#endif