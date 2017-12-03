#include "ZapisOPrekidu.h"
#include <string.h>


ZapisOPrekidu::ZapisOPrekidu() : Zapis()
{
	opis = nullptr;
}

ZapisOPrekidu::ZapisOPrekidu(int s, char* o) : Zapis(s)
{
	opis = new char[strlen(o) + 1];
	strcpy(opis, o);
}

ZapisOPrekidu::~ZapisOPrekidu()
{
}
