#pragma once
#include "rules.hpp"

template<int a> class Rule2: public Rules {

public:
    int score = a;
//    Rule2(){
//        score = a;
//    }
//    ~Rule2();

    void check(Player &p){
        if(p.getHealth() >= score)
            setDone(true);
    }

};
