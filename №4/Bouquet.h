#pragma once
#include <typeinfo>
#include "Rose.h"
#include "Chrys.h"

class Bouquet 
{
//private:
//	int price;
//public:
//	class Delivering
//	{
//	private:
//		char* deliv;
//	public:
//		Delivering() : deliv("fast") {}
//		void getB(Bouquet x){ x.getBouquet();}
//		char* getDeliv()	{ return deliv; }
//	};
//	Delivering delivr;
//	Bouquet();
//	Bouquet(int);
//	void setBouquet(int price);
//	void getBouquet();
//	~Bouquet();
//	void toConsole();
private:
	Bouquet *next;
	Bouquet *prev;
	static int index;
	static int numberOfFlowers;
	static int total;
protected:
	static Bouquet *head;
public:
	static void insert(Flower*);
	static void remove(Flower*);
	static void print();
	static Bouquet *getElement(int);
	void toConsole();
	int getSize(Flower*);
	int getPrice(Flower*);
};


class Controller : public Bouquet
{
public:
	void toConsole();
	int getSize();
	int getPrice();

	void sortForSize();
	Bouquet *findForStem(int);
};