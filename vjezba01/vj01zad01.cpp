#include <iostream>
using namespace std;

int& funkcija(int* niz, int velicina)
{
	for (int i = 0; i < velicina; i += 1)
	{
		if (niz[i] > 0)
		{
			niz[i] = 0;
			return  niz[i];
		}
	}

	return niz[0];
}

int main()
{
	int niz[] = { -1, -10, 50, -15, -11, -15 };
	int velicina = sizeof(niz) / sizeof(niz[0]);

	int referenca = funkcija(niz, velicina);

	if (referenca == 0)
	{

		for (int i = 0; i < velicina; i += 1)
		{
			cout << niz[i] << "\t";
		}

	}

}

