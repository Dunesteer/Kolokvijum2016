#include "Datum.h"
#include <cstdlib>

Datum::Datum()
{
}

Datum::Datum(short d, short m, short g)
{
	dan = d;
	mesec = m;
	godina = g;
}

Datum::Datum(int i)
{
	dan = rand()%31+1;
	mesec = rand() % 12 + 1;
	godina = rand() % 10 + 2007;
}


Datum::~Datum()
{
}
