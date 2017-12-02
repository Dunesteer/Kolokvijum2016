#pragma once
#include "Praskaste.h"
#include "Skladiste.h"

Praskaste::Praskaste() :Paket("praskasti", 10)
{
}

Praskaste::Praskaste(char * naziv, double masa, int ShelfLife, Datum* d) : Paket(naziv, masa,d)
{
	this->ShelfLife = ShelfLife;
}


Praskaste::~Praskaste()
{
}

Datum * Praskaste::RokTrajanja()
{
	return Paket::RokTrajanja()->AddDay(ShelfLife);
}

