#include "Bicyclette.h"
#include <iostream>

using namespace std;


Bicyclette::~Bicyclette(){}
Bicyclette::Bicyclette(const std::string& p_couleur)
: Vehicule(p_couleur) {}


void Bicyclette::afficherType() const {
    cout << "Je suis une bicyclette " << reqCouleur();
}

int Bicyclette::vitesseMax() const{
    return 25;
}

void Bicyclette::seDeplacer() const {
    cout << "Je pédale" << endl;
}

