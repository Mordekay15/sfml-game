#pragma once
#include "entity_draw.hpp"
#include "flower.hpp"
#include "field.hpp"
#include <SFML/Graphics.hpp>

class DrawFlower: public DrawEntity {
public:
    DrawFlower();
    void SetFlowerSprite(Flower &flower, Field &field);
    void drawSprite(sf::RenderWindow &w, Flower &flower);
};