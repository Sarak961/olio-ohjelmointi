#include "Asunto.h"

Asunto::Asunto() {

    asukasMaara = new int(2); //alustetaan pointterit dynaamisesti
    neliot = new int(100);

}
Asunto::~Asunto() {
    delete asukasMaara; //muistin vapautus
    delete neliot;
}
void Asunto::maarita(int asukasMaara_, int neliot_) {
    *asukasMaara = asukasMaara_;
    *neliot = neliot_;
}
double Asunto::laskeKulutus() {
    return *neliot * 0.5;
}
