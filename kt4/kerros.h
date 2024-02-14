#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>
using namespace std;


class kerros
{
public:
    kerros();
    virtual void maaritaAsunnot(void); //virtual void mahdollistaa alaluokkien korvaavan perusluokan toteutuksen
    double laskeKulutus(double);

private:
    asunto as1;
    asunto as2;
    asunto as3;
    asunto as4;
};

#endif // KERROS_H
