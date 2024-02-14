#include "Kerrostalo.h"

Kerrostalo::Kerrostalo() {
    eka = new Katutaso(); // Dynaaminen olioiden alustus
    toka = new Katutaso();
    kolmas = new Katutaso();
}

Kerrostalo::~Kerrostalo() {
    delete eka;
    delete toka;
    delete kolmas;
}

//Lasketaan kerrostalon kokonaiskulutus
double Kerrostalo::laskeKulutus(double kulutusPerNelio) {
    double kokonaiskulutus = 0.0;


    kokonaiskulutus += eka->laskeKulutus(kulutusPerNelio);
    kokonaiskulutus += toka->laskeKulutus(kulutusPerNelio);
    kokonaiskulutus += kolmas->laskeKulutus(kulutusPerNelio);
    return kokonaiskulutus;
}
