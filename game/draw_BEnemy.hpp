#pragma once
#include "entity_draw.hpp"
#include "black_enemy.hpp"
#include <SFML/Graphics.hpp>

class DrawBlackEnemy: public DrawEntity{
public:
    DrawBlackEnemy();
    void updateBlackEnemy(BlackEnemy &blackEnemy, float time, Field &field);
    sf::FloatRect getRect(BlackEnemy &blackEnemy);
    void drawSprite(sf::RenderWindow &w, BlackEnemy &blackEnemy);
};
