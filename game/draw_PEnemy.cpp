#include "draw_PEnemy.hpp"
#include "pink_enemy.hpp"
#include <iostream>

DrawPinkEnemy::DrawPinkEnemy(): DrawEntity() {}

void DrawPinkEnemy::updatePinkEnemy(PinkEnemy &pinkEnemy, float time, Field &field){
    SetEnemySprite();
    sprite.setTextureRect(sf::IntRect(100, 100, pinkEnemy.getW(), pinkEnemy.getH()));
    sprite.setOrigin(pinkEnemy.getW() / 2, pinkEnemy.getH() / 2);
    pinkEnemy.update(time, field);
    sprite.setPosition(pinkEnemy.getX()+ pinkEnemy.getW() / 2, pinkEnemy.getY()+ pinkEnemy.getH() / 2);
}


sf::FloatRect DrawPinkEnemy::getRect(PinkEnemy &pinkEnemy){
    return sf::FloatRect(pinkEnemy.getX(), pinkEnemy.getY(), pinkEnemy.getW(), pinkEnemy.getH());
}

void DrawPinkEnemy::drawSprite(sf::RenderWindow &w, PinkEnemy &pinkEnemy) {
    if(pinkEnemy.getLife()) w.draw(sprite);
}

//void DrawPinkEnemy::DrawOnTheScreen(sf::RenderWindow &window){
//    window.draw(sprite);
//}
