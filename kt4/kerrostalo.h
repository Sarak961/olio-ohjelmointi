#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
using namespace std;
#include "katutaso.h"
#include "kerros.h"

class kerrostalo
{
public:
    kerrostalo();
    double laskeKulutus(double);

private:
    katutaso eka;
    katutaso toka;
    katutaso kolmas;
};

#endif // KERROSTALO_H
