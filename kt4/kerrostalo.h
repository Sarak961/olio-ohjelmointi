#ifndef KERROSTALO_H
#define KERROSTALO_H

#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"

class kerrostalo : public kerros {
public:
    void laskeKulutus(double);

private:
    int eka;
    int toka;
    int kolmas;
};

#endif // KERROSTALO_H
