#pragma once

#include "cell.hpp"
#include "interface.hpp"
#include "get_array.hpp"

class Cell;
class GetArray;

class Field{
    Cell **x;
    int height, width;
    int heartX, heartY, coinX, coinY, flowerX, flowerY;
public:
    Field(GetArray &array);
    ~Field();
    Field(const Field& other);
    Field(Field&& other);
    Field& operator=(const Field& other);
    Field& operator=(Field&& other);
    Cell** getFieldArray();
    void RandomSetStuffOnTheField();
    int getWidth();
    int getHeight();
    int getFlowerX();
    int getFlowerY();
    int getCoinX();
    int getCoinY();
    int getHeartX();
    int getHeartY();

    void setHeartX(int a);
    void setHeartY(int a);
};
