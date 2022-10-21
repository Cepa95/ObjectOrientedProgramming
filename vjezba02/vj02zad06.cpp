#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int pomoc(int kraj, int kraj1)
{

	string ss = "aeiouAeuiou";
	for (int i = 0; i < ss.size(); i += 1)
	{
		if (kraj == ss[i] || kraj1 == ss[i])
			return 1;
	}
	return 0;
}

void ispis_random(vector <string>& vs, string s)
{

	cout << "Unesi string, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa: " << endl;
	while (getline(cin, s))
	{
		vs.push_back(s);
	}
	/*for (string x : vs)
		cout << x << endl;*/
	int n = vs.size();
	int random = rand() % n;
	string kraj;
	
	for (char x : vs[random])
	{
		if (x == ' ' || ispunct(x))
		{
			if (pomoc(kraj[0],kraj[1]))
			{
				kraj.push_back('h');
				kraj.push_back('a');
				kraj.push_back('y');
				cout << kraj;
			}
			else
			{
				sort(kraj.begin(), kraj.end());
				kraj.push_back('a');
				kraj.push_back('y');
				cout << kraj;
			}
			kraj.clear();
		}
		kraj.push_back(x);

	}
	for (char x : kraj)
		cout << x;
}



int main()
{
	string s;
	vector <string> vs;
	ispis_random(vs, s);
}