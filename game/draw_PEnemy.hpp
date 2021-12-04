#pragma once
#include "entity_draw.hpp"
#include "pink_enemy.hpp"
#include <SFML/Graphics.hpp>

class DrawPinkEnemy: public DrawEntity{
public:
    DrawPinkEnemy();
    virtual void updatePinkEnemy(PinkEnemy &pinkEnemy, float time, Field &field);
    sf::FloatRect getRect(PinkEnemy &pinkEnemy);
//    void DrawOnTheScreen(sf::RenderWindow &window);
    void drawSprite(sf::RenderWindow &w, PinkEnemy &pinkEnemy);
};
