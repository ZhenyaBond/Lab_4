#pragma once
#include "Bouquet.h"


//Bouquet::Bouquet()
//{
//	cout << "Bouquet constructor\n";
//}
//
//Bouquet::Bouquet(int x)
//{
//	this->price = x;
//}
//
//void Bouquet::setBouquet(int price)
//{
//	this->price = price;
//}
//
//void Bouquet::getBouquet()
//{
//	cout << "\tThe price is: " << this->price << endl;
//	cout << "External class run method from nested class\n";
//	cout<<"\tDelivering is: "<<delivr.getDeliv()<<endl;
//}
//
//Bouquet::~Bouquet()
//{
//	cout << "Bouquet destructor\n";
//}
//
//void Bouquet::toConsole()
//{
//	cout << typeid(this).name() << " " << price << endl;
//}

int Bouquet::index = 0;
Bouquet *Bouquet::head = 0;
int Bouquet::numberOfFlowers = 0;
int Bouquet::total = 0;

void Bouquet::insert(Flower *x)
{
	if (!head)
	{
		head = x;
		head->next = NULL;
		head->prev = NULL;
		total = total+x->getPrice();
		index++;
	}
	else
	{
		Bouquet *temp = head;
		if (temp->next == NULL)
		{
			temp->next = x;
			x->next = NULL;
			x->prev = NULL;
			total = total + x->getPrice();
			index++;
		}
		else
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = x;
			x->next = NULL;
			x->prev = temp;
			total = total + x->getPrice();
			index++;
		}
	}
}

void Bouquet::remove(Flower *x)
{
	Bouquet *temp = head;
	Bouquet *cur = head;
	while (head)
	{
		if (x->getSize() > 28)
		{
			if (temp->next == NULL && temp->prev == NULL)
			{
				head->next = NULL;
				head->prev = NULL;
				head = NULL;
				total = 0;
				delete temp;
				index--;
				break;
			}
			else if (temp->prev == NULL && temp->next != NULL)
			{
				head = temp->next;
				temp->next->prev = NULL;
				head->next = temp->next->next;
				delete temp;
				index--;
				cur = head;
				while (cur)
				{
					total = total - x->getPrice();
					cur = cur->next;
				}
				index--;
				break;
			}
			else if (temp->next == NULL && temp->prev != NULL)
			{
				temp->prev->next = NULL;
				total = total - temp->getPrice(x);
				delete temp;
				index--;
				break;
			}
			else if (temp->next != NULL && temp->prev != NULL)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				delete temp;
				while (cur)
				{
					total = total - temp->getPrice(x);
					cur = cur->next;
				}
				index--;
				break;
			}
		}
		temp = temp->next;
	}
}

void Bouquet::print()
{
	Bouquet *temp = head;
	if (!head)
	{
		cout << "List is empty/n";
	}
	else
	{
		while (temp)
		{
			cout<<"The price is :/t"<<endl;
			temp = temp->next;
		}
	}
}

int Bouquet::getSize(Flower *x)
{
	return x->getSize();
}

void Bouquet::toConsole()
{
	cout << 1;
}




//************************************Controller*****************************//

int Controller::*findForStem(int x)
{
	Bouquet *temp = head;
}