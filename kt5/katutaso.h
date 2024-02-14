#ifndef KATUTASO_H
#define KATUTASO_H
#include <iostream>

#include "Kerros.h"
#include "Asunto.h"

class Katutaso: public Kerros //katutaso, jonka kerros perii
{
public:
    Katutaso();
    ~Katutaso(); //virtuaalinen purkaja
    void maaritaAsunnot () override; //julkinen virtuaalifunktio määrittelee asunnot
    //override= katutaso korvaa perusluokan "kerros"
    double laskeKulutus(double kulutusPerNelio);

private:
    Asunto* as1; //tällä kertaa ei objekti, vaan pointteri
    Asunto* as2;

};

#endif // KATUTASO_H
