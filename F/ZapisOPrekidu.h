#pragma once
#include "Zapis.h"
class ZapisOPrekidu : public Zapis
{
protected:
	char* opis;
public:
	ZapisOPrekidu();
	ZapisOPrekidu(int s, char* o);
	~ZapisOPrekidu();
};

