#include "Tecni.h"



Tecni::Tecni()
{
}

Tecni::Tecni(char * n, float m, Datum * r, float z) :Paket(n, m, r)
{
	zapremina = z;
}


Tecni::~Tecni()
{
}

float Tecni::GetMasa()
{
	return masa*zapremina;
}
