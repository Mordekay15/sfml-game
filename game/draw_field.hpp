#pragma once
#include <iostream>
#include "field.hpp"
#include <SFML/Graphics.hpp>

class DrawField{
    sf::Image image;
    sf::Texture texture;
    sf::Sprite sprite;
public:
    DrawField();
    void drawingField(Field &field, sf::RenderWindow &w);
//    void drawSprite(sf::RenderWindow &w, Field &field);
};
