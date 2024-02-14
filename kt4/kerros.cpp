#include "kerros.h"

kerros::kerros()
{
    cout<<"Kerros luotu"<<rndl;
}

void kerros::maaritaAsunnot()
{

    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}
double kerros::laskeKulutus(double hinta)
{
    return as1.laskeKulutus(hinta)+as2.laskeKulutus(hinta)
           +as3.laskeKulutus(hinta)+as4.laskeKulutus(hinta);
}
