#include "CislaOperace.h"
#include <iostream>

CislaOperace::CislaOperace() { }

CislaOperace::~CislaOperace() { }

// ----------------------------------------------------------------
// Domaci ukol:

// utils
int absInt(int n) {
	return (n > 0) ? n : -n;
}

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
	if (m == 0) {
		return 1;
	}
	
	return c * mocninaR(c, m - 1);
}

// vypocet m-te mocniny cisla c nerekurzivnim zpusobem
int CislaOperace::mocninaNerek(int c, int m)
{
	int res = 1;

	for (int i = 0; i < m; i++) {
		res *= c;
	}

	return res;
}

// zjisteni poctu kladnych cisel (nenulovych) v poli hodnot o velikosti n
int CislaOperace::zjistiPocetKladnych(int *hodnoty, int n)
{
	int qty = 0;

	for (int i = 0; i < n; i++) 
	{
		if (hodnoty[i] > 0) {
			qty += 1;
		}
	}

	return qty;
}