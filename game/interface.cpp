#include "interface.hpp"
#include "field.hpp"

#include "rule1.hpp"
#include "rule2.hpp"
#include "game.hpp"

#include <SFML/Graphics.hpp>

void MapDraw::mapDraw(Field &field){

    sf::RenderWindow window(sf::VideoMode(820, 820), "ChillyPizdrik");
    window.setFramerateLimit(60);

    Game<Rule1<1>, Rule2<160>> game;
    game.display(window, field);

}
