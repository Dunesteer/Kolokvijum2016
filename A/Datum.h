#pragma once
class Datum
{
private:
	int dan, mesec, godina;
public:
	Datum();
	Datum(int d, int m, int g);
	~Datum();
	int getDan();
	int getMesec();
	int getGodina();
	Datum *AddDay(int d);
	friend bool operator>(Datum& levi, Datum& desni);
	friend bool operator<(Datum& levi, Datum& desni);
};

