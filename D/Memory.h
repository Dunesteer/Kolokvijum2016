#pragma once
class Memory
{
protected:
	int *niz;
	int duzina;
	bool PripadaNizu(int i);
public:
	Memory();
	Memory(int n);
	virtual ~Memory();
};

