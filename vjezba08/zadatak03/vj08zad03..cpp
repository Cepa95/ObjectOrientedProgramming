#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include "sort.hpp"

using namespace std;

int main()
{
	vector <int> vec = { 15, 9, 2 ,5 ,9, 16, 3, 7 };

	for (auto x : sort_array(vec))
	{
		cout << x << " ";
	}

	vector <char> vec1 = { 'D', 'a', 'b', 'c', 'a', 'f', 'B', 'd', 'A' };
	cout << endl;

	for (auto x : sort_array(vec1))
	{
		cout << x << " ";
	}
}