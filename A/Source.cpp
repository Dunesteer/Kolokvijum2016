#include"Datum.h"
#include"Skladiste.h"

void main() {
	Skladiste s1(10, "Prvo skladiste");
	Skladiste * s2 = new Skladiste(10, "Drugo skladiste");

	s1.addPaket(new Praskaste("pras", 10, 1, new Datum()));
	s1.addPaket(new Praskaste("pras", 3, 3, new Datum()));
	s1.addPaket(new Praskaste("pras", 16, 5, new Datum()));

	s1.addPaket(new Tecne("tec", 1, new Datum()));
	s1.addPaket(new Tecne("tec", 2, new Datum()));
	s1.addPaket(new Tecne("tec", 3, new Datum()));

	s2->addPaket(new Praskaste("pras", 58, 2, new Datum()));
	s2->addPaket(new Praskaste("pras", 1, 8, new Datum()));
	s2->addPaket(new Praskaste("pras", 10, 16, new Datum()));

	s2->addPaket(new Tecne("tec", 4, new Datum()));
	s2->addPaket(new Tecne("tec", 5, new Datum()));
	s2->addPaket(new Tecne("tec", 6, new Datum()));

	//for (int i = 0; i < 6; i++)
	//{
	//	if (i % 2 == 0) 
	//	{
	//		s1.addPaket(new Praskaste("pras", i*0.5 + 1, i * 2 + 1, new Datum()));
	//		s2->addPaket(new Praskaste("pras", i*0.2 + 1, i * 2 + 1, new Datum()));
	//	}
	//	else 
	//	{
	//		s1.addPaket(new Tecne("tec", i*0.5 + 1,new Datum()));
	//		s2->addPaket(new Tecne("tec", i*0.2 + 1, new Datum()));
	//	}
	//}

	Datum *d = new Datum(16, 7, 1969);
	for (int i = 0; i < s2->getKapacitet(); i++) {
		Paket * p = s2->getP(i);
		if (p != nullptr)
		{
			if (*(p->RokTrajanja()) < *d)
			{
				p->Stampaj();
			}
		}
	}

	delete s2;
}