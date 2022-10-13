#include <iostream>

using namespace std;

void unos_ispis(int velicina, int niz[])
{
    for (int i = 0; i < velicina; i += 1)
    {
        cout << "Unesite " << i + 1 << ". element niza" << endl;
        cin >> niz[i];
    }



    for (int i = 0; i < velicina; i += 1)
    {
        for (int j = i + 1; j < velicina; j += 1)
        {

            if (niz[i] == niz[j])
            {

                for (int p = j; p < velicina - 1; p += 1)
                {
                    niz[p] = niz[p + 1];
                }
                velicina -= 1;
                j -= 1;

            }


        }
    }
    int* arr = new int[velicina];

    for (int i = 0; i < velicina; i += 1)
    {
        arr[i] = niz[i];
    }


    for (int i = 0; i < velicina; i += 1)
    {
        cout << arr[i] << "\t";
    }

    delete[]niz;
    delete[]arr;
}





int main()
{
    int velicina;
    cout << "Unesite duzinu niza:";
    cin >> velicina;
    int* niz = new int[velicina];
    unos_ispis(velicina, niz);

}

