#include "board.hpp"

	void board :: frame_set(int h, int w)
	{
		height = h;
		width = w;
	}

	int board :: get_heigth() const
	{
		return height;
	}

	int board :: get_width() const
	{
		return width;
	}

	void board :: border_element_set(char b)
	{
		border_element = b;
	}

	char board :: get_border_element() const
	{
		return border_element;
	}

	board :: board() //konstruktor bez argumenata je default konstruktor
	{
		//cout << "konstruktor"<<endl;
		frame_set(20, 10);
		border_element_set('o');
		new_board = new char* [get_width()];
		for (int i = 0; i < get_width(); i += 1)
		{
			new_board[i] = new char[get_heigth()];
			for (int j = 0; j < get_heigth(); j += 1)
			{
				if (i == 0 || j == 0)
				{
					//border_element_set('x');
					new_board[i][j] = get_border_element();
					//cout << new_board[i][j];
				}
				else if (i == get_width() - 1 || j == get_heigth() - 1)
				{
					//border_element_set('y');
					new_board[i][j] = get_border_element();
					//cout << new_board[i][j];
				}
				else
				{
					new_board[i][j] = ' ';
					//cout << new_board[i][j];
				}
			}
			//cout << endl;
		}
	}

	board :: board(board& board_copy)  //copy konstruktor
	{
		frame_set(board_copy.height, board_copy.width);
		border_element_set(board_copy.border_element);
		board_copy.new_board = new char* [get_width()];
		for (int i = 0; i < get_width(); i += 1)
		{
			board_copy.new_board[i] = new char[get_heigth()];
			for (int j = 0; j < get_heigth(); j += 1)
			{
				if (i == 0 || j == 0)
				{
					//border_element_set('x');
					board_copy.new_board[i][j] = get_border_element();
					//cout << new_board[i][j];
				}
				else if (i == get_width() - 1 || j == get_heigth() - 1)
				{
					//border_element_set('y');
					board_copy.new_board[i][j] = get_border_element();
					//cout << new_board[i][j];
				}
				else
				{
					board_copy.new_board[i][j] = ' ';
					//cout << new_board[i][j];
				}
			}
			//cout << endl;
		}

	}

	board :: board(board&& board_move) //shifta resurse
	{
		height = board_move.height;
		width = board_move.width;
		border_element = board_move.border_element;
		this->new_board = board_move.new_board;

		board_move.height = 0;
		board_move.width = 0;
		board_move.border_element = ' ';
		board_move.new_board = nullptr;
		/*cout << "moved" << endl;
		for (int i = 0; i < get_width(); i += 1)
		{
			for (int j = 0; j < get_heigth(); j += 1)
			{
				cout << new_board[i][j];
			}
			cout << endl;
		}*/

	}

	board :: board(int h, int w, char c)
	{
		frame_set(h, w);
		border_element_set(c);

		new_board = new char* [get_width()];
		for (int i = 0; i < get_width(); i += 1)
		{
			new_board[i] = new char[get_heigth()];
			for (int j = 0; j < get_heigth(); j += 1)
			{
				if (i == 0 || j == 0)
				{
					//border_element_set('x');
					new_board[i][j] = get_border_element();
					//cout << new_board[i][j];
				}
				else if (i == get_width() - 1 || j == get_heigth() - 1)
				{
					//border_element_set('y');
					new_board[i][j] = get_border_element();
					//cout << new_board[i][j];
				}
				else
				{
					new_board[i][j] = ' ';
					//cout << new_board[i][j];
				}
			}
			//cout << endl;
		}

	}

	board :: ~board() //destruktor
	{
		delete[] new_board;
		new_board = 0;
	}



	void board :: draw_char(point& dot, char ch)
	{
		if (dot.x < get_width() && dot.y < get_heigth())
		{
			new_board[(int)round(dot.x)][(int)round(dot.y)] = ch;


			/*for (int i = 0; i < get_width(); i += 1)
			{
				for (int j = 0; j < get_heigth(); j += 1)
				{
					cout << new_board[i][j];
				}
				cout << endl;
			}*/
		}
		else
		{
			cout << "Unesene su vise tocke od  zadanih granica ploce";
		}

	}

	void board :: draw_up_line(point& dot, char ch)
	{
		if (dot.x < get_width() && dot.y < get_heigth())
		{
			while (dot.x != 0 && dot.y != 0)
			{
				new_board[(int)round(dot.x)][(int)round(dot.y)] = ch;
				dot.x -= 1;
				dot.y -= 1;
			}
		}
		for (int i = 0; i < get_width(); i += 1)
		{
			for (int j = 0; j < get_heigth(); j += 1)
			{
				cout << new_board[i][j];
			}
			cout << endl;
		}
	}

	char**  board :: draw_line(point& dot1, point& dot2, char ch)
	{
		int temp;
		if (dot1.x > dot2.x)
		{
			temp = dot1.x;
			dot1.x = dot2.x;
			dot2.x = temp;
		}
		if (dot1.y > dot2.y)
		{
			temp = dot1.y;
			dot1.y = dot2.y;
			dot2.y = temp;
		}
		//cout << dot1.x << dot1.y << dot2.x << dot2.y;
		for (int i = dot1.y; i <= dot2.y; i += 1)
		{
			for (int j = dot1.x; j <= dot2.x; j += 1)
			{
				if (i == j)
				{
					new_board[i][j] = ch;
				}
				else if (dot1.y == dot2.y)
				{
					new_board[i][j] = ch;
				}
				else if (dot1.x == dot2.x)
				{
					new_board[i][j] = ch;
				}
			}
		}
		return new_board;
	}

	void board :: draw(char** double_pointer)
	{
		for (int i = 0; i < get_width(); i += 1)
		{
			for (int j = 0; j < get_heigth(); j += 1)
			{
				cout << new_board[i][j];
			}
			cout << endl;
		}
	}
