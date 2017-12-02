#pragma once
#include "Datum.h"
class Paket
{
protected :
	char* naziv;
	double masa;
	Datum *roktrajanja;
public:
	Paket();
	Paket(char *n, double m,Datum* d);
	~Paket();
	virtual Datum* RokTrajanja();
	virtual void Stampaj();
	void setMasa(double masa);
};

