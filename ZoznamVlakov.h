#pragma once
#include <iostream>
#include <map>
#include "Vlak.h"
#include "Stanica.h"

using namespace std;

class ZoznamVlakov
{
	map<int, Vlak> vlaky;
	map<string, Stanica> stanice;
public:
	ZoznamVlakov() = default; //tym ze tam mame = default kompilator si sam dogeneruje co potrebuje
	//Ja som pouzival toto
	//ZoznamVlakov() { } - Ale Gabor mi napisal ze to neni dobre.. netusim preco, ze sa ma pouzivat default ak ho chcem nechat prazdny
	~ZoznamVlakov() = default;

	void pridajVlak(int cisloVlaku, string nazovStanice);
	Vlak getVlak(int id) { return vlaky[id]; }
	void vypisStanice(ostream& os);
};

