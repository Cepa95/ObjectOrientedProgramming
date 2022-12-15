#include <iostream>
#include <vector>
#include "setofnumbers.hpp"

using namespace std;

int main()
{
	SetOfNumbers <int> set;

	set.add_element(5);
	set.add_element(7);
	set.add_element(3);
	set.add_element(8);
	set.add_element(3);
	set.remove_element(3);

	for (auto x : set.get_vector())
	{
		cout << x << " ";
	}
	cout << endl << set.check_for_element(7);
	cout << endl << set.check_for_element(10);
}