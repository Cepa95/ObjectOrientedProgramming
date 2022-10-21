#include <iostream>
#include <vector>
#include "vector.hpp"

using namespace std;


int main()
{
    int n=5, prvi=5,drugi=20;
    vector<int>v;
    vector<int>vv;
    unos_vektora(v,n);
    unos_vektora_granica(vv, prvi, drugi);
    ispis_vektora(v);
    ispis_vektora(vv);
}