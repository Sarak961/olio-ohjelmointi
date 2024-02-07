#ifndef KERROS_H
#define KERROS_H

#include <iostream>
#include "asunto.h"
#include "katutaso.h"

class kerros : public katutaso {
public:
    kerros();
    void maaritaAsunnot(ASUNTO_H);
    double laskeKulutus();

private:
    int as3;
    int as4;
};

#endif // KERROS_H
