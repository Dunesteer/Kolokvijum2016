#pragma once
class Memorija
{
protected:
	int maxbrojelemenata;
	int brUpisanih=0;
	int * niz;
	void Zauzmimemoriju(int n);
	void Oslobodimemoriju();
public:
	Memorija(int element);
	~Memorija();
	void Print();
};

