#include<iostream>
#include <cmath>

using namespace std;

typedef struct
{
	double x;
	double y;

}point;

class board
{
	int height;
	int width;
	char border_element;

public:
	void frame_set(int h, int w);
	int get_heigth() const;
	int get_width() const;
	void border_element_set(char b);
	char get_border_element() const;
	char** new_board;
	board();
	board(board& board_copy);
	board(board&& board_move);
	board(int h, int w, char c);
	~board();
	void draw_char(point& dot, char ch);
	void draw_up_line(point& dot, char ch);
	char** draw_line(point& dot1, point& dot2, char ch);
	void draw(char** double_pointer);
};
