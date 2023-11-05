#include "CislaOperace.h"
#include <iostream>


CislaOperace::CislaOperace() { }

CislaOperace::~CislaOperace() { }

// ----------------------------------------------------------------
// Domaci ukol:

// vypocet faktorialu cisla n nerekurzivnim zpusobem
int CislaOperace::faktorialNerek(int n)
{
	int res = n;

	for (int i = n - 1; i > 0; i--) {
		res *= i;
	}

	return res;
}

// vypocet m-te mocniny cisla c rekurzivnim zpusobem
int CislaOperace::mocninaR(int c, int m)
{
	return (m > 0) ? c * mocninaR(c, m - 1) : 1;
}

// vypocet m-te mocniny cisla c nerekurzivnim zpusobem
int CislaOperace::mocninaNerek(int c, int m)
{
	if (m == 0) {
		return 1;
	}
	// todo: add -m

	int res = c;
	
	for (int i = m - 1; i > 0; i--) {
		res *= c;
	}

	return res;
}

// zjisteni poctu kladnych cisel (nenulovych) v poli hodnot o velikosti n
int CislaOperace::zjistiPocetKladnych(int *hodnoty, int n)
{
	int qty = 0;

	for (int i = 0; i < sizeof(hodnoty); i++) 
	{
		if (hodnoty[i] > 0) {
			qty += 1;
		}
	}

	return qty;
}