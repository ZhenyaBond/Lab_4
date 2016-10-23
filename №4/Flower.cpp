#include "Flower.h"


int Flower::objectCounter = 0;

Flower::Flower()
{
	objectCounter++;
	cout << "Flower constructor\n";
}

Flower::Flower(char *x)
{
	this->name = x;
}

int Flower::getCounter()
{
	return objectCounter;
}

void Flower::setFlower(char *name)
{
	this->name = name;
}

void Flower::getFlower()
{
	cout << "\tThe flower is: " << this->name << endl;
}

Flower::~Flower()
{
	cout << "Flower destructor\n";
}

void Flower::toConsole()
{
	cout << typeid(this).name() << " " << name << endl;
}

void Flower::addStem(char *newStem)
{
	stem.setStem(newStem);
	stem.getStem();
}