#include <iostream>
using namespace std;

class Stem
{
public:
	Stem();
	Stem(char *);
	void setStem(char* stem);
	void getStem() const;
	void toConsole();
	virtual void setNumber(int){ cout << 1; }
	~Stem();

private:
	char* stem;
};