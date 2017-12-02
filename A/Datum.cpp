#include "Datum.h"



Datum::Datum()
{
	dan = mesec = godina = 1;
}

Datum::Datum(int d, int m, int g)
{
	dan = d;
	mesec=m;
	godina=g;
}


Datum::~Datum()
{
}

int Datum::getDan()
{
	return dan;
}

int Datum::getMesec()
{
	return mesec;
}

int Datum::getGodina()
{
	return godina;
}

Datum * Datum::AddDay(int d)
{
	int dan = this->dan;
	int mesec = this->mesec;
	int godina = this->godina;
	dan += d;
	if (dan > 31)
	{
		dan %= 30;
		dan++;
		mesec++;
	}
	if (mesec > 12)
	{
		mesec %= 12;
		mesec++;
		godina++;
	}

	return new Datum(dan, mesec, godina);
}

bool operator>(Datum & levi, Datum & desni)
{
	return operator<(desni,levi);
}

bool operator<(Datum & levi, Datum & desni)
{
	if (levi.godina < desni.godina) {
		return true;
	}
	else {
		if (levi.godina > desni.godina)
			return false;
		else
			if (levi.mesec < desni.mesec)
				return true;
			else
				if (levi.mesec > desni.mesec)
					return false;
				else
					if (levi.dan < desni.dan)
						return true;
					else
						return false;
	}
}
