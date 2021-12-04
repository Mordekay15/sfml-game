#include "player.hpp"
#include "field.hpp"
#include "interface.hpp"
#include "get_array.hpp"
#include <iostream>
#include "flower.hpp"

Player::Player(float X, float Y, float W, float H): Character(X, Y, W, H){
    setHealth(200);
    setX(X);
    setY(Y);
    setW(W);
    setH(H);
    coin = 0;
    setLife(true);
    onTheHeart = false;
    onTheCoin = false;
    onTheFlower = false;
    onTheExit = false;
}


void Player::update(float time, Field &field) //функция "оживления" объекта класса. update - обновление. принимает в себя время SFML , вследствие чего работает бесконечно, давая персонажу движение.
{
    switch (getDir())
    {
        case LEFT:
            setDx(getSpeed()*(-1));
            setDy(0);
            break;
        case RIGHT:
            setDx(getSpeed());
            setDy(0);
            break;
        case UP:
            setDx(0);
            setDy(getSpeed()*(-1));
            break;
        case DOWN:
            setDx(0);
            setDy(getSpeed());
            break;
    }

    setX(getX() + getDx()*time);
    setY(getY() + getDy()*time);
    setSpeed(0);
    //std::cout << "check life before interaction with map " << getHealth() << std::endl;

    interactionWithMap(field);
    if (getHealth() <= 0) {
        setLife(false);
        setSpeed(0);
        setHealth(0);
    }

}

void Player::interactionWithMap(Field &field)//ф-ция взаимодействия с картой
{
//    int i = 1, j = 1;
    for (int i = getY() / 80; i < (getY() + getH()) / 80; i++)
        for (int j = getX() / 80; j < (getX() + getW()) / 80; j++)
//    for (int i = (getY()/2) / 80; i < getY() / 80; i++)
//        for (int j = (getX()/2) / 80; j < getX() / 80; j++)
//    for (int i = 1; i < field.getHeight(); i++)
//        for (int j = 1; j < field.getWidth(); j++)
        {
            if (field.getFieldArray()[i][j].getStatus() == Cell::WALL)
            {
                if (getDy()>0)
                {
                    setY(i * 80 - getH());
                }
                if (getDy()<0)
                {
                    setY(i * 80 + 80);
                }
                if (getDx() >0)
                {
                    setX(j * 80 - getW());
                }
                if (getDx() < 0)
                {
                    setX(j * 80 + 80);
                }
            }

            if(field.getFieldArray()[i][j].getStatus() == Cell::HEART){
                onTheHeart = true;
            }

            if(field.getFieldArray()[i][j].getStatus() == Cell::COIN){
                onTheCoin = true;
            }

            if(field.getFieldArray()[i][j].getStatus() == Cell::FLOWER){
                onTheFlower = true;
            }

            if(field.getFieldArray()[i][j].getStatus() == Cell::EXIT) {
                onTheExit = true;
            }
        }
}

bool Player::getOnTheHeart(){
    return onTheHeart;
}
bool Player::getOnTheCoin(){
    return onTheCoin;
}
bool Player::getOnTheFlower(){
    return onTheFlower;
}
bool Player::getOnTheExit(){
    return onTheExit;
}

void Player::setOnTheHeart(bool a) {
    onTheHeart = a;
}
void Player::setOnTheFlower(bool a) {
    onTheFlower = a;
}
void Player::setOnTheCoin(bool a) {
    onTheCoin = a;
}

int Player::getCoin(){
    return coin;
}
void Player::setCoin(int a){
    coin = a;
}

void Player::setDir(enum Player::Dir dir){
    this -> dir = dir;
}

enum Player::Dir Player::getDir(){
    return dir;
}





