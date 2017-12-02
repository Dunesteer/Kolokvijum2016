#include "Memorija.h"
#include <iostream>
using namespace std;


void Memorija::Zauzmimemoriju(int n)
{
	this->maxbrojelemenata = n;
	this->niz = new int [n];
	
}

void Memorija::Oslobodimemoriju()
{
	if (this->niz != 0)
		delete[]this->niz;
}

Memorija::Memorija(int element)
{
	Zauzmimemoriju(element);
}


Memorija::~Memorija()
{
	Oslobodimemoriju();
}

void Memorija::Print()
{
	cout << endl;
	for(int i=0;i<brUpisanih;i++)
	{
		cout << niz[i] << " ";
	}
	cout << endl;
}


//int Memorija::Pop()
//{
//	if (brUpisanih > 0)
//	{
//		int pom = niz[0];
//		for (int i = 0; i < brUpisanih-1; i++)
//		{
//			niz[i] = niz[i + 1];
//		}
//		brUpisanih--;
//		return pom;
//	}
//}
