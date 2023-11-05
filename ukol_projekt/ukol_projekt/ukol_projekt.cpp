// ukol_projekt.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include "CislaOperace.h"

int main()
{
    // otestovani funkcnosti implementovanych metod, zobrazeni vysledku
    // testuje se na konstantnich hodnotach, zadne zadavani vstupu (standardni vstup)
    // napr.
    CislaOperace co;
    int f = co.faktorialNerek(5);
    printf("5: !5 = %d\n", f);

    int f2 = co.mocninaR(5, 3);
    printf("5^3 = %d\n", f2);

    int f3 = co.mocninaNerek(4, 0);
    printf("4^0 = %d\n", f3);

    const int ARRAY_LENGTH = 10;
    int hodnoty[ARRAY_LENGTH] = { 1, 2, 3, -4, 5, -6, -7, 8, -9, 0 };
    int f4 = co.zjistiPocetKladnych(hodnoty, ARRAY_LENGTH);
    printf("pocet kladnych cisel v poli je: %d\n", f4);
}