#include "Kerros.h"

Kerros::Kerros() {
    as1 = new Asunto(); //olioiden alustus dynaamisesti
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();
}
Kerros::~Kerros() {
    delete as1; //muistin vapautus
    delete as2;
    delete as3;
    delete as4;

}
void Kerros::maaritaAsunnot() {
    as1 ->maarita(2,100);
    as2 ->maarita(2,100);
    as3 ->maarita(2,100);
    as4 ->maarita(2,100);
}
double Kerros::laskeKulutus(double kulutusPerNelio) {
    double kokonaiskulutus = 0.0;

    // Käydään läpi jokainen asunto ja lasketaan sen kulutus
    kokonaiskulutus += as1->laskeKulutus() * kulutusPerNelio;
    kokonaiskulutus += as2->laskeKulutus() * kulutusPerNelio;
    kokonaiskulutus += as3->laskeKulutus() * kulutusPerNelio;
    kokonaiskulutus += as4->laskeKulutus() * kulutusPerNelio;

    return kokonaiskulutus;
}
