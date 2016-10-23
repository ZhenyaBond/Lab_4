#pragma once
#include <iostream>
#include "Stem.h"
#include "Seed.h"
using namespace std;


class Flower: public Seed
{
public:
	Flower();
	Flower(char *);
	void setFlower(char* name);
	void getFlower();
	~Flower();
	void toConsole();//переопределение для создания объекта класса Flower, иначе Flower - абстрактный.
	static int getCounter();
	void addStem(char *newStem);

private:
	char* name;
	static int objectCounter;
	Stem stem;
};



class Bush: protected Flower
{
public: const int age=1;
		Bush();
		Bush(int x)
		{
			this->type = x;
		}
		void toConsole() {}
		int getAge() const
		{
			return age;
		}
protected: int type;
};

class Tree : public Bush
{
private: int year;
public:
	void toConsole() { }
	Tree();
	int getYear()
	{
	return (2016 - (age));
	};
	int getType()
	{
	return type;
	};
};