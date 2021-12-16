#include "log_file.hpp"


Log_File* Log_File::pThis = NULL;
std::ofstream Log_File::LogFStream;

Log_File::Log_File() {}

Log_File& Log_File::operator<<(const std::string& sMessage){
    setMessage(sMessage);
    LogFStream << getMessage() << "\n";
    return *this;
}

Log_File* Log_File::getLog_File(){
    if (pThis == NULL){
        pThis = new Log_File();
        LogFStream.open("Log.txt", std::ios::out | std::ios::app);
    }
    return pThis;
}

void Log_File::Log(std::string mes) {
    setMessage(mes);
    LogFStream << getMessage() << "\n";
}



