#include "Zapis.h"


Zapis::Zapis(double vreme,short t)
{
	vremetrajanja = vreme;
	tip = t;
}

Zapis::~Zapis()
{
}

double Zapis::Rad()
{
	return 0.0;
}

double Zapis::Vreme()
{
	return vremetrajanja;
}
