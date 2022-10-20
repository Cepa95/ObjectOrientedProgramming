
#include "vector.hpp"



    void Vektor::vector_new(int fizicka)
    {
       
        logicka_razina = 0;
        fizicka_razina = fizicka;
        niz = new int[fizicka_razina];

    }


    void Vektor::vector_push_back(int umetni_push) {
        if (logicka_razina >= fizicka_razina)
        {
            fizicka_razina *= 2;
            int* niz1 = new int[fizicka_razina];
            for (int j = 0; j < logicka_razina; j += 1)
            {
                niz1[j] = niz[j];
            }
            niz = new int[fizicka_razina];
            for (int c = 0; c < logicka_razina; c += 1)
            {
                niz[c] = niz1[c];

            }
            delete[]niz1;
            niz1 = 0;
            niz[logicka_razina] = umetni_push;
       
            cout << endl;
            logicka_razina += 1;
            cout << "logicka razina: " << logicka_razina << endl;
            cout << "fizicka razina: " << fizicka_razina << endl;




        }
        else
        {
            niz[logicka_razina] = umetni_push;
            logicka_razina += 1;
        }
    }


    void Vektor::vector_pop_back()
    {
        logicka_razina -= 1;
        cout << endl;
        
        cout << "niz bez prvog elementa: ";
        int j = 1;
        for (int i = 0; i < logicka_razina; i += 1)
        {
            
                niz[i] = niz[j];
                j += 1;
                cout << niz[i] << " ";
            
        }
        cout << "\n";

    }
    int& Vektor::vector_front()
    {
        return niz[0];

    }
    int& Vektor::vector_back()
    {
        return niz[logicka_razina - 1];

    }
    int Vektor::vector_size()
    {
        return logicka_razina;
    }

    void Vektor::vector_delete()
    {
        logicka_razina = 0;
        fizicka_razina = 0;
        delete[] niz;
        niz = 0;
    }
   
