#ifndef MEAL_H
#define MEAL_H

#include <string>

using namespace std;

class Meal {
    public:
        // Meal();
        virtual void create() = 0;
        bool operator==(Meal& other);
    protected:
        string name;
        bool garnish;
        bool sauce;
        
};
#endif