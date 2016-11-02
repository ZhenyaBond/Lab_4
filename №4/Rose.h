#pragma once
#include "Flower.h"


class Rose: public Flower
{
public:
	Rose();
	Rose(int price,int size,int stem);
	int getSize();
	int getPrice();
	int getStem();
	~Rose();
	void toConsole();
	void about();


private:
	int size, price, stem;
};