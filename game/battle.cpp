#include "battle.hpp"

Battle::Battle() {}

void Battle::kill(DrawPlayer &dp, DrawBlackEnemy &dbe, DrawPinkEnemy &dpe, DrawRedEnemy &dre) {
//    std::list<DrawEntity*>::iterator de;
//    std::list<DrawEntity*>::iterator de2;

    std::list<Character*>::iterator it;
    std::list<Character*>::iterator it2;

    for (it = entities.begin(); it != entities.end(); it++)
        for (it2 = entities.begin(); it2 != entities.end(); it2++){
            if((*it)->name)

        }
}
