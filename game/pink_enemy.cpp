#include "pink_enemy.hpp"
#include "field.hpp"

PinkEnemy::PinkEnemy(float X, float Y, int W, int H):Character(X, Y, W, H){
//    sprite.setOrigin(w / 2, h / 2);
    setHealth(50);
    setDy(0.1);
    setDamage(10);
    setLife(true);

}

void PinkEnemy::checkCollisionWithMap(float Dx, float Dy, Field &field)//ф ция проверки столкновений с картой
{
    for (int i = getY() / 80; i < (getY() + getH()) / 80; i++)
        for (int j = getX()/ 80; j<(getX() + getW()) / 80; j++)
        {
            if (field.getFieldArray()[i][j].getStatus() == 1)
            {
                if (Dy>0){ setY(i * 80 - getH()); setDy(-0.1);}
                if (Dy<0){ setY(i * 80 + 80); setDy(0.1);}
                if (Dx>0){ setX(j * 80 - getW()); } //sprite.scale(-1, 1); }
                if (Dx<0){ setX(j * 80 + 80); }// sprite.scale(-1, 1); }
            }
        }
}

void PinkEnemy::update(float time, Field &field)
{
        checkCollisionWithMap(0, getDy(), field);
        setY(getY()+getDy()*time);
        //sprite.setPosition(x + w / 2, y + h / 2);
        if (getHealth() <= 0) setLife(false);

}