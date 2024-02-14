#include "katutaso.h"


katutaso::katutaso()
{
    cout<<"katutaso luotu"<<endl;
}

void katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
}
double katutaso::laskeKulutus(double hinta)
{
    return as1.laskeKulutus(hinta)+as2.laskeKulutus(hinta);
}
