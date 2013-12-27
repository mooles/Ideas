#ifndef STATE_H
#define STATE_H

#include <memory>
#include <bitset>

namespace States
{
	enum StateType
	{
		Burned,
		Confused,
		PlayerTurn,
		EnemyTurn,
		None = 0
	};
}

class State
{
public:
	State(States::StateType initial);
	
	virtual bool get(States::StateType state);
	virtual void set(States::StateType state, bool active);
protected:
	static const int MAX_STATES = 64;
	std::bitset<MAX_STATES> states_;
};

#endif