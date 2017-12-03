#include "Dzungla.h"
#include "Klasa.h"
#include "iostream"
using namespace std;


bool Dzungla::Pripada(int i, int j)
{
	return i >= 0 && i < n&&j>=0 && j < n;
}

Dzungla::Dzungla()
{
}

Dzungla::Dzungla(int n)
{
	this->n = n;
	m = new Klasa**[n];
	for (int i = 0; i < n; i++)
	{
		m[i] = new Klasa*[n];
		for (int j = 0; j < n; j++)
			m[i][j] = 0;
	}
}


Dzungla::~Dzungla()
{
	for (int i = 0; i < n; i++)
		delete[]m[i];
	delete[]m;
}

void Dzungla::Brisi(int i, int j)
{
	delete m[i][j];
	m[i][j] = 0;
}

void Dzungla::PojediBiljke()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (m[i][j] != nullptr)
				if (m[i][j]->Karakter() == 'i') {
					m[i][j]->Pojedi();
				}
		}
}

void Dzungla::PojediBiljke(int red)
{
	if (!Pripada(red, 0))return;

	for (int i = 0; i < n; i++)
	{
		if (Pripada(red, i))
		{
			if (m[red][i] != nullptr)
				if (m[red][i]->Karakter() == 'k')
				{
					delete m[red][i];
					m[red][i] = nullptr;
				}
		}
	}
}

void Dzungla::PojediBiljkojede()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (m[i][j] != nullptr)
				if (m[i][j]->Karakter() == 'm') {
					m[i][j]->Pojedi();
				}
		}
}

void Dzungla::PojediBiljkojede(int kolona)
{
	if (!Pripada(0, kolona))return;

	for (int i = 0; i < n; i++)
	{
		if (Pripada(i, kolona))
			if (m[i][kolona] != nullptr)
				if (m[i][kolona]->Karakter() == 'i')
				{
					delete m[i][kolona];
					m[i][kolona] = nullptr;
				}
	}
}

bool Dzungla::Add(int i, int j, Klasa* k)
{
	if (!Pripada(i, j)) return false;
	if (m[i][j] != nullptr)
	{
		delete m[i][j];
		m[i][j] = nullptr;
	}

	m[i][j] = k;

	return true;
}

void Dzungla::Print()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (m[i][j] != nullptr)
			{
				m[i][j]->Print();
				cout << " ";
			}
			else
			{
				cout << "o ";
			}
		}
		cout << endl;
	}
}
