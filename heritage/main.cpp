#include "Bicyclette.h"
#include "Vehicule.h"
#include "Voiture.h"
#include "Moto.h"
#include <vector>
#include <iostream>
#include <memory>

using namespace std;

int main() {

    std::vector<std::unique_ptr<Vehicule>> vehicules;
    vehicules.push_back(std::make_unique<Bicyclette>("rouge"));
    vehicules.push_back(std::make_unique<Voiture>("bleue"));
    vehicules.push_back(std::make_unique<Moto>("noire"));

    for (const auto& v : vehicules){
        v->afficherType();
        cout << ", vitesse max : " << v->vitesseMax() << " km/h" << endl;
        v->seDeplacer();
        cout << endl;
    } 

    


    return 0;
}