#include "heart.hpp"
#include "player.hpp"
#include <iostream>

Heart::Heart(){
    setPower(20);
}

void Heart::HeartIterationWithPlayer(Player &p, Field &f){
    if(p.getOnTheHeart()){
        p.setHealth(p.getHealth() + getPower());
        f.getFieldArray()[f.getHeartX()][f.getHeartY()].setStatus(Cell::Status::WALK);
        p.setOnTheHeart(false);
        setStopDrawing(true);
    }
}


