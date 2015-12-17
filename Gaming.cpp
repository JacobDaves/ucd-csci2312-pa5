//
// Created by Jacob Daves.
//

#include "Gaming.h"

Gaming::PositionRandomizer::~PositionRandomizer() {
    for (int i = 0; i < 10; i++) delete __dist[i];
}
