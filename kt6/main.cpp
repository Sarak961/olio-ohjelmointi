#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) { //Pääfunktio sovelluksen käynnistämistä varten
    QApplication app(argc, argv); //Sovellusta suorittava pääobjekti

    MyWidget myWidget; //Sovelluksen pääikkuna
    myWidget.setWindowTitle("Simple Counter");
    myWidget.show();

    return app.exec(); //Sovelluksen pääikkunan käynnistys ja sen suorituksen palautus
}
