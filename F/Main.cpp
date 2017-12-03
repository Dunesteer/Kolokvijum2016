#pragma once
#include "Pumpa.h"
#include "Zapis.h"
#include "ZapisOPrekidu.h"
#include "ZapisORadu.h"
#include <iostream>
using namespace std;
void main()
{
	Pumpa p1(0.7, 6);
	Pumpa* p2 = new Pumpa(3.8, 7);

	for (int i = 0; i < 3; i++)
	{
		p1.DodajZapis(new ZapisORadu(100, 0.8)); 
		p2->DodajZapis(new ZapisORadu(200, 0.4));
	}
	
	for (int i = 0; i < 2; i++)
	{
		p1.DodajZapis(new ZapisOPrekidu(55,"asd"));
		p2->DodajZapis(new ZapisOPrekidu(66, "fgh"));
	}

	cout << "Nedostaje " << p1.TeoretskiMax() << endl;
	cout << "Nedostaje " << p2->TeoretskiMax() << endl;

	cout << "Prosek " << p1.ProsecanProtok() << endl;
	cout << "Prosek " << p2->ProsecanProtok() << endl;
	
	delete p2;
}

