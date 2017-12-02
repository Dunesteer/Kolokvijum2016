#pragma once
class Klasa;
class Dzungla
{
private:
	Klasa ***m;
	int n;
	bool Pripada(int i, int j);
public:
	Dzungla();
	Dzungla(int n);
	~Dzungla();
	void Brisi(int i, int j);
	void PojediBiljke();
	void PojediBiljke(int red);
	void PojediBiljkojede();
	void PojediBiljkojede(int kolona);
	bool Add(int i, int j, Klasa* k);
	void Print();
};

