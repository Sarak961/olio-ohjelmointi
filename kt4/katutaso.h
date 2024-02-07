#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"
#include <iostream>

using namespace std;

class katutaso : private ASUNTO_H {
public:
    void maaritaAsunnot(ASUNTO_H);
    double katutaso::laskeKulutus() {
        double kulutus = 0.0;
        return kulutus;
    }


private:
    int as1;
    int as2;
};

#endif // KATUTASO_H
