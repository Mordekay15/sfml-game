#pragma once
//#include "entity.hpp"
#include <SFML/Graphics.hpp>

class DrawEntity{
    int width, height;
public:
    sf::Image image;
    sf::Texture texture;
    sf::Sprite sprite;
    DrawEntity();
    void SetEnemySprite();
    void SetStuffSprite();
    sf::Image getImage();
    sf::Texture getTexture();
    sf::Sprite getSprite();

    void setImage(sf::Image a);
    void setTexture(sf::Texture a);
    void setSprite(sf::Sprite a);

    void setH(int a);
    void setW(int a);
    int getH();
    int getW();
};