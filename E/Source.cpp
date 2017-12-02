#include "Pumpa.h"
#include "Zapisoprekidima.h"
#include "Zapisoradu.h"

void main() {
	Pumpa p1(10, 1.5);
	Pumpa *p2 = new Pumpa(10, 7);

	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0) 
		{
			p1.Add(new Zapisoradu(2, 1, 0.1));
			p2->Add(new Zapisoradu(2, 1, 0.2));
		}
		else 
		{
			p1.Add(new Zapisoprekidima(2, 2, "Prekid"));
			p2->Add(new Zapisoprekidima(2, 2, "Prekid"));
		}
	}

	double is = p1.IspumpanaVoda();
	double prosek = p1.ProsecniProtok();

	delete p2;
}