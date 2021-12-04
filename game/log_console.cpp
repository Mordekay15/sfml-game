#include "log_console.hpp"

Log_Console::Log_Console() {}


Log_Console::~Log_Console() {
//    Logger* log = new Log_Console();
//    delete log;
}

std::ostream& operator<<(std::ostream &out, Log_Console &log){
//    out << "\n" << Util::CurrentDateTime() << ":\t";
    out << log.LogMessage;

    return out;
}

void Log_Console::setMessage(std::string sMessage)
{
    LogMessage = sMessage;
}
