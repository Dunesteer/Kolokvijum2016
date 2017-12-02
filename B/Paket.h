#pragma once
#include "Datum.h"
class Paket
{
protected:
	char* naziv;
	Datum* RokTrajanja;
	float masa;

public:
	Paket();
	Paket(char * n, float m, Datum* r);
	~Paket();
	char* GetNaziv();
	virtual float GetMasa();
};

