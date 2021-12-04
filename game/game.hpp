#pragma once

#include "player.hpp"
#include "black_enemy.hpp"
#include "red_enemy.hpp"
#include "pink_enemy.hpp"

#include "stuff.hpp"
#include "heart.hpp"
#include "coin.hpp"
#include "flower.hpp"

#include "draw_player.hpp"
#include "draw_BEnemy.hpp"
#include "draw_PEnemy.hpp"
#include "draw_REnemy.hpp"

#include "draw_heart.hpp"
#include "draw_coin.hpp"
#include "draw_flower.hpp"

#include "log_file.hpp"
#include "log_console.hpp"
#include "output.hpp"
#include "draw_field.hpp"

template< class Rule1, class Rule2>
class Game{
    Rule1 *rule1;
    Rule2 *rule2;
    bool r1 = false;
public:
    Game(): rule1(new Rule1), rule2(new Rule2){}

    void display(sf::RenderWindow &w, Field &field){

        field.RandomSetStuffOnTheField();



        Player p(95, 95, 65.0, 70.0);
        BlackEnemy blackEnemy(300, 90, 65.0, 70.0);
        RedEnemy redEnemy(200, 650, 65.0, 70.0);
        PinkEnemy pinkEnemy(490, 490, 65.0, 70.0);

        Heart heart;
        Coin coin;
        Flower flower;

        DrawPlayer dp;
        DrawBlackEnemy dbe;
        DrawRedEnemy dre;
        DrawPinkEnemy dpe;
        DrawHeart dh;
        DrawCoin dc;
        DrawFlower df;
        DrawField drawField;

        LogOutput out;

        dp.setSpritePlayer(p);
        dh.SetHeartSprite(heart, field);
        dc.SetCoinSprite(coin, field);
        df.SetFlowerSprite(flower, field);

        sf::Clock clock;
        while (w.isOpen()){

            float time = clock.getElapsedTime().asMicroseconds();
            clock.restart();
            time = time/800;

            sf::Event event;
            while (w.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    w.close();
            }
            dp.MovingPlayer(p);

            dp.updatePlayer(p, time, field);
            dbe.updateBlackEnemy(blackEnemy, time, field);
            dpe.updatePinkEnemy(pinkEnemy, time,field);
            dre.updateRedEnemy(redEnemy, time, field);

            out.LookingForPlayer(p);
            out.LookingForCoin(coin);
            out.LookingForFlower(flower);
            out.LookingForHeart(heart);
            out.LookingForREnemy(redEnemy);
            out.LookingForBEnemy(blackEnemy);
            out.LookingForPEnemy(pinkEnemy);

            if(p.getOnTheFlower()) flower.FlowerInteractionWithPlayer(p, field);
            if(p.getOnTheHeart()) heart.HeartIterationWithPlayer(p, field);
            if(p.getOnTheCoin()) coin.CoinIterationWithPlayer(p, field);

            rule1 -> check(p);
            rule2 -> check(p);
            if( rule1 -> getDone() && rule2 -> getDone())
                r1 = true;

            w.clear();

            drawField.drawingField(field, w);
            df.drawSprite(w,flower);
            dc.drawSprite(w, coin);
            dh.drawSprite(w, heart);
            dpe.drawSprite(w, pinkEnemy);
            dbe.drawSprite(w, blackEnemy);
            dre.drawSprite(w,redEnemy);
            if(!r1) dp.drawPlayer(w, p);
            dp.DrawPlayersWallet(w, p);

            w.display();
        }

    }

};
