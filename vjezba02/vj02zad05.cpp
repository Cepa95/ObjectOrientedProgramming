#include <iostream>
#include <string>

using namespace std;

string regular(string s, int n)
{
	for (int i = 0; i < n; i += 1)
	{

		if (ispunct(s[i + 1]) && isspace(s[i]))
		{
			s.erase(i, 1);
			n -= 1;
		}
		if (ispunct(s[i + 1]) && ispunct(s[i]))
		{
			s.erase(i, 1);
			n -= 1;
		}
		if (isspace(s[i + 1]) && isspace(s[i]))
		{
			s.erase(i, 1);
			n -= 1;
		}
		if (ispunct(s[i]) && !isspace(s[i + 1]))
		{
			s.insert(i + 1, " ");
			n += 1;
		}

	}
	return s;
}

int main()
{
	string s,str;
	cout << "Ucitajte neki string:\n";
	getline(cin, s);
	int n = s.length();
	str=regular(s, n);

	for (char x : str)
		cout << x;
}
