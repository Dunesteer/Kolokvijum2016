#pragma once
#include "Zapis.h"

class ZapisORadu : public Zapis
{
protected:
	double procenat;
public:
	ZapisORadu();
	ZapisORadu(int s, double p);
	~ZapisORadu();
	double Rad();
};

