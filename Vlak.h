#pragma once
#include <vector>
#include "Stanica.h"

using namespace std;

class Vlak
{
	//sukromne atributy
	//Vsetko je v triede defaultne private
	int cisloVlaku;
	vector<Stanica> stanice;
public:
	//Vsetko co je pod tymto (?navesnikom?) je public

	//za tym id je = -1 to znamena ze to je defaultna hodnota... 
	//ak nezadam parameter pri vytvarani Vlaku tak sa nastavi na hodnotu -1
	Vlak(int id = -1) {
		cisloVlaku = id;
	};
	
	void pridajStanicu(Stanica s) {
		stanice.push_back(s);
	}

};

