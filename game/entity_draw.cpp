#include "entity_draw.hpp"

DrawEntity::DrawEntity() {
    width = 80; height = 80;
}

void DrawEntity::SetEnemySprite(){
    image.loadFromFile("enemy.png");
    texture.loadFromImage(image);
    sprite.setTexture(texture);
}

void DrawEntity::SetStuffSprite(){
    image.loadFromFile("things.png");
    texture.loadFromImage(image);
    sprite.setTexture(texture);
}

sf::Image DrawEntity::getImage() {
    return image;
}

sf::Texture DrawEntity::getTexture() {
    return texture;
}

sf::Sprite DrawEntity::getSprite() {
    return sprite;
}
void DrawEntity::setImage(sf::Image a) {
    image = a;
}

void DrawEntity::setTexture(sf::Texture a) {
    texture = a;
}

void DrawEntity::setSprite(sf::Sprite a) {
    sprite = a;
}

void DrawEntity::setW(int a){
    width = a;
}
void DrawEntity::setH(int a){
    height = a;
}

int DrawEntity::getH(){
    return height;
}
int DrawEntity::getW(){
    return width;
}
