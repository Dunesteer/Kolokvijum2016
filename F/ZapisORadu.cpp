#include "ZapisORadu.h"



ZapisORadu::ZapisORadu() : Zapis()
{
	procenat = 0;
}


ZapisORadu::ZapisORadu(int s, double p) : Zapis(s)
{
	procenat = p;
}


ZapisORadu::~ZapisORadu()
{
	//
}

double ZapisORadu::Rad()
{
	return procenat * sekunde;
}
