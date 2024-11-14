#include "Heure.h"

Heure::Heure(int h, int m, int s)
    : heure(h), minute(m), seconde(s) 
{
    if (heure < 0 || heure > 23) heure = 0;
    if (minute < 0 || minute > 59) minute = 0;
    if (seconde < 0 || seconde > 59) seconde = 0;
}


void Heure::affiche() const
{
    // Afficher les heures avec un "0" devant si elles sont inférieures à 10
    if (heure < 10) std::cout << "0";
    std::cout << heure << ":";

    // Afficher les minutes avec un "0" devant si elles sont inférieures à 10
    if (minute < 10) std::cout << "0";
    std::cout << minute << ":";

    // Afficher les secondes avec un "0" devant si elles sont inférieures à 10
    if (seconde < 10) std::cout << "0";
    std::cout << seconde << std::endl;
}

bool Heure::operator>(const Heure& other) const
{
    if (heure > other.heure) return true;
    if (heure == other.heure && minute > other.minute) return true;
    if (heure == other.heure && minute == other.minute && seconde > other.seconde) return true;
    return false;
}
