#pragma once
#include "stuff.hpp"
#include "player.hpp"

class Coin: public Stuff{
public:
    Coin();
    void CoinIterationWithPlayer(Player &p, Field &f);
};