#ifndef MOTO_H
#define MOTO_H
#include "Vehicule.h"

class Moto : public Vehicule{
    public:
        Moto(const std::string& p_couleur);
        void afficherType() const override;
        int vitesseMax() const override;
        void seDeplacer() const override;
        ~Moto();

};

#endif