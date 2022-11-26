
#include "vector.hpp"

using namespace std;
using namespace OOP;



int main()
{
	Vec3 vector3, vec;
	//vector3.vector_set(10,23,30);
	cout << "Prvi vektor:\n";
	cin >> vector3;
	cout << vector3;
	vec = vector3;
	cout << "Drugi vektor:\n";
	cout << vec;

	cout << "Zbrajanje prvog i drugog vektora:\n";
	Vec3 vec_plus = vec + vector3;
	cout << vec_plus;

	cout << "Oduzimanje prvog vektora sa drugim vektorom:\n";
	Vec3 vec_minus = vector3 - vec;
	cout << vec_minus;

	cout << "Mnozenje dva vektora:\n";
	Vec3 vec_multiplication = vec * vector3;
	cout << vec_multiplication;

	cout << "Mnozenje sa skalarom:\n";
	float skalar;
	cout << "Unesite skalar: \n";
	cin >> skalar;
	Vec3 vec_multiplication_skalar = vec * skalar;
	cout << vec_multiplication_skalar;

	cout << "djeljenje sa skalarom:\n";
	cout << "Unesite skalar: \n";
	cin >> skalar;
	Vec3 vec_division_skalar = vec / skalar;
	cout << vec_division_skalar;

	cout << "Djeljenje dva vektora:\n";
	Vec3 vec_division = vec / vector3;
	cout << vec_division;

	cout << "Unesite broj s kojim zelite zbrojiti prvi vektor: \n";
	float num;
	cin >> num;
	vec += num;
	cout << "Prvi vektor zbrojen sa brojem " << num << ".\n";
	cout << vec;

	cout << "Unesite broj s kojim zelite oduzeti prvi vektor: \n";
	cin >> num;
	vec -= num;
	cout << "Prvi vektor umanjen sa brojem " << num << ".\n";
	cout << vec;

	cout << "Unesite broj s kojim zelite mnoziti prvi vektor: \n";
	cin >> num;
	vec *= num;
	cout << "Prvi vektor pomnozen sa brojem " << num << ".\n";
	cout << vec;

	cout << "Unesite broj s kojim zelite podijeliti prvi vektor: \n";
	cin >> num;
	vec /= num;
	cout << "Prvi vektor podjeljen sa brojem " << num << ".\n";
	cout << vec;

	if (vec == vector3)
	{
		cout << "Vektori su istovjetni" << endl;
	}

	if (vec != vector3)
	{
		cout << "Vektori nisu istovjetni" << endl;
	}
	
	cout << "Skalarni produkt:\n";
	Vec3 dot_product = vec * vector3;
	cout << dot_product.get_dot_product() << endl;

	cout << "Pristupanje x koordinati:\n";
	//cout << vec[1];
	cout << vec['x'] << endl;

	Vec3 normalization;
	cin >> normalization;
	normalization = normalization.member(normalization);
	cout << normalization;

}