#pragma once
#include "entity.hpp"
#include "field.hpp"
#include "character.hpp"
#include <SFML/Graphics.hpp>

class Player: public Character{
public:
    enum Dir {LEFT, RIGHT, UP, DOWN};
    Player(float x, float y, float w, float h);
    void update(float time, Field &field);
    void interactionWithMap(Field &field);

    bool getOnTheHeart();
    bool getOnTheCoin();
    bool getOnTheFlower();
    bool getOnTheExit();
    void setOnTheHeart(bool a);
    void setOnTheCoin(bool a);
    void setOnTheFlower(bool a);
    int getCoin();
    void setCoin(int a);
    void setDir(enum Dir dir);
    enum Dir getDir();

private:
    int coin;
    bool onTheHeart, onTheCoin, onTheFlower, onTheExit;
    Dir dir;
//    sf::FloatRect getRect();
};
