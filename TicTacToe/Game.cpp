#include "Game.hpp"

void Game::continue_game_decision(int decision)
{
	if (decision == 4) // izadji iz funkcije ako korisnik zeli zavrsiti s igrom
	{
		cout << cyan << "----------Gotova igra-----------\n" << color_reset;
		return;
	}

	char continuation;
	cout << cyan << "\nZelite li nastaviti igrati? Pritisnite y za nastaviti igrati ili bilo koju drugu tipku za kraj: " << color_reset;
	cin >> continuation;
	while (continuation == 'y')
	{
		for (int i = 0; board[i] != '\0'; i += 1) // vracamo board na pocetno stanje
		{
			board[i] = ' ';
		}
		vec.clear(); // i ovo trebamo, da omogucimo drugoj igri ako je bude da stavlja nove neiskoristene brojeve

		if (decision == 1)
		{
			two_player_game();
			cout << cyan << "\nZelite li nastaviti igrati? Pritisnite y za nastaviti igrati ili bilo koju drugu tipku za kraj: " << color_reset;
			cin >> continuation;
		}

		else if (decision == 2)
		{
			AI_game();
			cout << cyan << "\nZelite li nastaviti igrati? Pritisnite y za nastaviti igrati ili bilo koju drugu tipku za kraj: " << color_reset;
			cin >> continuation;
		}

		else if (decision == 3)
		{
			both_AI_game();
			cout << cyan << "\nZelite li nastaviti igrati? Pritisnite y za nastaviti 33igrati ili bilo koju drugu tipku za kraj: " << color_reset;
			cin >> continuation;
		}
	}
}

void Game::choose_player_mode()
{
	intro_display();
	mode_display();
	int decision;

	while (1)
	{
		cin >> decision;
		if (!decision || decision < 1 || decision > 4)
		{
			throw "Nedozvoljena radnja"; // u slucaju da upisemo vamo neki string/char ili nedozvoljeni broj
		}
		if (decision == 1)
		{
			cout << "Odabrali ste " << decision << ". opciju.\n";
			two_player_game();
			continue_game_decision(decision);
			return;
		}

		else if (decision == 2)
		{
			cout << "Odabrali ste " << decision << ". opciju.\n";
			AI_game();
			continue_game_decision(decision);
			return;
		}

		else if (decision == 3)
		{
			cout << "Odabrali ste " << decision << ". opciju.\n";
			both_AI_game();
			continue_game_decision(decision);
			return;
		}

		else if (decision == 4)
		{
			continue_game_decision(decision);
			break;
		}
		cout << "Odaberite nacin igre: ";
	}
}
