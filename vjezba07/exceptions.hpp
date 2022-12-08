#pragma once
#include <iostream>
#include <vector>
#include <ctype.h>
#include <string>
#include <ctime>

using namespace std;

class Exceptions
{
public:
	virtual string get_message() = 0;
	virtual ~Exceptions() = 0;
};

class NotANumber : public Exceptions
{
public:
	string get_message(){return "Not a number";}

};

class ZeroDivision : public Exceptions
{
public:
	string get_message(){return "Divided by zero";}
};


class InvalidOperation : public Exceptions
{
public:
	string get_message(){return "Invalid operation";}
};

int put_number(const string& num);
char put_operator(char operation);
int result(int first, char operation, int second);
