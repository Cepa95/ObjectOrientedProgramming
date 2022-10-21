#include <iostream>
#include <string>
using namespace std;

int count_substrings()
{
	int counter = 0, pos = 0;
	string s1, s2;
	cout << "Upisite neki string:\n";
	getline(cin, s1);
	cout << "Upisite neki podstring:\n";
	getline(cin, s2);

	while ((pos = s1.find(s2, pos)) != string::npos)
	{

		counter += 1;
		pos += 1;
	}
	
	return counter;

}


int main()
{
	cout << "U stringu se ovaj substring moze pronaci " <<count_substrings()<< " put/puta.";
}


	
	
