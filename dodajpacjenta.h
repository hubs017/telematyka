#ifndef DODAJPACJENTA_H
#define DODAJPACJENTA_H

#include <QDialog>
#include "mainwindow.h"
#include "lozko.h"



namespace Ui {
class DodajPacjenta;
}

class DodajPacjenta : public QDialog
{
    Q_OBJECT

public:
    QString imie;
    QString nazwisko;


public:
    explicit DodajPacjenta(QWidget *parent = 0);
    ~DodajPacjenta();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::DodajPacjenta *ui;
};

#endif // DODAJPACJENTA_H
