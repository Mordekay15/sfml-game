#include "flower.hpp"
#include <iostream>


Flower::Flower(){
    setPower(40);
}

void Flower::FlowerInteractionWithPlayer(Player &p, Field &f){
    if(p.getOnTheFlower()) {
        p.setHealth(p.getHealth() - getPower());
        f.getFieldArray()[f.getFlowerX()][f.getFlowerY()].setStatus(Cell::Status::WALK);
        p.setOnTheFlower(false);
        setStopDrawing(true);
    }
}

