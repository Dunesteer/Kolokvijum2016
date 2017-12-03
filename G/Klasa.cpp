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
	this->red = i;
	this->kolona = j;
}

Klasa::Klasa(int i, int j)
{
	red = i;
	kolona = j;
}


Klasa::~Klasa()
{
}

void Klasa::Print()
{
	cout << c;
}
