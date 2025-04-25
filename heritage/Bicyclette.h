#ifndef BICYCLETTE_H
#define BICYCLETTE_H
#include "Vehicule.h"

class Bicyclette : public Vehicule {

    public:
        Bicyclette(const std::string& p_couleur);
        ~Bicyclette();
        void afficherType() const override;
        int vitesseMax() const override;
        void seDeplacer() const override;



};

#endif
