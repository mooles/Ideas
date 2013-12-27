#include <memory>
#include "State.h"


State::State(States::StateType initial)
{
	State::get(initial);
}

bool State::get(States::StateType state)
{
	return states_ &= 1 << state;
}

void State::set(States::StateType state, bool active)
{
	active ? states_ |= (1 << state) : states_ &= ~(1 << state);
}