#include "draw_field.hpp"

DrawField::DrawField() {
    image.loadFromFile("sprmap.png");
    texture.loadFromImage(image);
    sprite.setTexture(texture);
}

void DrawField::drawingField(Field &field, sf::RenderWindow &w){

    for(int i = 0; i < field.getHeight(); i++){
        for(int j = 0; j < field.getWidth(); j++){

            sf::Vector2f position(i * 80 + 10.f, j * 80 + 10.f);

            if(field.getFieldArray()[j][i].getStatus() == Cell::WALL){
                sprite.setTextureRect(sf::IntRect(100, 0, 80, 80));
            }
            else if(field.getFieldArray()[j][i].getStatus() == Cell::ENTER) {
                sprite.setTextureRect(sf::IntRect(200, 0, 80, 80));
            }
            else if (field.getFieldArray()[j][i].getStatus() == Cell::EXIT){
                sprite.setTextureRect(sf::IntRect(300, 0, 80, 80));
            }
            else{
                sprite.setTextureRect(sf::IntRect(0, 0, 80, 80));
            }

            sprite.setPosition(position);
            w.draw(sprite);
        }
    }

}

//void DrawField::drawSprite(sf::RenderWindow &w, Field &field){
//    drawingField(field);
//
//}
