#include <iostream>
#include <fstream>

#include "field.hpp"
#include "cell.hpp"
#include "get_array.hpp"
#include "interface.hpp"

Field::Field(GetArray &array) {
    width = array.getWidth();
    height = array.getHeight();

    x = new Cell *[height];
    for (int i = 0; i < height; i++) x[i] = new Cell[width];

    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++) {
            x[i][j].setStatus(static_cast<Cell::Status>(array.getArr()[i][j]));

        }
}


Field::~Field() {
    for (int i = 0; i < height; i++) delete[] x[i];
    delete []x;
}

//конструктор и опрератор копирования
Field::Field(const Field& other){
    width = other.width;
    height = other.height;

    x = new Cell*[height];
    for(int i = 0; i < height; i++)
        x[i] = new Cell[width];

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            x[i][j] = other.x[i][j];
        }
    }
}

Field& Field::operator=(const Field& other){
    if(this != &other){
        for(int i = 0; i < width; i++){
            delete[] x[i];
        }
        delete[] x;

        x = new Cell*[other.height];
        for(int  i = 0; i < other.height; i++){
            x[i] = new Cell[other.width];
        }
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                x[i][j] = other.x[i][j];
            }
        }
    }
    return *this;
}

//конструтор и оператор перемещения
Field::Field(Field&& other){
    std::swap(width, other.width);
    std::swap(height, other.height);
    std::swap(x, other.x);
}

Field& Field::operator=(Field&& other){
    if(this != &other){
        std::swap(width, other.width);
        std::swap(height, other.height);
        std::swap(x, other.x);
    }
    return *this;
}

Cell** Field::getFieldArray(){
    return x;
}

int Field::getWidth() {
    return width;
}

int Field::getHeight() {
    return height;
}

void Field::RandomSetStuffOnTheField() {
    int randomX;//случайный элемент по горизонтали
    int randomY;//случ эл-т по вертикали
    srand(time(0));//рандом
    int count = 6;//количество камней

    while (count > 3){
        randomX = 1 + rand() % (10 - 1);//рандомное по иксу от 1 до ширина карты-1, чтобы не получать числа бордюра карты
        randomY = 1 + rand() % (10 - 1);//по игреку так же

        if (x[randomX][randomY].getStatus() == Cell::WALK) {
            if(count == 4) {
                x[randomX][randomY].setStatus(Cell::HEART);
                setHeartX(randomX);
                setHeartY(randomY);
            }
            if(count == 5){
                x[randomX][randomY].setStatus(Cell::COIN);
                coinX = randomX;
                coinY = randomY;
            }

            if(count == 6) {
                x[randomX][randomY].setStatus(Cell::FLOWER);
                flowerX = randomX;
                flowerY = randomY;
            }
            count--;
        }
    }
}

void Field::setHeartX(int a){
    heartX = a;
}
void Field::setHeartY(int a){
    heartY = a;
}

int Field::getFlowerX(){
    return flowerX;
}
int Field::getFlowerY(){
    return flowerY;
}

int Field::getCoinX(){
    return coinX;
}
int Field::getCoinY(){
    return coinY;
}

int Field::getHeartX(){
//    std::cout << heartX << " ";
    return heartX;
}
int Field::getHeartY(){
//    std::cout << heartY << std::endl;
    return heartY;
}