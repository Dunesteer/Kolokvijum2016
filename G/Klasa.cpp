#include "Klasa.h"
#include "Dzungla.h"
#include <iostream>
using namespace std;

Klasa::Klasa()
{
}

Klasa::Klasa(Dzungla * ptr, int i, int j)
{
	this ->p = ptr;
	this->red = i + 1;
	this->kolona = j + 1;
}

Klasa::Klasa(int i, int j)
{
	red = i + 1;
	kolona = j + 1;
}


Klasa::~Klasa()
{
}

void Klasa::Print()
{
	cout << c;
}
