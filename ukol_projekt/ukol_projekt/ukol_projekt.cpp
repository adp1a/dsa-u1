// ukol_projekt.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include "CislaOperace.h"

void vypisHlavicku() {
    printf("DSA Ukol 1.\n");
    printf("Adam Polivka polivk08\n");
    printf("Dominik Smida smida\n");
    printf("Lucie Novakova novak231\n\n");
}

int main()
{
    vypisHlavicku();

    CislaOperace co;
    int f = co.faktorialNerek(5);
    printf("5: !5 = %d\n", f);

    try {
        // predpoklad m >= 0 (návratová hodnota je typu int)
        int f2 = co.mocninaR(5, 0);
        printf("5^0 = %d\n", f2);

        int f3 = co.mocninaNerek(4, 2);
        printf("4^2 = %d\n", f3);

        int f4 = co.mocninaNerek(4, -2);
        printf("4^-2 = %d\n", f4);
    }
    catch (const std::exception& e) {
        std::cerr << "Zachycena vyjimka " << e.what() << std::endl;
    }

    const int ARRAY_LENGTH = 10;
    int hodnoty[ARRAY_LENGTH] = { 1, 2, 3, -4, 5, -6, -7, 8, -9, 0 };
    int f4 = co.zjistiPocetKladnych(hodnoty, ARRAY_LENGTH);
    printf("pocet kladnych cisel v poli je: %d\n", f4);
}