#include "log_console.hpp"

Log_Console* Log_Console::pThis = NULL;

Log_Console::Log_Console() {}
Log_Console::~Log_Console() {}

Log_Console* Log_Console::getLog_Console(){
    if (pThis == NULL){
        pThis = new Log_Console();
    }
    return pThis;
}


std::ostream& operator<<(std::ostream &out, Log_Console &log){
    out << log.LogMessage;
    return out;
}
