#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class SetOfNumbers
{
	vector <T> vec;
public:

	vector <T> get_vector() const
	{
		return vec;
	}

	void add_element(T element)
	{
		vec.push_back(element);
	}

	void remove_element(T element)
	{
		vec.erase(remove(vec.begin(), vec.end(), element), vec.end());
	}

	bool check_for_element(T element)
	{
		for (auto x : get_vector())
		{
			if (x == element)
			{
				return true;
			}
		}
		return false;
	}
};