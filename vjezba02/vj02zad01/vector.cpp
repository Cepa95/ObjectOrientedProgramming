#include <iostream>
#include <vector>
#include "vector.hpp"
using namespace std;


vector<int> unos_vektora(vector<int>& v, int n)

{

    int element;
    for (int i = 0; i < n; i++)

    {
        cout << "Unesite " << i + 1 << ". element vektora: ";
        cin >> element;
        v.push_back(element);

    }
    cout << endl;
    return v;
}

vector<int> unos_vektora_granica(vector<int>& vv, int prvi, int drugi)
{
    int element, i = 1;
    while (1)
    {
        cout << "Unesite 1. element niza: ";
        cin >> element;
        if (element > prvi && element < drugi)
        {
            i += 1;
            vv.push_back(element);
        }
        else
        {
            break;
        }
    }
    cout << endl;
    return vv;
}


void ispis_vektora(vector<int>& v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;

}