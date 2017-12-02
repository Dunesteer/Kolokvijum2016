#include <iostream>
#include "Skladiste.h"
#include "Praskasti.h"
#include "Tecni.h"
#include <cstdlib>

using namespace std;

/*Skladište treba da čuva tečne i praškaste materijale.
 * Skladište ima naziv (char*) i kapacitet.
 *  Kapacitet predstavlja najveći mogući broj paketa sa materijalom, koji mogu biti smešteni u skladište.
 *
Svi paketi sa materijalom imaju naziv i rok trajanja.
Na paketima sa praškastim materijalom se definiše masa u kg.
Za boce koje sadrže tečne materijale definiše se zapremina u litrima,
i specifična masa u kg/l.
U glavnom programu napraviti dve instance klase skladište (jednu u statičkoj i jednu u dinamičkoj zoni memorije).
Dodeliti im po 3 praškasta i tečna materijala, i nakon toga odštampati samo one čija je masa manja od 2 kg.
*/
void main()
{
	Skladiste s1("skladiste1", 10), *s2 = new Skladiste("skladiste", 10);
	for (int i = 0; i < 3; i++)
	{
		char s[20];
		sprintf_s(s, "praskasti%d", i);
		if (!s1.Add(new  Praskasti(s, 0.3*i, new Datum(i))))
		{
			cout << s1.GetNaziv() << "je puno";
		}

		sprintf_s(s, "praskasti%d", i);
		if (!s2->Add(new  Praskasti(s, 0.2+i, new Datum(i))))
		{
			cout << s2->GetNaziv() << "je puno";
		}

		sprintf_s(s, "Tecni%d", i);
		if (!s1.Add(new  Tecni(s, 1.1 + i, new Datum(i), 0.5)))
		{
			cout << s1.GetNaziv() << "je puno";
		}

		sprintf_s(s, "Tecni%d", i);
		if (!s2->Add(new  Tecni(s, 0.6 + i, new Datum(i), 0.5)))
		{
			cout << s2->GetNaziv() << "je puno";
		}
	}

	s1.Print(2);

	s2->Print(2);
	int a;
	cin >> a;
}