#include "ZoznamVlakov.h"

void ZoznamVlakov::pridajVlak(int cisloVlaku, string nazovStanice)
{
	//Vytvorim si novu premennu vlak
	Vlak v(cisloVlaku);
	if (vlaky.count(cisloVlaku) > 0) { //Ak existuje v nasom zozname vlakov tak si ju prepiseme na ten vlak z nasho zoznamu
		v = vlaky[cisloVlaku];
	}

	//Stanica tu funguje rovnako ako vlak
	Stanica s(nazovStanice);
	if (stanice.count(nazovStanice) > 0) {
		s = stanice[nazovStanice];
	}

	//Zavolame nejake metody
	v.pridajStanicu(s);
	s.pridajVlak();

	//V tomto bode sme pridali stanici a vlak....
	//Tieto zmeny su vsak ulozene iba v premennych v a s
	//Tym padom musime aktualizovat aj nase zoznamy
		
	vlaky[cisloVlaku] = v;
	stanice[nazovStanice] = s;
}

//Ako parameter prijmame stream
//Robime to preto aby sme mohli poslat ako parameter stream do konzoly ale aj stream do suboru
//Tym nemusime robit dve totozne metody
void ZoznamVlakov::vypisStanice(ostream & os)
{
	//Prechadzanie cez mapu
	//Jedna sa o foreach v c++
	//Nasiel som to na https://stackoverflow.com/questions/26281979/c-loop-through-map
	for (auto& s : stanice) {
		os << s.second.getNazov() << ": " << s.second.getPocetVlakov() << endl;
	}
}
