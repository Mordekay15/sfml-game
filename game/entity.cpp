#include "entity.hpp"

Entity::Entity(float X, float Y, float W, float H){
    x = X;
    y = Y;
    w = W;
    h = H;
}

float Entity::getX() {
    return x;
}

float Entity::getY() {
    return y;
}

float Entity::getW() {
    return w;
}

float Entity::getH() {
    return h;
}

void Entity::setX(float a) {
    x = a;
}

void Entity::setY(float a) {
    y = a;
}

void Entity::setW(float a) {
    w = a;
}

void Entity::setH(float a) {
    h = a;
}
