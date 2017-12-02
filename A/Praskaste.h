#pragma once
#include "Paket.h"
class Praskaste : public Paket
{
	int ShelfLife;
public:
	Praskaste();
	Praskaste(char*naziv, double masa,int ShelfLife,Datum* d);
	~Praskaste();
	Datum* RokTrajanja();
};

