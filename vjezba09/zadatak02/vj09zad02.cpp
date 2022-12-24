#include "VectorStl.hpp"

int main()
{
	VectorStl vec;
	vec.find_odd_number();
	int odd_numbers = vec.count_odd_numbers();
	cout << "Broj neparnih brojeva u vektoru iznosi: " << odd_numbers << endl;
	
	/*vector<int> vect = vec.to_the_power_of_two();
	for (auto x : vect)
	{
		cout << x << " ";
	}*/

	vector<int> v = vec.sort_even_odd();
	for (auto x : v)
	{
		cout << x << " ";
	}
}