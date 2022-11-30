#ifndef SPIDER_H
#define SPIDER_H
#include "animal.hpp"

class spider : public animal
{
protected:
	string name = "spider";
public:
	int get_legs();
	string get_species();
};

class tarantula : public spider
{
protected:
	string name = "tarantula";
	int legs = 8;
public:
	string get_species();
	int get_legs();
};
#endif