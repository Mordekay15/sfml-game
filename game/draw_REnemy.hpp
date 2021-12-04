#pragma once
#include "entity_draw.hpp"
#include "red_enemy.hpp"
#include <SFML/Graphics.hpp>

class DrawRedEnemy: public DrawEntity{
public:
    DrawRedEnemy();
    virtual void updateRedEnemy(RedEnemy &redEnemy, float time, Field &field);
    sf::FloatRect getRect(RedEnemy &redEnemy);
    void drawSprite(sf::RenderWindow &w, RedEnemy &redEnemy);
};
