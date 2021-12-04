#pragma once

#include "field.hpp"

class Cell{
public:
	Cell();
    enum Status {WALK, WALL,ENTER, EXIT, HEART, COIN, FLOWER};

    void setStatus(enum Status status);
    enum Status getStatus();
private:
    Status status;
};
