//
// Created by Jacob Daves.
//

#ifndef PA5GAME_WEAPON_H
#define PA5GAME_WEAPON_H

#include "Game.h"
#include "Resource.h"

namespace Gaming {
    class Advantage : public Resource {
    private:
        static const char ADVANTAGE_ID;

    public:
        static const double ADVANTAGE_MULT_FACTOR;

        Advantage(const Game &g, const Position &p, double capacity);
        ~Advantage();

        PieceType getType() const override { return PieceType::ADVANTAGE; }

        void print(std::ostream &os) const override;

        double getCapacity() const override {return __capacity;};
        double consume() override;
    };


}


#endif //PA5GAME_WEAPON_H