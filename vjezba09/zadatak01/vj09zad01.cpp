#include "File.hpp"

int main()
{
	try
	{
		File document;
		ifstream file = document.open_file();
		vector <int> vec = document.put_in_vector(file);
		for (auto x : vec)
		{
			cout << x << " ";
		}
		int numbers = count_numbers(vec);
		cout << numbers << endl;

		int min, max;
		document.min_max(min, max, vec);
		cout << min << endl;
		cout << max << endl;

		vector<int> vect = document.erase_elements(vec);
		for (auto x : vect)
		{
			cout  << x <<" ";
		}
		cout << endl;

		vector<int> v = document.sort_in_reverse(vect);
		for (auto x : v)
		{
			cout << x << " ";
		}
	}

	catch (const char* message)
	{
		cout << message;
		return -1;
	}
}