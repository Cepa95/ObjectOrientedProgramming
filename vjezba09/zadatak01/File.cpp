#include "File.hpp"

ifstream File :: open_file()
{
	ifstream file("numbers.txt");
	if (!file)
	{
		throw "There is no file under that name opened";
	}
	return file;
}

vector<int> File :: put_in_vector(ifstream& file)
{
	istream_iterator<int> it(file);
	istream_iterator<int> eos;
	vector<int> v;
	copy(it, eos, back_inserter(v));
	return v;
}

void File :: min_max(int& min, int& max, vector<int>& vec)
{
	min = *min_element(vec.begin(), vec.end());
	max = *max_element(vec.begin(), vec.end());
}


vector<int> File :: erase_elements(vector<int>& vec)
{

	for (int i = 0; i < vec.size(); i+=1)
	{
		if (vec.at(i) < 300)
		{
			vec.erase(vec.begin() + i, vec.begin() + i + 1);
			i -= 1;
		}
	}
	return vec;
}

vector<int> File :: sort_in_reverse(vector<int>& vec)
{
	sort(vec.begin(), vec.end(), greater<int>());
	return vec;
}

int count_numbers(vector<int>& vec)
{
	int cnt = count_if(vec.begin(), vec.end(), Bigger :: Bigger(500));
	return cnt;
}
