#include "Voiture.h"
#include <iostream>

using namespace std;

Voiture::Voiture(const std::string& p_couleur) 
: Vehicule(p_couleur) {}

void Voiture::afficherType() const {
    cout << "Je suis une voiture " << reqCouleur();
}

int Voiture::vitesseMax() const {
    return 180;
}

void Voiture::seDeplacer() const {
    cout << "Je roule à moteur" << endl;
}

Voiture::~Voiture() {}