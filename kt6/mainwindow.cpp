#include <QVBoxLayout>
#include "mainwindow.h"
#include <QPushButton>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent) {
    //Tekstikentän luonti
    lineEdit = new QLineEdit(this); //QLineEdit olion luominen
    lineEdit->setReadOnly(true); //Tarkoitus oli vain lukea tekstikenttää
    lineEdit->setText("0");

    //Painikkeiden luominen
    QPushButton *countButton = new QPushButton("Count", this); //Uusi count painike
    QPushButton *resetButton = new QPushButton("Reset", this); //Uusi reset painike

    //Yhdistetään klikkaukset slotteihin
    connect(countButton, &QPushButton::clicked, this, &MyWidget::countButtonClicked);
    connect(resetButton, &QPushButton::clicked, this, &MyWidget::resetButtonClicked);

    //Halusin pystysuuntaisen layoutin, ei toiminut
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(lineEdit);
    layout->addWidget(countButton);
    layout->addWidget(resetButton);
    setLayout(layout);
}

void MyWidget::countButtonClicked() {
    //Tekstikentän arvo numeroiksi
    QString currentText = lineEdit->text();
    int currentValue = currentText.toInt();

    //Tekstikentän arvon kasvatus yhdellä, päivitetään kentän sisältö
    currentValue++;
    lineEdit->setText(QString::number(currentValue));
}

//Kentän sisällön nollaus
void MyWidget::resetButtonClicked() {
    lineEdit->setText("0");
}
