#include <iostream>
using namespace std;

int funkcija(int* niz, int velicina, int& nula)
{
	nula = 0;
	for (int i = 0; i < velicina; i += 1)
	{
		if (niz[i] > 0)
		{

			nula = i;
			return i;
		}
	}
	cout << "U nizu nema elementa veceg od 0" << endl;
	return NULL;

}

int main()
{
	int niz[] = { -1, -10, -50, -15, -11, -15 };
	int velicina = sizeof(niz) / sizeof(niz[0]);
	int nula;
	int referenca_nula = funkcija(niz, velicina, nula);
	niz[referenca_nula] = 0;
	if (referenca_nula != NULL)
	{
		for (int i = 0; i < velicina; i += 1)
		{
			cout << niz[i] << "\t";
		}
	}

}

