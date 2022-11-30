#ifndef COUNTER_H
#define COUNTER_H
#include "animal.hpp"

class counter
{
private:
	int count = 0;

public:
	vector <string> animals;
	/*string get_species(animal& animal_kingdom) { return animal_kingdom.get_species(); }
	int get_legs(animal &animal_kingdom) {return animal_kingdom.get_legs();}*/
	vector <string> count_all(animal& animal_kingdom);
	int get_count() const { return count; }
};

#endif