#ifndef PLAYER_H
#define PLAYER_H
#include "TicTacToe.hpp"

class Player : public TicTacToe
{
public:
	void continue_game_decision(int decision);
	void choose_player_mode();
	void player(int player);
	void AI_player(int player);
	void two_player_game();
	void AI_game();
	void both_AI_game();
};

#endif