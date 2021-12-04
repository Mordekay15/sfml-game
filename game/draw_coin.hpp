#pragma once
#include "entity_draw.hpp"
#include "coin.hpp"
#include "field.hpp"
#include <SFML/Graphics.hpp>

class DrawCoin:public DrawEntity {
public:
    DrawCoin();
    void SetCoinSprite(Coin &coin, Field &field);
    void drawSprite(sf::RenderWindow &w, Coin &coin);
};