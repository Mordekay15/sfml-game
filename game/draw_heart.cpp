#include "draw_heart.hpp"
#include <iostream>
DrawHeart::DrawHeart():DrawEntity() {}

void DrawHeart::SetHeartSprite(Heart &heart, Field &field) {
    SetStuffSprite();
    sprite.setTextureRect(sf::IntRect(0, 0, getW(), getH()));
    sprite.setPosition(10.f + field.getHeartY() * getW(), 10.f + field.getHeartX() * getH());
}

void DrawHeart::drawSprite(sf::RenderWindow &w, Heart &heart){
    if(!heart.getStopDrawing())
        w.draw(sprite);
}