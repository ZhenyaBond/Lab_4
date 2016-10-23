#include "Stem.h"

Stem::Stem()
{
	cout << "Stem constructor\n";
}

Stem::Stem(char *x)
{
	this->stem = x;
}

void Stem::setStem(char *stem)
{
	this->stem = stem;
}

void Stem::getStem() const
{
	cout << "\tThe stem is: " << this->stem << endl;
}

Stem::~Stem()
{
	cout << "Stem destructor\n";
}

void Stem::toConsole()
{
	cout << typeid(this).name() << " " << stem << endl;
}