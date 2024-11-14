#pragma once
#include "DateH.h"

int main() {
    // Test des classes Heure et DateH
    Heure h1(14, 30, 45);
    Heure h2(12, 15, 30);
    h1.affiche();
    h2.affiche();
    std::cout << "h1 > h2: " << (h1 > h2 ? "true" : "false") << std::endl;

    DateH d1(15, 8, 2023, 10, 15, 0);
    DateH d2(14, 8, 2023, 18, 45, 0);
    d1.affiche();
    d2.affiche();
    std::cout << "d1 > d2: " << (d1 > d2 ? "true" : "false") << std::endl;

    return 0;
}