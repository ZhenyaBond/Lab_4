#include "Bouquet.h"
#include <typeinfo>

class Printer : public Bouquet
{
public:
	void iAmPrinting(Seed *obj)
	{
		cout << typeid(obj).name() << endl;
		obj->toConsole();
	}
};