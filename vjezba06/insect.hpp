#ifndef INSECT_H
#define INSECT_H
#include "animal.hpp"

class insect : public animal
{
protected:
	string name = "insect";
public:
	int get_legs();
	string get_species();
};

class cockroach : public insect
{
protected:
	string name = "zohar";
	int legs = 6;
public:
	string get_species();
	int get_legs();
};

#endif