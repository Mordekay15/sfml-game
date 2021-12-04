#pragma once

#include "field.hpp"
#include <SFML/Graphics.hpp>

class Field;

class MapDraw{//: public sf::Drawable, public sf::Transformable{
public:
    void mapDraw(Field &field);
    //void Map();
    //virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    //void heartDraw(Field &field);
};
