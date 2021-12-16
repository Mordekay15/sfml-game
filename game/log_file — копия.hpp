#pragma once
#include "log.hpp"
#define FLOGGER Log_File::getLog_File()

class Log_File: public Logger{
    static Log_File* pThis;
    static std::ofstream LogFStream;
public:
    Log_File();
    static Log_File* getLog_File();
    Log_File& operator << (const std::string& sMessage);
    void Log(std::string mes);
    std::ofstream getStream();
    void setStream(std::ofstream a);

};


