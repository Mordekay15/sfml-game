#include <iostream>

#include "cell.hpp"
#include "field.hpp"

Cell::Cell(){}

void Cell::setStatus(enum Cell::Status status){
    this -> status = status;
}

enum Cell::Status Cell::getStatus(){
    return status;
}

//void Cell::setWALL(int val) {
//    WALL = val;
//}
//
//void Cell::setWALK(int val) {
//    WALK = val;
//}
//
//void Cell::setENTER(int val) {
//    ENTER = val;
//}
//
//void Cell::setEXIT(int val) {
//    EXIT = val;
//}
//
//int Cell::getWALK(){
//    return WALK;
//}
//
//int Cell::getWALL(){
//    return WALL;
//}
//
//int Cell::getENTER(){
//    return ENTER;
//}
//
//int Cell::getEXIT(){
//    return EXIT;
//}
//
//int Cell::getHEART(){
//    return HEART;
//}
//
//int Cell::getCOIN(){
//    return COIN;
//}
//
//int Cell::getFLOWER(){
//    return FLOWER;
//}
//void Cell::function(Field &field){
//
//    for (int i = 0; i < field.height; i++) {
//        for (int j = 0; j < field.width; j++) {
//
//            if (field.x[j][i].status == 0) {
//
//            }
//
//            if (field.x[j][i].status == 1) {
//
//            }
//
//            if (field.x[j][i].status == 2) {
//
//            }
//
//            if (field.x[j][i].status == 3) {
//
//            }
//        }
//    }
//}
