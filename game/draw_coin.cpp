#include "draw_coin.hpp"
#include <iostream>

DrawCoin::DrawCoin():DrawEntity() {}

void DrawCoin::SetCoinSprite(Coin &coin, Field &field) {
    SetStuffSprite();
    sprite.setTextureRect(sf::IntRect(100, 0, getW(), getH()));
    sprite.setPosition(10.f + field.getCoinY() * getW(), 10.f + field.getCoinX() * getH());
}

void DrawCoin::drawSprite(sf::RenderWindow &w, Coin &coin){
    if(!coin.getStopDrawing())
        w.draw(sprite);
}
