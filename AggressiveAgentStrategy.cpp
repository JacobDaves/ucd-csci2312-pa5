//
// Created by Jacob Daves.
//

#include "AggressiveAgentStrategy.h"
#include "Game.h"

namespace Gaming
{
    const double AggressiveAgentStrategy::DEFAULT_AGGRESSION_THRESHOLD = Game::STARTING_AGENT_ENERGY * 0.75;

    AggressiveAgentStrategy::~AggressiveAgentStrategy() {
        __agentEnergy = 0;
    }
}