#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector <string> preokreni_i_sortiraj(vector <string>& vs, string s)
{
	cout << "Unesi string, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
	while (cin >> s)
	{
		reverse(s.begin(), s.end());
		vs.push_back(s);
		
	}
	/*for (string x : vs)
		cout << x << " ";
	cout << endl;*/
	reverse(vs.begin(), vs.end());
	/*for (string x : vs)
		cout << x << " ";
	cout << endl;
	for (string x : vs)
		cout << x << " ";*/
	sort(vs.begin(), vs.end());

	return vs;
}

int main()
{
	string s;
	vector <string> vs, vstr;
	vstr= preokreni_i_sortiraj(vs, s);

	for (string x : vstr)
		cout << x << " ";
}