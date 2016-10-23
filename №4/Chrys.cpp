#include "Chrys.h"


Chrys::Chrys()
{
	std::cout << "Chrys constructor\n";
}

Chrys::Chrys(int x)
{
	this->num = x;
}

void Chrys::setNumFlo(int num)
{
	this->num = num;
}

void Chrys::getNumFlo()
{
	std::cout << "\tThe number is: " << this->num << endl;
}

Chrys::~Chrys()
{
	std::cout << "Chrys destructor\n";
}

void Chrys::toConsole()
{
	cout << typeid(this).name() << " " << num << endl;
}
