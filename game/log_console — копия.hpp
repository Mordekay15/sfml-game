#pragma once
#include "log.hpp"
#define CLOGGER Log_Console::getLog_Console()

class Log_Console: public Logger{
    std::string LogMessage;
    static Log_Console* pThis;
public:
    Log_Console();
    ~Log_Console();
    static Log_Console* getLog_Console();
    friend std::ostream& operator<<(std::ostream &out, Log_Console &log);
};
