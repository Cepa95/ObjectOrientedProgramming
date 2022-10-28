#include <iostream>
#include <random>
#include<math.h>

using namespace std;


class pozicija_tocka
{
    double x;
    double y;
    double z;

public:

    void vrijednost_xyz(double x_os, double y_os, double z_os)
    {
            x = x_os,
            y = y_os,
            z = z_os;
    }
    void pseudorandom(double min_interval, double max_interval)
    {

        x = min_interval + (double)(rand()) / ((double)(RAND_MAX / (max_interval - min_interval)));
        y = min_interval + (double)(rand()) / ((double)(RAND_MAX / (max_interval - min_interval)));
        z = min_interval + (double)(rand()) / ((double)(RAND_MAX / (max_interval - min_interval)));
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }

    double dohvati_vrijednost_x() const
    {
        return x;
    }
    double dohvati_vrijednost_y() const
    {
        return y;
    }
    double dohvati_vrijednost_z() const
    {
        return z;
    }

    double udaljenost_dva_d(pozicija_tocka tocka1, pozicija_tocka tocka2)
    {
        double udaljenost;
        double x_udaljenost = abs(tocka1.x - tocka2.x); // toni milun
        double y_udaljenost = abs(tocka1.y - tocka2.y);
        udaljenost = sqrt(pow(x_udaljenost, 2) + pow(y_udaljenost, 2)); //Euklidska udaljenost tocke
        return udaljenost;
    }

    double udaljenost_tri_d(pozicija_tocka tocka1, pozicija_tocka tocka2)
    {
        double udaljenost3d;
        double x_udaljenost3d = abs(tocka1.x - tocka2.x); 
        double y_udaljenost3d = abs(tocka1.y - tocka2.y);
        double z_udaljenost3d = abs(tocka1.z - tocka2.z);
        udaljenost3d = sqrt(pow(x_udaljenost3d, 2) + pow(y_udaljenost3d, 2) + pow(z_udaljenost3d, 2));
        return udaljenost3d;
    }

};

class oruzje
{
public:
    pozicija_tocka polozaj;
    double polozaj1 = 1;
    double polozaj2 = 360;

    void odredi_polozaj()
    {
        polozaj.pseudorandom(polozaj1, polozaj2);
    }

    const int broj_metaka = 12;
    int trenutni_broj_metaka = broj_metaka;

    pozicija_tocka pucanje()
    {
        polozaj.pseudorandom(polozaj1, polozaj2);

        cout << "x polozaj pucanje provjera: " << polozaj.dohvati_vrijednost_x() << endl;
        cout << "y polozaj pucanje provjera: " << polozaj.dohvati_vrijednost_y() << endl;
        cout << endl;
        trenutni_broj_metaka -= 1;
        return polozaj;
    }
    void punjenje()
    {
        trenutni_broj_metaka = broj_metaka;
    }

};

class meta
{
public:
    pozicija_tocka donja_liva;
    pozicija_tocka gornja_desna;
    int stanje(pozicija_tocka polozaj3, int n_meta)
    {
        
        for (int i = 0; i < n_meta; i += 1)
        {
           
            donja_liva.pseudorandom(1, 100); // kvadrovi pokazuju 6 random brojeva
            gornja_desna.pseudorandom(150, 250);

            cout << "donja_liva.x provjera: " << donja_liva.dohvati_vrijednost_x() << endl;
            cout << "gornja_desna.x provjera: " << gornja_desna.dohvati_vrijednost_x() << endl;
            cout << "donja_liva.y provjera: " << donja_liva.dohvati_vrijednost_y() << endl;
            cout << "gornja_desna.y provjera: " << gornja_desna.dohvati_vrijednost_y() << endl;
            cout << endl;
            
                if ((polozaj3.dohvati_vrijednost_x() > donja_liva.dohvati_vrijednost_x() && polozaj3.dohvati_vrijednost_x() < gornja_desna.dohvati_vrijednost_x()) && (polozaj3.dohvati_vrijednost_y() > donja_liva.dohvati_vrijednost_y() && polozaj3.dohvati_vrijednost_y() < gornja_desna.dohvati_vrijednost_y()))
                {
                    cout << "Ovaj metak je pogodio jednu od n generiranih meta.\n" << endl;
                    return 1; // pogodeno stanje, unutar potrebnih parametara, idi na daljne generirane mete
                }
        
        }
        cout << "Ovaj metak nije pogodio jednu od n generiranih meta.\n" << endl;
        return 0;
    }

};

int main()
{
    pozicija_tocka pozicija;

    pozicija.vrijednost_xyz(0, 0, 0);
    double min_interval, max_interval;
    cout << "Upisite donju granicu intervala: ";
    cin >> min_interval;
    cout << "Upisite gornju granicu intervala: ";
    cin >> max_interval;
    pozicija.pseudorandom(min_interval, max_interval);
    //cout << pozicija.dohvati_vrijednost_x() << endl;

      pozicija_tocka tocka1, tocka2;
      cout << "Upisite donju granicu intervala tocka1: ";
      cin >> min_interval;
      cout << "Upisite gornju granicu intervala tocka1: ";
      cin >> max_interval;
      tocka1.pseudorandom(min_interval, max_interval);

      cout << "Upisite donju granicu intervala tocka2: ";
      cin >> min_interval;
      cout << "Upisite gornju granicu intervala tocka2: ";
      cin >> max_interval;
      tocka2.pseudorandom(min_interval, max_interval);
      double poz2 = pozicija.udaljenost_dva_d(tocka1, tocka2);
      cout << endl;
      cout << "Udaljenost do druge tocke u 2D ravnini: " << poz2 << endl;
      cout << endl;
      //cout << tocka1.x << " " << tocka2.x << endl;
      double poz3 = pozicija.udaljenost_tri_d(tocka1, tocka2);
      cout << "Udaljenost do druge tocke u 3D prostoru: " << poz3 << endl;
      cout << endl;
    oruzje pistolj;
    //pistolj.pucanje();
    meta kvadar;
   
    int pogodak = 0;
    int n_generiranih_meta = 3;
    while (pistolj.trenutni_broj_metaka != 0)
    {
       
        if (kvadar.stanje(pistolj.pucanje(), n_generiranih_meta) == 1) // pucanje pokazuje tri koordinate, 2 potrebne
        {
            pogodak += 1;
        }

    }
    cout << "\nMeta je pogodena " << pogodak << " puta." << endl;

}
