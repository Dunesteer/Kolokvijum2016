#pragma once
class Zapis
{
protected:
	double vremetrajanja;
	short tip;
public:
	Zapis(double vreme,short t);
	~Zapis();
	virtual double Rad();
	double Vreme();
};

