#pragma once
class Biljka
{
protected:
	double masa;
public:
	Biljka(int m);
	~Biljka();
	void Zalivaj();
	virtual void Noc();
};

