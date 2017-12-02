#include "Zapisoradu.h"



Zapisoradu::Zapisoradu(double vreme, short t, float p) :Zapis(vreme, t)
{
	procenat = p;
}


Zapisoradu::~Zapisoradu()
{
}

double Zapisoradu::Rad()
{
	return procenat * vremetrajanja;
}
