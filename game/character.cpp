#include "character.hpp"

Character::Character(float X, float Y, float W, float H): Entity(X,Y, W,H) {
    dx=0; dy=0; speed=0; health = 0;
    damage = 0;
    life = true;
}

float Character::getDx() {
    return dx;
}
float Character::getDy() {
    return dy;
}
float Character::getSpeed() {
    return speed;
}

int Character::getDamage() {
    return damage;
}
int Character::getHealth() {
    return health;
}

bool Character::getLife() {
    return life;
}

void Character::setDx(float a) {
    dx = a;
}
void Character::setDy(float a) {
    dy = a;
}
void Character::setSpeed(float a) {
    speed = a;
}

void Character::setDamage(int a) {
    damage = a;
}
void Character::setHealth(int a) {
    health = a;
}

void Character::setLife(bool a) {
    life = a;
}