#ifndef PLAYER_H
#define PLAYER_H
#include "TicTacToe.hpp"

class Player : public TicTacToe
{
public:
	void player(int player);
	void two_player_game();
};

#endif