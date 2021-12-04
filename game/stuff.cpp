#include "stuff.hpp"
#include "field.hpp"

Stuff::Stuff() {
    StopDrawing = false;
}

void Stuff::setPower(int a){
    power = a;
}
int Stuff::getPower(){
    return power;
}

void Stuff::setStopDrawing(bool a){
    StopDrawing = a;
}
bool Stuff::getStopDrawing() {
    return StopDrawing;
}


