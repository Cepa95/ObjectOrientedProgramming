#ifndef ZIVOTINJA_H
#define ZIVOTINJA_H

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

class spider : public animal
{
protected:
	string name = "spider";
public:
	int get_legs();
	string get_species();

};

class insect : public animal
{
protected:
	string name = "insect";
public:
	int get_legs();
	string get_species();
};

class bird : public animal
{
protected:
	string name = "bird";
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

class cockroach : public insect
{
protected:
	string name = "zohar";
	int legs = 6;
public:
	string get_species();
	int get_legs();
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

class counter
{
private:
	int count = 0;

public:
	vector <string> animals;
	/*string get_species(animal& animal_kingdom) { return animal_kingdom.get_species(); }
	int get_legs(animal &animal_kingdom) {return animal_kingdom.get_legs();}*/
	vector <string> count_all(animal& animal_kingdom);
	int get_count() const{ return count; }
};

#endif