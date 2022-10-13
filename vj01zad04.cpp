#include <iostream>
#include <vector>

using namespace std;

struct Vektor
{
    int logicka_razina;
    int fizicka_razina;
    int* niz;

    void vector_new(int fizicka, int* broj)
    {

        logicka_razina = 0;
        fizicka_razina = fizicka;

        niz = new int[fizicka_razina];
        cout << "fizicki inicirani niz:\n";
        for (int i = 0; i < fizicka_razina; i += 1)
        {
            cout << "Unesite " << i + 1 << ". element\n";
            cin >> *broj;
            niz[i] = *broj;
            logicka_razina += 1;

        }
        for (int i = 0; i < fizicka_razina; i += 1)
        {
            cout << niz[i] << "\t";
        }
        cout << endl;


    }
    void vector_push_back(int umetni_push) {
        if (logicka_razina >= fizicka_razina)
        {
            fizicka_razina *= 2;
            int* niz1 = new int[fizicka_razina];
            for (int j = 0; j < fizicka_razina; j += 1)
            {
                niz1[j] = niz[j];
            }
            niz = new int[fizicka_razina];
            for (int c = 0; c < logicka_razina; c += 1)
            {
                niz[c] = niz1[c];

            }
            delete[]niz1;
            int i = 0;
            cout << "Niz sa push elementom: ";
            for (i = 0; i < logicka_razina; i += 1)
            {
                cout << niz[i] << "\t";
            }
            niz[i] = umetni_push;
            cout << niz[i] << "\t";
            cout << endl;
            cout << "logicka razina: " << logicka_razina << endl;
            cout << "fizicka razina: " << fizicka_razina << endl;




        }
        else
        {
            niz[fizicka_razina] = umetni_push;
            logicka_razina += 1;
        }
    }


    void vector_pop_back()
    {
        niz[logicka_razina] = NULL;
        cout << endl;
        cout << "niz bez zadnjeg elementa: ";
        for (int i = 0; i < logicka_razina; i += 1)
        {
            cout << niz[i] << "\t";
        }


    }
    void vector_front()
    {
        cout << endl;
        cout << "Prvi element niza je:" << niz[0] << endl;

    }
    void vector_back()
    {
        cout << "Zadnji element niza je:" << niz[logicka_razina - 1] << endl;

    }
    void vector_size()
    {
        cout << "Duljina niza iznosi: " << logicka_razina << endl;
    }


    void vector_delete()
    {
        logicka_razina = 0;
        fizicka_razina = 0;
        delete[] niz;
        niz = 0;
    }

};


int main()
{
    struct Vektor v;
    int fizicka = 5;
    int broj;
    int umetni_push = 15;


    v.vector_new(fizicka, &broj);
    v.vector_push_back(umetni_push);
    v.vector_pop_back();
    v.vector_front();
    v.vector_back();
    v.vector_size();
    v.vector_delete();



    vector<int>vec = { 1,2,3,4,5,6,7 };
    vec.push_back(10);
    cout << "v = { ";
    for (int n : vec) {
        cout << n << ", ";
    }
    cout << "} \n";
    vec.pop_back();
    cout << "v = { ";
    for (int n : vec)
    {
        cout << n << ", ";
    }
    cout << "} \n";
    if (!vec.empty())
    {
        cout << "prvi element vektora je: " << vec.front() << "\n";
    }
    if (!vec.empty())
    {
        cout << "zadnji element vektora je: " << vec.back() << "\n";
    }
    cout << "velicina vektora je: " << vec.size() << "\n";
    vec.clear();
    if (vec.empty())
    {
        cout << "Vektor je izbrisan.\n";
    }
}