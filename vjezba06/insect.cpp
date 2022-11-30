#include "animal.hpp"
#include "insect.hpp"

int insect::get_legs()
{
	return 0;
}

string insect::get_species()
{
	return name;
}

string cockroach::get_species()
{
	return name;
}

int cockroach::get_legs()
{
	return legs;
}

