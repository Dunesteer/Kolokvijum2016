#include <iostream>
#include "Zapis.h"
using namespace std;

Zapis::Zapis()
{
	sekunde = 0;
}

Zapis::Zapis(int s)
{
	sekunde = s;
}
Zapis::~Zapis()
{
	//
}

double Zapis::Rad()
{
	return 0;
}

double Zapis::Vreme()
{
	return sekunde;
}

