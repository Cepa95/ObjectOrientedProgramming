#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>


using namespace std;

template <class T>
vector<T> sort_array(vector <T>& vec)
{
	sort(vec.begin(), vec.end());
	return vec;
}

template<>
vector<char> sort_array <char>(vector <char>& vec)
{
	vector <char> vec1;
	for (auto x : vec)
	{
		if (isupper(x))
		{
			x = tolower(x);
			vec1.push_back(x);
		}
		else
		{
			vec1.push_back(x);
		}
	}
	sort(vec1.begin(), vec1.end());
	return vec1;

}


