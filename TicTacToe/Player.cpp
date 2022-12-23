#include "Player.hpp"


void Player::continue_game_decision(int decision)
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

void Player::choose_player_mode()
{
	intro_display();
	mode_display();
	int decision;

	while (1)
	{
		cin >> decision;
		if (!decision)
		{
			break; // u slucaju da upisemo i vamo neki string/char
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

void Player::player(int player)
{
	cout << endl;
	if (vec.size() % 2 == 1) // igrac1 uvijek igra prvi stoga ce biti vektor neparan  i obojat cemo igraca pripadnom bojom
	{
		cout << red << "Igrac" << player << color_reset << endl << "Unesite slobodnu poziciju: ";
		cin >> position;
	}
	else
	{
		cout << blue << "Igrac" << player << color_reset << endl << "Unesite slobodnu poziciju: ";
		cin >> position;
	}
	while (cin.fail() || position > 8 || position < 0 || counter != 0) // provjere da vidimo je li igrac1 unio trazeni podatak
	{

		if (cin.fail() || position > 8 || position < 0)
		{
			check_if_string(); // provjera je li korisnik slucajno upisao char/string
		}

		while (!is_in_vector(position)) //gledamo ima li position u vectoru koji cemo unijeti par linija nize 							
		{									// kada zadovoljimo sve potrebne uvjete, da ne punimo vektor nepotrebnim brojevima
			cout << "Pozicija je vec unesena\n";
			cout << "Unesite valjanu poziciju: ";
			cin >> position;

			if (cin.fail() || position > 8 || position < 0) // moram staviti uvjet jos vamo u slucaju da korisnik stavi poziciju koja ne postoji
			{											   // i onda nakon upise ili veci/manji broj ili upise neki char/string
				check_if_string();
			}
		}
		counter = 0; // vracam brojac na nula da zavrsimo sa petljom ako su ostali uvjeti zadovoljeni;
	}
	counter += 1; // dizem brojac na jedan da opet sa sigurnoscu mogu uci u petlju pri pozivu funkcije
	vec.push_back(position); // nakon sta je igrac zadovoljio uvjete unosi se broj, koji se sad vise nece moci koristiti
}

void Player::AI_player(int player)
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

void Player::two_player_game()
{
	while (1)
	{
		player(player1);// poziv igraca
		choice(player1, position); // nakon sto smo zadovoljili uvjete, unosimo u plocu X na odgovarajucu poziciju 

		display_board(); // prikaz trenutne situacije
		check = check_situation(); // gledamo ima li pobjednika
		if (display_result(check) != 0) // da smanjim broj couta samo u slucaju 0 ne ulazi u if
		{
			break;
		}

		player(player2);
		choice(player2, position);

		display_board();
		check = check_situation();
		if (display_result(check) != 0)
		{
			break;
		}
	}
}

void Player::AI_game()
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

void Player::both_AI_game()
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

