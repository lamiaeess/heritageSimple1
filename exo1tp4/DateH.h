#pragma once
#include "Heure.h"
class DateH : public Heure {
private:
    int jour;
    int mois;
    int annee;
    // Fonction de vérification pour l'existence d'une date valide
    bool dateValide(int jour, int mois, int annee) const;

public:
    // Constructeur avec validation des valeurs de date et d'heure
    DateH(int j, int m, int a, int h = 0, int min = 0, int sec = 0);
    // Fonction membre pour afficher la date et l'heure
    void affiche() const;
    // Surcharge de l'opérateur > pour la classe DateH
    bool operator>(const DateH& other) const;
};

