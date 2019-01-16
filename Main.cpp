#include <iostream> //zakladny stream
#include <fstream> //file stream
#include <string>
#include "ZoznamVlakov.h"

using namespace std;

int main() {
	ZoznamVlakov zoznam;

	//Input file stream
	ifstream subor("vlaky.txt");

	int cislo;
	string nazovStanice;
	string cas;
	while (subor >> cislo >> nazovStanice >> cas) {
		zoznam.pridajVlak(cislo, nazovStanice);
	}

	//Output file stream
	ofstream vystup("vystup.txt");

	//Vypiseme stanice do suboru
	//Ulohou bolo vypisat zoznam stanic (zoradeny abecedne) a pocet vlakov ktore nimi prechadzaju
	//Mapa stringov (definovana v ZoznameVlakov) automaticky zoradzuje svoje prvky abecedne, preto nemusime robit ziadnu sort funkciu
	zoznam.vypisStanice(vystup);

	//Cout je globalny konzolovy stream
	//Mozeme ho pouzivat ako cout << "Nieco"; ale mozeme ho pouzivat aj ako premennu
	//Kedze oba objekty vystup aj cout su typu ofstream dokazeme ich poslat do metody
	zoznam.vypisStanice(cout); //Vypiseme to iste na konzolu co do suboru

	//Subory musime zavriet
	subor.close();
	vystup.close();
	return 0;
}