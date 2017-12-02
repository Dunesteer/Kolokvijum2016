#pragma once
#include "Paket.h"
class Tecni : public Paket
{
protected:
	float zapremina;
public:
	Tecni();
	Tecni(char* n, float m, Datum* r, float z);
	~Tecni();
	float GetMasa() override;
};

