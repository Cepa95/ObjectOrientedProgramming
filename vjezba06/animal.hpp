#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <vector>

using namespace std;

class animal
{
public:
	virtual int get_legs() = 0;
	virtual string get_species() = 0;
	virtual ~animal() = 0;
};

#endif