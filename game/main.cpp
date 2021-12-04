//#include <iostream>

#include "field.hpp"
#include "cell.hpp"
#include "interface.hpp"
#include "get_array.hpp"
#include <SFML/Graphics.hpp>
#include "output.hpp"

//#include <string>
//#include "l,og.hpp"
#include "log_console.hpp"
#include "log_file.hpp"

int main()
{
    GetArray array;
    Field Field(array);
    MapDraw drawing;

    drawing.mapDraw(Field);


//    Logger log;
//    Log_Console console;
//    std::string message1 = "ppppppp";
//    console.setMessage(message1);
//    std::cout << console << std::endl;
//    std::cout << "LOL1\n";
//
//    Log_File file;
//    LogOutput output(file, console);
//    file.setMessage(message1);
//    FLOGGER->Log(file.getMessage());
//    Log_File::getLog_File() -> Log(message1);
//    FLOGGER -> Log("Log");

//    std::string message2 = "logg message 2 ...";
//    int nNum = 20;
//    int y = 90;
//
//    logger.Log(message1);
//    logger.Log("X: " + std::to_string(nNum) + "   Y: " + std::to_string(y));
//    std::cout << logger << "\n";
//    std::cout << logger << "\n";
//    CLogger::GetLogger()->Log("message to be logged");
//    CLogger::GetLogger()->Log(message1);
//    LOGGER->Log("Message is:%s Number is:%d", message2.c_str(), nNum);
//    LOGGER ->Log("X: " + std::to_string(nNum) + "   Y: " + std::to_string(y)+ "\n");
	return 0;
}
