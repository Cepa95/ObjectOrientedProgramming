#include "AIPlayer.hpp"

void AIPlayer::AI_player(int player)
{
	int random = (rand() % 9); // modul od devet jer nam tribaju samo brojevi od 0 do 8

	if (player == 2)
	{
		cout << endl << red << "igrac" << player << color_reset << endl; // uzimamo u obzir sve igre, stoga ce on uvik bit crven bez obzira na vector
	}
	else
	{
		cout << endl << blue << "igrac" << player << color_reset << endl;

	}

	while (board[random] != ' ')
	{
		if (board[random] == ' ')
		{
			break;
		}
		random = (rand() % 9); // nije zadovoljen if, petlja dok se ne zadovolji if
	}
	position = random;
	vec.push_back(position);
}

void AIPlayer::AI_game()
{
	while (1)
	{
		player(player1);
		choice(player1, position);

		display_board();
		check = check_situation();

		if (display_result(check) != 0)
		{
			break;
		}

		AI_player(player2);

		choice(player2, position);
		display_board();

		check = check_situation();
		if (display_result(check) != 0)
		{
			break;
		}
	}
}

void AIPlayer::both_AI_game()
{
	while (1)
	{
		AI_player(player1);

		choice(player1, position);
		display_board();

		check = check_situation();
		if (display_result(check) != 0)
		{
			break;
		}

		AI_player(player2);

		choice(player2, position);
		display_board();

		check = check_situation();
		if (display_result(check) != 0)
		{
			break;
		}
	}
}


