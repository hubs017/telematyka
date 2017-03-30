#include "dodajpacjenta.h"
#include "ui_dodajpacjenta.h"

#include <QMessageBox>


DodajPacjenta::DodajPacjenta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DodajPacjenta)
{
    ui->setupUi(this);
}

DodajPacjenta::~DodajPacjenta()
{
    delete ui;
}

void DodajPacjenta::on_pushButton_clicked()
{
    this->close();
}

void DodajPacjenta::on_pushButton_2_clicked()
{
    imie=ui->lineEdit->text();
    nazwisko=ui->lineEdit_2->text();

QMessageBox::information(this,"kupa","Dodano pacjenta: "+imie+" "+nazwisko);
//QMessageBox::information(this,"kupa","Temu pacjentowi juz nic nie pomoze");
    this->close();
}
