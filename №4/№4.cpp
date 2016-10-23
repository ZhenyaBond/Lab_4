#include "Printer.h"
#define end cout<<"\n";

void main()
{
	

	Rose c;
	cout<<"The number of counters is: "<<c.getCounter()<<endl;
	c.setFlower("Rose");
	c.getFlower();
	c.addStem("thin");
	c.setColor("red");
	c.getColor();
	c.toConsole();
	cout << "---------------\n";
	end;

	Chrys x;
	cout << "The number of counters is: " << x.getCounter() << endl;
	x.setFlower("Chrysanthemum");
	x.getFlower();
	x.addStem("fat");
	x.setNumFlo(5);
	x.getNumFlo();
	x.toConsole(); cout << "---------------\n";
	end;

	Bouquet Flor;

	cout << "The number of counters is: " << Flor.getCounter() << endl;
	Flor.setBouquet(100);
	Flor.getBouquet();
	cout << "---------------\n";
	Bouquet::Delivering q;
	cout << "Nested class run method from external class\n";
	q.getB(Flor);
	cout << "---------------\n";
	Flor.toConsole();
	cout << "---------------\n";
	Flower *one = new Flower("kfvk"),*pone, *ppone; end;
	Rose *two = new Rose("white"), *ptwo; end;
	Chrys *three = new Chrys(10); end;
	Stem *four = new Stem("small"); end;
	Bouquet *five = new Bouquet(150), *pfive; end;
	Printer all;
	end; cout << "---------------\n";
	all.iAmPrinting(one);
	end;
	all.iAmPrinting(two);
	end;
	all.iAmPrinting(three);
	end;
	all.iAmPrinting(four);
	end;
	//all.iAmPrinting(five);
	end;
	cout << "---------------\n";
	cout << "\tDynamic cast\n";
	pone = dynamic_cast<Flower *> (two);//upcast из производного в базовый
	if (pone)
		cout << "From Rose* to Flower*: OK\n";
	else
		cout << "From Rose* to Flower*: bad_cast\n";

	ptwo = dynamic_cast<Rose *> (one);//downcast из базового в производный
	if (ptwo)
		cout << "From Flower* to Rose*: OK\n";
	else
		cout << "From Flower* to Rose*: bad_cast\n";
	ppone = dynamic_cast<Flower *>(four);
	if (ppone)
		cout << "From Flower* to Bouquet*: OK\n";
	else
		cout << "From Flower* to Bouquet*: bad_cast\n";
	cout << "\tStatic cast\n";
	int p;
	double w = 2.456;
	p = static_cast<int>(w);
	cout << p; end; end;
	delete one, two, three, four;

} 