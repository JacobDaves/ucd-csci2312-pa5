//
// Created by Jacob Daves.
//

#ifndef PA5GAME_STRATEGY_H
#define PA5GAME_STRATEGY_H

#include "Gaming.h"

namespace Gaming {

    class Strategy {
    public:
        Strategy();
        virtual ~Strategy();
     //   virtual ActionType operator()(const Surroundings &s) const = 0;
    };

}


#endif //PA5GAME_STRATEGY_H
