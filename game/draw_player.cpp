#include "draw_player.hpp"
//#include "player.hpp"
#include <iostream>

DrawPlayer::DrawPlayer(): DrawEntity() {
    image.loadFromFile("player.png");
    texture.loadFromImage(image);
    sprite.setTexture(texture);
}

void DrawPlayer::updatePlayer(Player &p, float time, Field &field) {
    p.update(time, field);
    sprite.setPosition(p.getX(), p.getY());

}

void DrawPlayer::setSpritePlayer(Player &p) {
    sprite.setTextureRect(sf::IntRect(300, 0, p.getW(), p.getH()));
}

void DrawPlayer::MovingPlayer(Player &p) {

    if(p.getLife()) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            p.setDir(Player::LEFT);
            p.setSpeed(0.1);
            sprite.setTextureRect(sf::IntRect(100, 0, 65, 70));
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            p.setDir(Player::RIGHT);
            p.setSpeed(0.1);
            sprite.setTextureRect(sf::IntRect(0, 0, 65, 70));
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            p.setDir(Player::UP);
            p.setSpeed(0.1);
            sprite.setTextureRect(sf::IntRect(200, 0, 60, 65));
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            p.setDir(Player::DOWN);
            p.setSpeed(0.1);
            sprite.setTextureRect(sf::IntRect(300, 0, 60, 65));
        }
    }
}

void DrawPlayer::drawPlayer(sf::RenderWindow &window, Player &p) {
    if(p.getLife() && !p.getOnTheExit()) window.draw(sprite);
}

void DrawPlayer::DrawPlayersWallet(sf::RenderWindow &window, Player &p){
    sf::Font font;
    font.loadFromFile("Ubuntu-Regular.ttf");
    sf::Text text("", font, 20);
    text.setOutlineColor(sf::Color::White);

    std::ostringstream playerHealthString;
    playerHealthString << p.getHealth();

    std::ostringstream PlayerCoins;
    PlayerCoins << p.getCoin();

    text.setString("Health: " + playerHealthString.str() + "     " +  "Coins: " + PlayerCoins.str());
    text.setPosition(10, 10);

    window.draw(text);
}

sf::FloatRect DrawPlayer::getRect(Player &p){
    return sf::FloatRect(p.getX(), p.getY(), p.getW(), p.getH());
}