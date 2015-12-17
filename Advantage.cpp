//
// Created by Jacob Daves.
//

#include "Advantage.h"

using namespace std;

namespace Gaming {

    const char Advantage::ADVANTAGE_ID = 'D';
    const double Advantage::ADVANTAGE_MULT_FACTOR = 2.0;

    Advantage::Advantage(const Game &g, const Position &p, double capacity): Resource(g,p,capacity*ADVANTAGE_MULT_FACTOR) {
            __id = idGen();
            return;
    }

    void Advantage::print(std::ostream &os) const {
        cout << ADVANTAGE_ID << __id;
    }
//
    double Advantage::consume() {
        double consumeAdvan = __capacity*ADVANTAGE_MULT_FACTOR;
        __capacity = 0;
        finish();
        return consumeAdvan;
    }

    Advantage::~Advantage(void) {

    }
}

