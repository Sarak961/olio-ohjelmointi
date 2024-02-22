#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QLineEdit>

class MyWidget : public QWidget {  //QWidget perisi MyWidget ominaisuudet
    Q_OBJECT //Makro Q:n metatietojen käsittelyyn
public:
    explicit MyWidget(QWidget *parent = nullptr);

private slots:
    void countButtonClicked(); //Slotti count napin klikkausten käsittelyyn
    void resetButtonClicked(); //Slotti reset napin klikkauksen käsittelyyn

private:
    QLineEdit *lineEdit; //Tekstikentän osoitin
};

#endif // MYWIDGET_H
