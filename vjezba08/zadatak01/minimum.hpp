#include <iostream>
#include <string.h>

using namespace std;

template <class T>
T minimum(T first, T second)
{
	return first >= second ? second : first;
}

template<>
string minimum<string>(string first, string second)
{
	int m = first.length();
	int n = second.length();
	return first >= second ? second : first;
}