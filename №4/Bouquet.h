#include "Rose.h"
#include "Chrys.h"


class Bouquet : public Rose, public Chrys
{
private:
	int price;
public:
	class Delivering
	{
	private:
		char* deliv;
	public:
		Delivering() : deliv("fast") {}
		void getB(Bouquet x){ x.getBouquet();}
		char* getDeliv()	{ return deliv; }
	};
	Delivering delivr;
	Bouquet();
	Bouquet(int);
	void setBouquet(int price);
	void getBouquet();
	~Bouquet();
	void toConsole();
};