#include <iostream>
#include "Kerrostalo.h"

int main() {
    std::cout << "asunto luotu" << std::endl;
    Asunto* as1 = new Asunto();
    Asunto* as2 = new Asunto();
    Asunto* as3 = new Asunto();
    Asunto* as4 = new Asunto();

    std::cout << "kerros luotu" << std::endl;
    Kerros* kerros = new Kerros();

    std::cout << "asunto luotu" << std::endl;
    Asunto* as5 = new Asunto();
    Asunto* as6 = new Asunto();

    std::cout << "katutaso luotu" << std::endl;
    Katutaso* katutaso = new Katutaso();

    std::cout << "maaritetaan 2 kpl katutason asuntoja" << std::endl;
    katutaso->maaritaAsunnot();
    std::cout << "asunto maaritetty asukkaita = 2 nelioita = 100" << std::endl;

    std::cout << "maaritetaan katutason kerrokselta perittyja asuntoja" << std::endl;
    kerros->maaritaAsunnot();
    std::cout << "maaritetaan 4 kpl kerroksen asuntoja" << std::endl;
    kerros->maaritaAsunnot();
    std::cout << "asunto maaritetty asukkaita 2 nelioita 100" << std::endl;
    std::cout << "asunto maaritetty asukkaita 2 nelioita 100" << std::endl;
    std::cout << "asunto maaritetty asukkaita 2 nelioita 100" << std::endl;
    std::cout << "asunto maaritetty asukkaita 2 nelioita 100" << std::endl;

    double kokonaiskulutus = katutaso->laskeKulutus(1) + kerros->laskeKulutus(1);
    std::cout << "Katutason ja perityn kerroksen kulutus, kun hinta = 1 on " << kokonaiskulutus << std::endl;

    delete as1;
    delete as2;
    delete as3;
    delete as4;
    delete kerros;
    delete as5;
    delete as6;
    delete katutaso;

    return 0;
}
