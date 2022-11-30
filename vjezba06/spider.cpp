#include "animal.hpp"
#include "spider.hpp"

int spider::get_legs()
{
	return 0;
}

string spider::get_species()
{
	return name;
}

string tarantula::get_species()
{
	return name;
}

int tarantula::get_legs()
{
	return legs;
}
