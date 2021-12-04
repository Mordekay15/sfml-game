#pragma once
#include "stuff.hpp"
#include "player.hpp"

class Heart: public Stuff{
public:
    Heart();
    void HeartIterationWithPlayer(Player &p, Field &f);
//    sf::FloatRect getRect();
};
