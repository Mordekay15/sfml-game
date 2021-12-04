#pragma once
#include "stuff.hpp"
#include "player.hpp"

class Flower: public Stuff{
public:
    Flower();
    void FlowerInteractionWithPlayer(Player &p, Field &f);
};