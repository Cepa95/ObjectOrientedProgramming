#include "exceptions.hpp"


int put_number(const string& num)
{
	for (char const& c : num)
	{
		if (num[0] == '-' && isdigit(num[1]))
		{
			continue;
		}
		if (isdigit(c) == 0)
		{
			throw NotANumber();
		}
	}
	return stoi(num);
}

char put_operator(char operation)
{
	string operators = "-+*/";
	if (operators.find(operation) == string::npos)
	{
		throw InvalidOperation();
	}
	return operation;
}

int result(int first, char operation, int second)
{
	if (second == 0)
	{
		throw ZeroDivision();
	}
	else if (operation == '+')
	{
		return (first + second);
	}
	else if (operation == '-')
	{
		return (first - second);
	}
	else if (operation == '*')
	{
		return (first * second);
	}
	else if (operation == '/')
	{
		return (first / second);
	}
}


