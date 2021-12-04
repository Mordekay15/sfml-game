#include "output.hpp"

LogOutput::LogOutput() {
    std::cout << "Where do u wanna save logs?\n" << "0 --- FILE\n" << "1 --- CONSOLE\n" << "2 --- BOTH\n";
    std::cin >> input;
    switch (input) {
        case FILE:
            vec_logger.push_back(new Log_File());
            break;
        case CONSOLE:
            vec_logger.push_back(new Log_Console());
            break;
        case BOTH:
            vec_logger.push_back(new Log_File());
            vec_logger.push_back(new Log_Console());
            break;
    }
}

void LogOutput::LookingForPlayer(Player &p) {
  if(p.getLife())
      print("player      --- x: " + std::to_string(p.getX()) + "  y: " + std::to_string(p.getY()) + "  health: " + std::to_string(p.getHealth()));
  else
      print("player      --- dead");
}
void LogOutput::LookingForBEnemy(BlackEnemy &blackEnemy){
    if(blackEnemy.getLife())
        print("black enemy --- x: " + std::to_string(blackEnemy.getX()) + "  y: " + std::to_string(blackEnemy.getY()) + "  health: " + std::to_string(blackEnemy.getHealth()));
    else
        print("black enemy --- dead");
}

void LogOutput::LookingForREnemy(RedEnemy &redEnemy) {
    if(redEnemy.getLife())
        print("red enemy   --- x: " + std::to_string(redEnemy.getX()) + "  y: " + std::to_string(redEnemy.getY()) + "  health: " + std::to_string(redEnemy.getHealth()));
    else
        print("red enemy   --- dead");
}

void LogOutput::LookingForPEnemy(PinkEnemy &pinkEnemy){
    if(pinkEnemy.getLife())
        print("pink enemy  --- x: " + std::to_string(pinkEnemy.getX()) + "  y: " + std::to_string(pinkEnemy.getY()) + "  health: " + std::to_string(pinkEnemy.getHealth()));
    else
        print("pink enemy  --- dead");
}

void LogOutput::LookingForHeart(Heart &heart) {
    if(heart.getStopDrawing())
        print("heart       --- taken");
    else
        print("heart       --- on the field");
}

void LogOutput::LookingForCoin(Coin &coin){
    if(coin.getStopDrawing())
        print("coin        --- taken");
    else
        print("coin        --- on the field");
}

void LogOutput::LookingForFlower(Flower &flower){
    if(flower.getStopDrawing())
        print("flower      --- taken");
    else
        print("flower      --- on the field");
}



void LogOutput::print(std::string log) {
    std::vector<Logger *>::iterator tmp = vec_logger.begin();

    for(;tmp != vec_logger.end(); ++tmp) {
        std::string log_name = typeid(*tmp).name();
//        while (*log_name){
//            if(*log_name < 65) ++log_name;
//            else
//                break;
//        }
        if (log_name.find("Log_File")) {
            FLOGGER->Log(log);
        }

        if (log_name.find("Log_Console")) {
            std::cout << log << "\n";
        }
//        std::cout << log_name << std::endl;
    }
}
