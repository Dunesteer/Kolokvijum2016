#include "Dzungla.h"
#include "Biljke.h"
#include "Biljojedi.h"
#include "Mesojedi.h"
#include <cstdlib>
#include <ostream>
#include <iostream>

void main()
{
	int dim = 10;
	int brB = 20;

	Dzungla *d = new Dzungla(dim);

	for (int i = 0; i < brB; i++)
	{
		int c = rand() % 3;
		int j = rand() % dim;
		int k = rand() % dim;
		switch (c)
		{
			case 0:
			{
				d->Add(j, k, new Biljke(d, j, k));
			}break;
			case 1:
			{
				d->Add(j, k, new Biljojedi(d, j, k));
			}break;
			case 2:
			{
				d->Add(j, k, new Mesojedi(d, j, k));
			}break;
		}
	}
	d->Print();

	d->PojediBiljke();
	d->PojediBiljkojede();
	std::cout << std::endl;
	d->Print();
}
