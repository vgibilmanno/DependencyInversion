#ifndef LOGGER
#define LOGGER

#include <string>
#include <iostream>

class Logger  {
    public:
        Logger() {
        };

    void LogInfo(std::string msg) {
        std::cout << msg + "\n";
    }
};

#endif