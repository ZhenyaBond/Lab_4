#include "Rose.h"


Rose::Rose()
{
	std::cout << "Rose constructor\n";
}

Rose::Rose(char *x)
{
	this->color = x;
}

void Rose::setColor(char *color)
{
	this->color = color;
}

void Rose::getColor()
{
	std::cout << "\tThe color is: " << this->color << endl;
}

Rose::~Rose()
{
	std::cout << "Rose destructor\n";
}

void Rose::toConsole()
{
	cout << typeid(this).name() << " " << color << endl;
}