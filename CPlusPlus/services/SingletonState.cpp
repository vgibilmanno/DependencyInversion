#ifndef SINGLETONSTATE
#define SINGLETONSTATE

#include <iostream>

class SingletonState {
    int value;

    public:
        SingletonState() {
            value = rand() % 100;
        };

        int GetValue() {
            return value;
        }
};

#endif