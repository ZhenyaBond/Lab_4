#pragma once
#include <iostream>
#include "Bouquet.h"
#include "Stem.h"
using namespace std;


class Flower: public Bouquet
{
public:
	Flower();
	Flower(char *);
	void setFlower(char* name);
	void getFlower();
	virtual int getSize() = 0;
	virtual int getPrice() = 0;
	~Flower();
	virtual void toConsole()=0;
	//virtual void about() = 0;
	static int getCounter();
	void addStem(char *newStem);


private:
	char* name;
	static int objectCounter;
	Stem *stem;
};