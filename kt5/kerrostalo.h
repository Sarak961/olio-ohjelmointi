#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "Katutaso.h"

class Kerrostalo {
public:
    Kerrostalo();
    ~Kerrostalo(); // Purkaja
    double laskeKulutus(double kulutusPerNelio);

private:
    Katutaso* eka; // Ei objekti vaan pointteri
    Katutaso* toka;
    Katutaso* kolmas;
};

#endif // KERROSTALO_H
