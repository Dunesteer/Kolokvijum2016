#include "Biljozderka.h"



Biljozderka::Biljozderka(int mb) :Biljka(mb)
{
}


Biljozderka::~Biljozderka()
{
}

void Biljozderka::Noc()
{
	if (!Pojedi()) {
		masa -= masa * 5 / 100;
	}
}
