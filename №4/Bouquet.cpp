#include "Bouquet.h"


Bouquet::Bouquet()
{
	cout << "Bouquet constructor\n";
}

Bouquet::Bouquet(int x)
{
	this->price = x;
}

void Bouquet::setBouquet(int price)
{
	this->price = price;
}

void Bouquet::getBouquet()
{
	cout << "\tThe price is: " << this->price << endl;
	cout << "External class run method from nested class\n";
	cout<<"\tDelivering is: "<<delivr.getDeliv()<<endl;
}

Bouquet::~Bouquet()
{
	cout << "Bouquet destructor\n";
}

void Bouquet::toConsole()
{
	cout << typeid(this).name() << " " << price << endl;
}