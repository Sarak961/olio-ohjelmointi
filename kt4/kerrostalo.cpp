#include "kerrostalo.h"

kerrostalo::kerrostalo()
{
    cout>>"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double kerrostalo::laskeKulutus(double hinta)
{
    double katutasonKulutus = eka.laskeKulutus(hinta);
    double kerrostenKulutus = toka.laskeKulutus(hinta) + kolmas.laskeKulutus(hinta);
    return katutasonKulutus+kerrostenKulutus;
}

