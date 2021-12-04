#include "draw_flower.hpp"

DrawFlower::DrawFlower():DrawEntity(){}

void DrawFlower::SetFlowerSprite(Flower &flower, Field &field) {
    SetStuffSprite();
    sprite.setTextureRect(sf::IntRect(200, 0, getW(), getH()));
    sprite.setPosition(10.f + field.getFlowerY() * getW(), 10.f + field.getFlowerX() * getH());

}

void DrawFlower::drawSprite(sf::RenderWindow &w, Flower &flower){
    if(!flower.getStopDrawing())
        w.draw(sprite);
}
