#include "log_file.hpp"

//std::string Log_File::fileName = "Log.txt";
Log_File* Log_File::pThis = NULL;
std::ofstream Log_File::LogFStream;

//std::string Log_File::fileName = "log.txt";

Log_File::Log_File() {
//    LogFStream.open("Log.txt", std::ios::out | std::ios::app);

}

//std::ofstream Log_File::getStream(){
//    return LogFStream;
//}
//
//std::

Log_File& Log_File::operator<<(const std::string& sMessage){
    setMessage(sMessage);
//    LogFStream = out;
//    m_Logfile << "\n" << Util::CurrentDateTime() << ":\t";
//    Log(getMessage());
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

//void Log_File::setMessage(std::string sMessage)
//{
//    LogMessage = sMessage;
//}


