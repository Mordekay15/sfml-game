#pragma once
//#ifndef CUSTOM_CLogger_H
//#define CUSTOM_CLogger_H
#include <fstream>
#include <iostream>
#include <cstdarg>
#include <string>
#include <sstream>
//#include "utilities.hpp"

class Logger{
    std::string Message;
protected:

    Logger(const Logger&){};
    Logger& operator=(Logger&){ return *this; };
public:
    Logger();
    ~Logger();
//    virtual std::string gottenMessage() const = 0;
    void setMessage(std::string sMessage);
    std::string getMessage();
};
//#endif
