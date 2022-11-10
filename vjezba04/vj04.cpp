#include<iostream>
#include <cmath>
#include "board.hpp"


int main()
{
	board myboard;
	//cout << board_copy.get_heigth();
	//board board(15, 15, 'x');
	point dot;
	dot.x = 1, dot.y = 5;
	//myboard.draw_char(dot, 'x');
	//myboard.draw_up_line(dot, 'x');
	point dot1 = { 2, 8 };
	point dot2 = { 16, 8 };
	myboard.draw_line(dot1, dot2, 'x');
	point dot3 = { 2, 2 };
	point dot4 = { 8, 8 };
	char** double_pointer=myboard.draw_line(dot3, dot4, 'x');
	myboard.draw(double_pointer);
}