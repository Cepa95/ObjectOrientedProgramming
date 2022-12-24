#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

bool is_odd(int i);
bool is_power_of_two(int n);

class VectorStl
{
	vector<int> vec = { 16, 1, 8, 6, 13, 3, 2, 4, 5, 20, 18, 3, 4, 7 };
	vector<int>::iterator it;
	int numbers = 0;

public:
	void find_odd_number();
	int count_odd_numbers();
	vector<int> to_the_power_of_two();
	vector<int> sort_even_odd();
};



