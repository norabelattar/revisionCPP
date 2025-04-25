#include "Vehicule.h"
#include <iostream>

using namespace std;

Vehicule::Vehicule(const std::string& p_couleur)
: m_couleur(p_couleur) {}

Vehicule::~Vehicule() {}


void Vehicule::afficherType() const  {
    cout << "Je suis un véhicule" << endl;
}

std::string Vehicule::reqCouleur() const {
    return m_couleur;
}

