#pragma once
#include "rules.hpp"

template<int a> class Rule1:public Rules{

public:
    int score = a;
    
    void check(Player &p){
        if(p.getCoin() == score)
            setDone(true);
    }

};
