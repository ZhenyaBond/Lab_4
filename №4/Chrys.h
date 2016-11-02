#pragma once
#include "Flower.h"


class Chrys: public Flower
{
public:
	Chrys();
	Chrys(int price,int size,int stem);
	int getStem();
	int getPrice();
	int getSize();
	~Chrys();
	void toConsole();
	void about();

private:
	int size,price,stem;
};