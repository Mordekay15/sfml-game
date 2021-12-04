#pragma once
#include "entity_draw.hpp"
#include "heart.hpp"
#include "field.hpp"
#include <SFML/Graphics.hpp>

class DrawHeart:public DrawEntity{
public:
    DrawHeart();
    void SetHeartSprite(Heart &heart, Field &field);
    void drawSprite(sf::RenderWindow &w, Heart &heart);
};