#include "coin.hpp"

Coin::Coin(){
    setPower(1);
}

void Coin::CoinIterationWithPlayer(Player &p, Field &f){
    if(p.getOnTheCoin()){
        p.setCoin(p.getCoin() + getPower());
        f.getFieldArray()[f.getCoinX()][f.getCoinY()].setStatus(Cell::Status::WALK);
        p.setOnTheCoin(false);
        setStopDrawing(true);
    }
}
