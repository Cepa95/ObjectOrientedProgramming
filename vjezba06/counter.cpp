#include "animal.hpp"
#include "counter.hpp"

vector <string> counter::count_all(animal& animal_kingdom)
{
	count += animal_kingdom.get_legs();
	animals.push_back(animal_kingdom.get_species());
	return animals;
}

