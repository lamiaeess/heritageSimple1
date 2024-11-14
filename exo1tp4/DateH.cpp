#include "DateH.h"

bool DateH::dateValide(int jour, int mois, int annee) const
{
    if (mois < 1 || mois > 12) return false;
    if (jour < 1 || jour > 31) return false;

    // Gestion des mois avec moins de jours
    if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
        return jour <= 30;
    }
    else if (mois == 2) {  // Février
        bool anneeBissextile = (annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0));
        return jour <= (anneeBissextile ? 29 : 28);
    }
    return true;
}

DateH::DateH(int j, int m, int a, int h, int min, int sec)

    : Heure(h, min, sec), jour(j), mois(m), annee(a) {
        if (!dateValide(jour, mois, annee)) {
            jour = mois = annee = 1;  // Valeurs par défaut en cas de date invalide
        }
    }


void DateH::affiche() const
{
    // Afficher le jour avec un "0" devant si il est inférieur à 10
    if (jour < 10) std::cout << "0";
    std::cout << jour << "/";

    // Afficher le mois avec un "0" devant si il est inférieur à 10
    if (mois < 10) std::cout << "0";
    std::cout << mois << "/";

    // Afficher l'année
    std::cout << annee << " ";

    // Appeler la méthode affiche de la classe Heure pour afficher l'heure
    Heure::affiche();
}

bool DateH::operator>(const DateH& other) const
{
    if (annee > other.annee) return true;
    if (annee == other.annee && mois > other.mois) return true;
    if (annee == other.annee && mois == other.mois && jour > other.jour) return true;
    if (annee == other.annee && mois == other.mois && jour == other.jour) {
        return Heure::operator>(other);  // Comparaison des heures
    }
    return false;
}
