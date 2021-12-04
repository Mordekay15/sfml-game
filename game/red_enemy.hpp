#pragma once
#include "entity.hpp"
#include "field.hpp"
#include "character.hpp"

class  RedEnemy:public Character{
public:
//    int damage;
    RedEnemy(float x, float y, int w, int h);
    void checkCollisionWithMap(float dx, float dy, Field &field);
    void update(float time, Field &field);
};