#include "black_enemy.hpp"
#include <iostream>
#include "field.hpp"

BlackEnemy::BlackEnemy(float X, float Y, int W, int H):Character(X, Y, W, H){
    setHealth(70);
    setDamage(15);
    setLife(true);
    setDx(-0.1);
}

void BlackEnemy::checkCollisionWithMap(float Dx, float Dy, Field &field)//ф ция проверки столкновений с картой
{
    for (int i = getY() / 80; i < (getY() + getH()) / 80; i++)
        for (int j = getX()/ 80; j < (getX() + getW()) / 80; j++)
        {
            if (field.getFieldArray()[i][j].getStatus() == 1)
            {
                if (Dy>0){ setY(i * 80 - getH()); setDx(0.1); setDy(0);} //up
                if (Dy<0){ setY(i * 80 + 80); setDx(-0.1); setDy(0);}//down
                if (Dx>0){ setX(j * 80 - getW()); setDy(-0.1); setDx(0);} //sprite.scale(-1, 1); } left
                if (Dx<0){ setX(j * 80 + 80); setDy(0.1); setDx(0);}//sprite.scale(-1, 1); } right
            }
        }
}

void BlackEnemy::update(float time, Field &field)
{
        checkCollisionWithMap(getDx(), getDy(), field);
        setX(getX() + getDx()*time);
        setY(getY() + getDy()*time);
        if (getHealth() <= 0) setLife(false);
}
