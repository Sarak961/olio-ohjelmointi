#ifndef KATUTASO_H
#define KATUTASO_H

#include <iostream>
using namespace std;

#include "asunto.h"

class katutaso : public kerros //määritellään luokka katutaso, jonka kerros perii
{
public:
    katutaso();
   virtual void maaritaAsunnot(void) override; //julkinen virtuaalifunktio, joka määrittelee asunnot
    //override = tässä yhteydessä: katutaso korvaa perusluokan "kerros".
   //virtuaalifunktio mahdollistaa alaluokkien korvaavan perusluokan toteutuksen.
    double laskeKulutus(double);


private:
    asunto as1;
    asunto as2;
};

#endif // KATUTASO_H
