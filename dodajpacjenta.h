#ifndef DODAJPACJENTA_H
#define DODAJPACJENTA_H

#include <QDialog>
#include "mainwindow.h"
#include "lozko.h"
#include <QMessageBox>
#include<QNetworkReply>
#include<QEventLoop>
#include<QNetworkAccessManager>




namespace Ui {
class DodajPacjenta;
}

class DodajPacjenta : public QDialog
{
    Q_OBJECT

public:
    QString imie;
    QString nazwisko;
    QString wiek;
    QString data_ur;
    QString pesel;




public:
    explicit DodajPacjenta(QWidget *parent = 0);
    ~DodajPacjenta();



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
public slots:
    void add_patient(QString,QString,QString,QString,QString);

private:
    Ui::DodajPacjenta *ui;
};

#endif // DODAJPACJENTA_H
