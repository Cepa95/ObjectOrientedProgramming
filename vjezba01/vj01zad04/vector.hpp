
#include <cstddef>
#include <iostream>


using namespace std;

struct Vektor
{
    int logicka_razina;
    int fizicka_razina;
    int* niz;

    void vector_new(int fizicka);
    void vector_push_back(int umetni_push);
    void vector_pop_back();
    int& vector_front();
    int& vector_back();
    int vector_size();
    void vector_delete();
};

