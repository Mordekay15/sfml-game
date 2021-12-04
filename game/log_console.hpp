#pragma once
#include "log.hpp"

class Log_Console: public Logger{
    std::string LogMessage;
public:
    Log_Console();
    ~Log_Console();
    friend std::ostream& operator<<(std::ostream &out, Log_Console &log);
    void setMessage(std::string sMessage);
};
