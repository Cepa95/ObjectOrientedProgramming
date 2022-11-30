#include "animal.hpp"
#include "bird.hpp"

int bird::get_legs()
{
	return 0;
}

string bird::get_species()
{
	return name;
}

string sparrow::get_species()
{
	return name;
}

int sparrow::get_legs()
{
	return legs;
}