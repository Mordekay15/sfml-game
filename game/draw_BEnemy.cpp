#include "draw_BEnemy.hpp"
#include "black_enemy.hpp"
#include "pink_enemy.hpp"
#include "red_enemy.hpp"
#include <iostream>

DrawBlackEnemy::DrawBlackEnemy(): DrawEntity(){}

void DrawBlackEnemy::updateBlackEnemy(BlackEnemy &blackEnemy, float time, Field &field){
    SetEnemySprite();
    sprite.setTextureRect(sf::IntRect(100, 202, blackEnemy.getW(), blackEnemy.getH()));
    blackEnemy.update(time, field);
    sprite.setPosition(blackEnemy.getX(), blackEnemy.getY());
}

void DrawBlackEnemy::drawSprite(sf::RenderWindow &w, BlackEnemy &blackEnemy){
    if(blackEnemy.getLife())
        w.draw(sprite);
}

sf::FloatRect DrawBlackEnemy::getRect(BlackEnemy &blackEnemy) {
    return sf::FloatRect(blackEnemy.getX(), blackEnemy.getY(), blackEnemy.getW(), blackEnemy.getH());
}
