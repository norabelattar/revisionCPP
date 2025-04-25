#include "Moto.h"
#include <iostream>

using namespace std;

Moto::Moto(const std::string& p_couleur) 
: Vehicule(p_couleur) {}

void Moto::afficherType() const {
    cout << "Je suis une moto " << reqCouleur();
}

int Moto::vitesseMax() const {
    return 120;
}

void Moto::seDeplacer() const {
    cout << "Je file entre les voitures."<< endl;
}

Moto::~Moto(){}

