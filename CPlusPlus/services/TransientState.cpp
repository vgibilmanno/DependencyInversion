#ifndef TRANSIENTSTATE
#define TRANSIENTSTATE

#include <iostream>

class TransientState {
    int value;

    public:
        TransientState() {
            value = rand() % 100;
        };

        int GetValue() {
            return value;
        }
};

#endif