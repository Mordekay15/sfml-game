#include "red_enemy.hpp"
#include "field.hpp"
#include <iostream>

RedEnemy::RedEnemy(float X, float Y, int W, int H):Character(X, Y, W, H){
    setDamage(5);
    setHealth(30);
    setLife(true);
    setDx(0.1);
}

void RedEnemy::checkCollisionWithMap(float Dx, float Dy, Field &field)
{
    //Field field;
    for (int i = getY() / 80; i < (getY() + getH()) / 80; i++)
        for (int j = getX() / 80; j<(getX() + getW()) / 80; j++)
        {
            if (field.getFieldArray()[i][j].getStatus() == 1)
            {
                if (Dy>0){ setY(i * 80 - getH()); }
                if (Dy<0){ setY(i * 80 + 80); }
                if (Dx>0){ setX(j * 80 - getW()); setDx(-0.1);} //sprite.scale(-1, 1); }
                if (Dx<0){ setX(j * 80 + 80); setDx(0.1);}// sprite.scale(-1, 1); }
            }
        }
}

void RedEnemy::update(float time, Field &field)
{
    checkCollisionWithMap(getDx(), 0, field);
    setX(getX()+getDx()*time);
    if (getHealth()<= 0) {
        setLife(false);
        setSpeed(0);
    }
}
