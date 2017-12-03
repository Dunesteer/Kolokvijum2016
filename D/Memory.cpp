#include "Memory.h"


bool Memory::PripadaNizu(int i)
{
	return   i >= 0 && i < duzina;
}

Memory::Memory()
{
	niz = nullptr;
	duzina = 0;
}

Memory::Memory(int n)
{
	duzina = n;
	niz = new int[n];
}


Memory::~Memory()
{
	if (niz != nullptr)
		delete[] niz;
}
