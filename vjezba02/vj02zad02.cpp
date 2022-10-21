#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> sort_it(vector<int>& v)
{
	sort(v.begin(), v.end());
	v.insert(v.begin(), 0);
	int sum = 0;
	for (int i = 0; i < v.size(); i += 1)
	{
		sum += v[i];
	}
	v.push_back(sum);
	return v;


}

int main()

{
	vector<int>v = { 1, 8, 9, 4, 147, 5, 6, 1 };
	vector<int>vector_sort = sort_it(v);
	
	for (int i = 0; i < vector_sort.size(); i += 1)
	{

		cout << v[i] << " ";
	}

}