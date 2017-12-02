#pragma once
class Dzungla;
class Klasa
{
protected:
	char c;
	int red;
	int kolona;
	Dzungla *p;
public:
	Klasa();
	Klasa(Dzungla* ptr, int i, int j);
	Klasa(int i, int j);
	~Klasa();
	void Postavi(Dzungla* ptr)
	{
		p = ptr;
	}
	char Karakter()
	{
		return c;
	}
	virtual void Pojedi()=0;	
	void Print();
};

