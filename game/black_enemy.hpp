#pragma once
#include "character.hpp"
#include "field.hpp"

class BlackEnemy:public Character{
public:
    BlackEnemy(float x, float y, int w, int h);
    void checkCollisionWithMap(float dx, float dy, Field &field);
    void update(float time, Field &field);
};
