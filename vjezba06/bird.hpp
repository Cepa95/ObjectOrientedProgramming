#ifndef BIRD_H
#define BIRD_H
#include "animal.hpp"

class bird : public animal
{
protected:
	string name = "bird";
public:
	int get_legs();
	string get_species();
};

class sparrow : public bird
{
protected:
	string name = "vrabac";
	int legs = 2;
public:
	string get_species();
	int get_legs();
};





#endif