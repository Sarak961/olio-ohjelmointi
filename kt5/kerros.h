#ifndef KERROS_H
#define KERROS_H
#include "Asunto.h"


class Kerros
{
public:
    Kerros();
    ~Kerros(); //virtuaalinen purkaja
    virtual void maaritaAsunnot(); //alaluokkien korvaavan perusluokan totetus
    double laskeKulutus(double kulutusPerNelio);

private:
    Asunto* as1; //pointterit objektien sijaan
    Asunto* as2;
    Asunto* as3;
    Asunto* as4;
};

#endif // KERROS_H
