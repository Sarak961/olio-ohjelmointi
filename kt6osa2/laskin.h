#ifndef LASKIN_H
#define LASKIN_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class Laskin;
}
QT_END_NAMESPACE


//Laskin-luokka perii qmainwindow luokan ominaisuudet
class Laskin : public QMainWindow
{
    Q_OBJECT //signaali- ja slottimekanismia varten

public:
    Laskin(QWidget *parent = nullptr);
    ~Laskin();

//slotit eri toiminnoille
private slots:
    void numberClickHandler();
    void operationClickHandler();
    void clear();
    void calculate();

private:
    Ui::Laskin *ui;  //Osoitin käyttöliittymälle
    QLineEdit *num1LineEdit;
    QLineEdit *num2LineEdit;
    QLineEdit *resultLineEdit;
    QString number1;
    QString number2;
    char operation;
    int state;
    float result;
};
#endif // LASKIN_H
