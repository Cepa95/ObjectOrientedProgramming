#include <iostream>
#include "vector.hpp"
using namespace std;


int main()
{
    Vektor v;
   
    int umetni_push;
    v.vector_new(5);

    cout << "Unesi element, Ctrl+d (linux) ili Ctrl+z (win) za kraj unosa" << endl;
    while (cin >> umetni_push)
    {
        v.vector_push_back(umetni_push);
    }

    v.vector_pop_back();
    cout << "Prvi element niza je: " << v.vector_front() << endl;
    cout << "Zadnji element niza je: " << v.vector_back() << endl;
    cout << "Duljina niza iznosi: " << v.vector_size() << endl;
    v.vector_delete();

}
