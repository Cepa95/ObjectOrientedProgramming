#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

class File
{
public:
	ifstream open_file();
	vector<int> put_in_vector(ifstream& file);
	void min_max(int& min, int& max, vector<int>& vec);
	vector <int> erase_elements(vector<int>& vec);
	vector <int> sort_in_reverse(vector<int>& vec);
};

class Bigger
{
	int limit;
public:
	Bigger(int limit) : limit(limit) {}
	bool operator()(int n) { return n > limit; }
};

int count_numbers(vector<int>& vec);