//
// Created by Jacob Daves.
//

#include "Agent.h"
#include "Resource.h"

namespace Gaming
{
    const double Agent::AGENT_FATIGUE_RATE = 0.3;

    Agent::Agent(const Game &g, const Position &p, double energy): Piece(g,p) {
        __energy = energy;
    }

    Piece &Agent::operator*(Piece &other) {

        if ((other.getType() == SIMPLE) || (other.getType() == STRATEGIC)) {
                return other.interact(this);
            }
            else if ((other.getType() == FOOD) || (other.getType() == ADVANTAGE)) {
                return (other.interact(this));
            }
                else
                    return *this;



    }

    Piece &Agent::interact(Agent *agent) {
        //  This is the interaction between the Agents,
        // they compete and one dies and the other wins, or they both die.
        // Both Agents Die
        if (__energy == agent->__energy)
        {
            finish();
            agent->finish();
        }
        // 1st Agent will win
        else if (__energy > agent->__energy)
        {
            __energy -= agent->__energy;
            agent->finish();
        }
        // 2nd Agent will win
        else if (__energy < agent->__energy)
        {
            agent->__energy -= __energy;
            finish();
        }
        return *this;
    }

    Piece &Agent::interact(Resource *resource) {
        addEnergy(resource->consume());
        return *this;
    }

    void Agent::age() {
        __energy -= AGENT_FATIGUE_RATE;
    }

    Agent::~Agent(void) {
        __energy = 0;
    }
}
