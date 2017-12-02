#pragma once
#include "Tecne.h"
#include "Skladiste.h"


	Tecne::Tecne():Paket("tecni",10,new Datum())
	{
	}

	Tecne::Tecne(char * naziv, double masa, Datum* d):Paket(naziv,masa,d)
	{
	}


	Tecne::~Tecne()
	{
	}