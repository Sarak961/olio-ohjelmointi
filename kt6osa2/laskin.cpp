#include "laskin.h"
#include "ui_laskin.h"
#include <QDebug>

//Laskimen konstuktori
Laskin::Laskin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Laskin)
{
    ui->setupUi(this); //Käyttöliittymän alustus

    //num1LineEdit-kentän linkitys
    num1LineEdit = this->findChild<QLineEdit *>("num1");
    if (num1LineEdit) {
        num1LineEdit->setReadOnly(true);
    } else {
        qDebug() << "Error: Unable to find num1LineEdit in the UI file!";
    }

    //num2LineEdit kentän linkitys
    num2LineEdit = this->findChild<QLineEdit *>("num2");
    if (num2LineEdit) {
        num2LineEdit->setReadOnly(true);
    } else {
        qDebug() << "Error: Unable to find num2LineEdit in the UI file!";
    }

    //resultLineEdit-kentän linkitys
    resultLineEdit = this->findChild<QLineEdit *>("result");
    if (resultLineEdit) {
        resultLineEdit->setReadOnly(true);
    } else {
        qDebug() << "Warning: resultLineEdit not found in the UI file. Results won't be displayed!";
    }

    // Numeronappien luonti ja signaalien kytkentä
    QPushButton *numberButtons[10];
    for (int i = 0; i < 10; ++i) {
        numberButtons[i] = this->findChild<QPushButton *>(QString("n%1").arg(i));
        connect(numberButtons[i], &QPushButton::clicked, this, &Laskin::numberClickHandler);
    }

    // Operaationappien luonti ja signaalien kytkentä
    QPushButton *operationButtons[4] = {
        this->findChild<QPushButton *>("add"),
        this->findChild<QPushButton *>("sub"),
        this->findChild<QPushButton *>("mul"),
        this->findChild<QPushButton *>("div")
    };
    for (int i = 0; i < 4; ++i) {
        connect(operationButtons[i], &QPushButton::clicked, this, &Laskin::operationClickHandler);
    }

    // Clear ja enter napit
    QPushButton *clearButton = this->findChild<QPushButton *>("clear");
    QPushButton *enterButton = this->findChild<QPushButton *>("enter");
    connect(clearButton, &QPushButton::clicked, this, &Laskin::clear);
    connect(enterButton, &QPushButton::clicked, this, &Laskin::calculate);

    state = 0;
}

//Tässä käsitellään numeronappien painallukset
void Laskin::numberClickHandler() {
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString buttonText = button->text();

    //Kumpaan syötekenttään numero tulee
    QLineEdit *currentLineEdit = (state == 0 || state == 1) ? num1LineEdit : num2LineEdit;
    QString currentText = currentLineEdit->text();
    currentLineEdit->setText(currentText + buttonText);

    //Numeron muuttujan päivitys sen mukaan mikä kenttä on käytössä
    if (state == 0 || state == 1)
        number1 = currentLineEdit->text();
    else
        number2 = currentLineEdit->text();
}

//Tässä käsitellään operaationappien painallukset
void Laskin::operationClickHandler() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString buttonText = button->text();
    operation = buttonText.at(0).toLatin1(); //operaation merkki talteen
    state = 2; //tilamuuttuja operaatiotilaan
}

//Tässä tyhjennetään syötekentät
void Laskin::clear() {
    number1.clear();
    number2.clear();
    num1LineEdit->clear();
    num2LineEdit->clear();
    resultLineEdit->clear();
    state = 0;
}

//Laskutoimitusten suorittaminen
void Laskin::calculate() {
    float num1 = number1.toFloat(); //numeromuuttujat luvuiksi
    float num2 = number2.toFloat();
    float result = 0; //tulosmuuttuja alustus

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            result = num1 / num2;
        else
            result = 0;
        break;
    }

    resultLineEdit->setText(QString::number(result));
}

Laskin::~Laskin()
{
    delete ui;
}
