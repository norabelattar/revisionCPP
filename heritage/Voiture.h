#ifndef VOITURE_H
#define VOITURE_H
#include "Vehicule.h"

class Voiture : public Vehicule {
    public:
        Voiture(const std::string& p_couleur);
        void afficherType() const override;
        int vitesseMax() const override;
        void seDeplacer() const override;
        ~Voiture();
};

#endif