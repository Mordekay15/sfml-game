#pragma once
#include <SFML/Graphics.hpp>

class Entity {

    float x, y, w, h;
public:
    Entity(float x, float y, float w, float h);
    float getX();
    float getY();
    float getW();
    float getH();

    void setX(float a);
    void setY(float a);
    void setW(float a);
    void setH(float a);
};


