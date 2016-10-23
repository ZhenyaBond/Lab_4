#include "Flower.h"


class Chrys : public Flower
{
public:
	Chrys();
	Chrys(int);
	void setNumFlo(int num);
	void getNumFlo();
	~Chrys();
	void toConsole();

private:
	int num;
};