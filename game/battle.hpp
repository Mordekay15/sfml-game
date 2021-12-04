#pragma once
#include <list>
#include "draw_REnemy.hpp"
#include "draw_PEnemy.hpp"
#include "draw_BEnemy.hpp"
#include "draw_player.hpp"
//#include "entity_draw.hpp"
#include "character.hpp"
#include <SFML/Graphics.hpp>

class Battle{
    std::list<DrawEntity*> enemies;
    std::list<Character*> entities;
public:
    Battle();
    void kill(DrawPlayer &dp, DrawBlackEnemy &dbe, DrawPinkEnemy &dpe, DrawRedEnemy &dre);
};