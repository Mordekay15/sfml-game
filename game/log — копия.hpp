#pragma once
#include <fstream>
#include <iostream>
#include <cstdarg>
#include <string>
#include <sstream>

class Logger{
    std::string Message;
protected:

    Logger(const Logger&){};
    Logger& operator=(Logger&){ return *this; };
public:
    Logger();
    virtual ~Logger() = default;
    void setMessage(std::string sMessage);
    std::string getMessage();
};
