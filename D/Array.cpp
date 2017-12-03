#include "Array.h"
Array::Array():Memory()
{
}

Array::Array(int n):Memory(n)
{
}

Array::~Array()
{
}

///Vraca sa i pozicije ili vraca sa pozicije 0 ako ne pripada nizu
int& Array::operator[](int i)
{
	if (PripadaNizu(i))
		return niz[i];
	else
		return niz[0];
}
