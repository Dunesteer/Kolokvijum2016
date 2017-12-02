#include "Zapisoprekidima.h"
#include "Zapis.h"
#include <cstring>


Zapisoprekidima::Zapisoprekidima(double vreme, short t, char* o):Zapis(vreme, t)
{
	opisprekida = new char[strlen(o) + 1];
	strcpy(opisprekida, o);
}


Zapisoprekidima::~Zapisoprekidima()
{
	if (opisprekida != nullptr)
		delete[] opisprekida;
}