#include "asunto.h"
#include <iostream>

asunto::asunto ()
{

    cout<<"Asunto luotu"<< endl;
}

void asunto::maarita(int a, int n)
{
    asukasMaara = a;
    neliot = n;
    cout<<"Asunto maaritetty asukkaita ="<<asukasMaara<<" nelioita= "<<neliot<<endl;

}

double asunto::laskeKulutus(double hinta)
{

    return asukasMaara*neliot*hinta;
}
