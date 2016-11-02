#include "Chrys.h"


Chrys::Chrys()
{
	std::cout << "Chrys constructor\n";
}

Chrys::Chrys(int price, int size, int stem)
{
	this->price = price;
	this->size = size;
	this->stem = stem;
}

int Chrys::getStem()
{
	return this->stem;
}

int Chrys::getPrice()
{
	return this->price;
}
int Chrys::getSize()
{
	return this->size;
}

Chrys::~Chrys()
{
	std::cout << "Chrys destructor\n";
}

void Chrys::toConsole()
{
	cout << typeid(this).name() << " " << price << endl;
}

void Chrys::about()
{
	cout << "The price is: " << this->getPrice() << endl;
	cout << "The size is: " << this->getSize() << endl;
	cout << "The stem is: " << this->getStem() << endl;
}
