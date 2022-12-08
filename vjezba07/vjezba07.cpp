#include "exceptions.hpp"

Exceptions :: ~Exceptions() {}


int main()
{
	vector <string> vs;
	time_t tt;
	struct tm* ti;

	while (1)
	{
		try
		{
			string first;
			cout << "Unesite prvi broj: ";
			cin >> first;
			int first_num = put_number(first);
			cout << first_num << endl;

			char operation;
			cout << "Unesite neki od ovih operatora (+,-,*,/):" << endl;;
			cin >> operation;
			char op = put_operator(operation);

			string second;
			cout << "Unesite drugi broj:" << endl;
			cin >> second;
			int second_num = put_number(second);

			int res_operation = result(put_number(first), put_operator(operation), put_number(second));
			cout << put_number(first) << put_operator(operation) << put_number(second) << '=' << res_operation << endl;
		}

		catch (Exceptions& exception)
		{
			time(&tt);
			ti = localtime(&tt);
			vs.push_back(asctime(ti));
			vs.push_back(exception.get_message());
			break;
		}
	}
	cout << endl;
	for (string s : vs)
	{
		cout << s;
	}
	return 0;
}
