#pragma once
#include "entity.hpp"

class Character: public Entity{
    float  dx, dy, speed;
    int health;
    int damage;
    bool life;
public:
    Character(float x, float y, float w, float h);
    float getDx();
    float getDy();
    float getSpeed();
    int getHealth();
    int getDamage();
    bool getLife();

    void setDx(float a);
    void setDy(float a);
    void setSpeed(float a);
    void setHealth(int a);
    void setDamage(int a);
    void setLife(bool a);
};
