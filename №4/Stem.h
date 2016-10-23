#include <iostream>
#include "Seed.h"
using namespace std;

class Stem: public Seed
{
public:
	Stem();
	Stem(char *);
	void setStem(char* stem);
	void getStem() const;
	void toConsole();
	~Stem();

private:
	char* stem;
};