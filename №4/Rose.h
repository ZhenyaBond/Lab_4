#include "Flower.h"


class Rose : public Flower
{
public:
	Rose();
	Rose(char *);
	void setColor(char *color);
	void getColor();
	~Rose();
	void toConsole();

private:
	char *color;
};