#ifndef AIPLAYER_H
#define AIPLAYER_H
#include "TicTacToe.hpp"
#include "Player.hpp"

class AIPlayer : public Player
{
public:
	void AI_player(int player);
	void AI_game();
	void both_AI_game();
};

#endif