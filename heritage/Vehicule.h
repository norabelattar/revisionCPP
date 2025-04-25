#ifndef VEHICULE_H
#define VEHICULE_H
#include <iostream>


class Vehicule {

    public:
        Vehicule(const std::string& p_couleur);
        virtual void afficherType() const = 0;
        virtual int vitesseMax() const = 0;
        virtual void seDeplacer() const = 0;
        virtual ~Vehicule();
        std::string reqCouleur() const;
    private:
        std::string m_couleur;

};


#endif