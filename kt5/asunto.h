#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto
{
public:
    Asunto(); //luokan rakentaja
    ~Asunto(); //luokan purkaja

    void maarita(int asukasMaara, int neliot); //määritetään tällä funktiolla asunnon tiedot

    virtual double laskeKulutus();


private:
    int* asukasMaara; //asukasmäärän pointteri
    int* neliot; //neliöiden pointteri
};

#endif // ASUNTO_H
