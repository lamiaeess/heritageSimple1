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
        // Constructeur avec valeurs par défaut et validation des données
        Heure(int h = 0, int m = 0, int s = 0);

        // Fonction membre pour afficher l'heure
        void affiche() const;

        // Surcharge de l'opérateur >
        bool operator>(const Heure& other) const;
    };

 

