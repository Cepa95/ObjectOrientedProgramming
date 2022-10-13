#include <iostream>

using namespace std;


int* niz(int arr[], int velicina)
{

	for (int i = 0; i < velicina; i += 1)
	{
		cout << "Unesite " << i + 1 << ". element niza" << endl;
		cin >> arr[i];
	}
	arr[0] = 0;
	arr[1] = 1;

	for (int i = velicina; velicina >= 2; velicina -= 1)
	{
		arr[velicina] = arr[velicina - 1] + arr[velicina - 2];

	}

	return arr;
}


int main()
{
	int velicina = 10;
	int* arr;
	arr = new int[velicina + 1];


	int* ptr;
	ptr = niz(arr, velicina);

	for (int i = 0; i < velicina; i += 1)
	{
		cout << ptr[i] << " ";
	}
	delete[] arr;
	arr = 0;

}