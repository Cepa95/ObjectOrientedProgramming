#include "zivotinja.hpp"

animal :: ~animal() {}

int main()
{
	/*animal* ptrspider;
	spider spider1;
	ptrspider = &spider1;
	cout << ptrspider->get_species() << endl;

	spider* ptrspider1;
	tarantula tarantula1;
	ptrspider1 = &tarantula1;
	cout << ptrspider1->get_species() << "-> number of legs: " << ptrspider1->get_legs() << endl;*/

	//tarantula t;
	//cout << t.get_legs();

	vector <string> animals;
	//counter cc;

	counter count;
	tarantula pauk;
	cockroach zohar;
	sparrow vrabac;

	//cout << cc.get_species(pauk) << endl;

	animals = count.count_all(pauk);
	animals = count.count_all(zohar);
	animals = count.count_all(vrabac);

	for (string s : animals)
	{
		cout << "dodan: " << s << endl;
	}
	cout << "Ukupan broj nogu: " << count.get_count();

	return 0;
}