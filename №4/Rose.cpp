#include "Rose.h"


Rose::Rose()
{
	cout << "Rose constructor\n";
}

Rose::Rose(int price,int size,int stem)
{
	this->price = price;
	this->size = size;
	this->stem = stem;
}

int Rose::getStem()
{
	return this->stem;
}

int Rose::getSize()
{
	return this->size;
}

int Rose::getPrice()
{
	return this->price;
}


Rose::~Rose()
{
	std::cout << "Rose destructor\n";
}

void Rose::toConsole()
{
	cout << typeid(this).name() << " " << price << endl;
}

void Rose::about()
{
	cout << "The price is: " << this->getPrice() << endl;
	cout << "The size is: " << this->getSize() << endl;
	cout << "The stem is: " << this->getStem() << endl;
}