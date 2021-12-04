#pragma once
#include "entity.hpp"
#include "field.hpp"

class Stuff{
    int power;
    bool StopDrawing;
public:
    Stuff();
    void setPower(int a);
    int getPower();

    void setStopDrawing(bool a);
    bool getStopDrawing();
};