#include "Kupus.h"
#include "Biljka.h"



Kupus::Kupus(int mk):Biljka(mk)
{
}


Kupus::~Kupus()
{
}

void Kupus::Noc()
{
	masa -= masa*1.25 / 100;
}
