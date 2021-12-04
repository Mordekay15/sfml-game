#include "log.hpp"

Logger::Logger() {}

Logger::~Logger() {}

void Logger::setMessage(std::string sMessage) {
    Message = sMessage;
}
//
std::string Logger::getMessage(){
    return Message;
}
