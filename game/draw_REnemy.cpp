#include "draw_REnemy.hpp"
#include "red_enemy.hpp"
#include <iostream>

DrawRedEnemy::DrawRedEnemy(): DrawEntity() {}

void DrawRedEnemy::updateRedEnemy(RedEnemy &redEnemy, float time, Field &field){
    SetEnemySprite();
    sprite.setTextureRect(sf::IntRect(100, 0, redEnemy.getW(), redEnemy.getH()));
    sprite.setOrigin(redEnemy.getW()/ 2, redEnemy.getH() / 2);
    redEnemy.update(time, field);
    sprite.setPosition(redEnemy.getX() + redEnemy.getW() / 2, redEnemy.getY()+ redEnemy.getH() / 2);
}

sf::FloatRect DrawRedEnemy::getRect(RedEnemy &redEnemy) {
    return sf::FloatRect(redEnemy.getX(), redEnemy.getY(), redEnemy.getW(), redEnemy.getH());
}

void DrawRedEnemy::drawSprite(sf::RenderWindow &w, RedEnemy &redEnemy) {
    if(redEnemy.getLife()) w.draw(sprite);
}
