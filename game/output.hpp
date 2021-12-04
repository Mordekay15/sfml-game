#pragma once
#include "log.hpp"
#include "log_file.hpp"
#include "log_console.hpp"
#include "player.hpp"
#include "draw_BEnemy.hpp"
#include "draw_PEnemy.hpp"
#include "draw_REnemy.hpp"

#include "draw_heart.hpp"
#include "draw_coin.hpp"
#include "draw_flower.hpp"
#include <vector>
#include <typeinfo>

class LogOutput{
public:
    LogOutput();
    enum Choice {FILE, CONSOLE, BOTH};
    void print(std::string log);
    void LookingForPlayer(Player &p);
    void LookingForBEnemy(BlackEnemy &blackEnemy);
    void LookingForREnemy(RedEnemy &redEnemy);
    void LookingForPEnemy(PinkEnemy &pinkEnemy);
    void LookingForFlower(Flower &flower);
    void LookingForHeart(Heart &heart);
    void LookingForCoin(Coin &coin);

private:
    std::vector<Logger*> vec_logger;
    Choice choice;
    int input;
};