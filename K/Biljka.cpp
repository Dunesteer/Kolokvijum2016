#include "Biljka.h"


Biljka::Biljka(int m)
{
	masa = m;
}

Biljka::~Biljka()
{
}

void Biljka::Zalivaj()
{
	masa += masa*6.12 / 100;
}

void Biljka::Noc()
{
}
