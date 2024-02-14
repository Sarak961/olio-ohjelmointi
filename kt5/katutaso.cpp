#include "Katutaso.h"

Katutaso::Katutaso() {
    as1 = new Asunto(); //olioiden alustus dynaamisesti muistissa
    as2 = new Asunto();
}
Katutaso::~Katutaso () {
    delete as1; //muistin vapautus (dynaamisesti varattu)
    delete as2;
}
void Katutaso::maaritaAsunnot() {
    // Määritellään asuntojen tiedot tarvittaessa
    as1->maarita(2, 100);
    as2->maarita(2, 100);

}

double Katutaso::laskeKulutus(double kulutusPerNelio) {
    double kokonaiskulutus = 0.0;
    kokonaiskulutus += as1->laskeKulutus()*kulutusPerNelio;
    kokonaiskulutus += as2->laskeKulutus()*kulutusPerNelio;

    return kokonaiskulutus;
}
