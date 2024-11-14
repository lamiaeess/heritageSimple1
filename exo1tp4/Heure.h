#pragma once
#include <iostream>
using namespace std;
class Heure
{
    private:
        int heure;
        int minute;
        int seconde;

    public:
        // Constructeur avec valeurs par d�faut et validation des donn�es
        Heure(int h = 0, int m = 0, int s = 0);

        // Fonction membre pour afficher l'heure
        void affiche() const;

        // Surcharge de l'op�rateur >
        bool operator>(const Heure& other) const;
    };

 

