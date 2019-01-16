#pragma once
#include <vector>
#include <string>

using namespace std;

class Stanica
{
	string nazov;
	int pocetVlakov = 0;
public:
	Stanica(string n = "") : nazov(n) { };

	string getNazov() { return nazov; }
	void pridajVlak() { pocetVlakov++; };
	int getPocetVlakov() { return pocetVlakov; }

};

