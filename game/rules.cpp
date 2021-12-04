#include "rules.hpp"

Rules::Rules() {
    done = false;
}

bool Rules::getDone() {
    return done;
}

void Rules::setDone(bool a) {
    done = a;
}