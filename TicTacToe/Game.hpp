#ifndef GAME_H
#define GAME_H
#include "TicTacToe.hpp"
#include "Player.hpp"

class Game : public Player
{
public:
	void continue_game_decision(int decision);
	void choose_player_mode();
};

#endif