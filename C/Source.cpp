#include"Memorija.h"
#include"Niz.h"
#include"Stek.h"
#include <iostream>
using namespace std;

void main()
{
	Niz NA(10);
	Stek SA(10);
	for (int i = 0; i < 6; i++) {
		NA.Add(i * 10);
		SA.Push(i * 5);
	}
	Stek SB(20);
	for (int i = 0; i < 6; i++)
	{
		SB.Push(NA.Get(i));
		SB.Push(SA.Pop());
	}

}