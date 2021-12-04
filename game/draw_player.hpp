#pragma once
#include "entity_draw.hpp"
#include "player.hpp"
#include <SFML/Graphics.hpp>
#include <sstream>

class Player;

class DrawPlayer: public DrawEntity{
public:
    DrawPlayer();
    void setSpritePlayer(Player &p);
    void updatePlayer(Player &p, float time, Field &field);
    void MovingPlayer(Player &p);
    void DrawPlayersWallet(sf::RenderWindow &window, Player &p);
    void drawPlayer(sf::RenderWindow &window, Player &p);
    sf::FloatRect getRect(Player &p);
};
