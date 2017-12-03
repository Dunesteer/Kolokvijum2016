#pragma once

class Zapis
{	
protected:
	int sekunde;
public:
	Zapis();
	Zapis(int s);
	~Zapis();
	virtual double Rad();
	double Vreme();
};