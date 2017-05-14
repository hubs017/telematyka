#include "dodajpacjenta.h"
#include "ui_dodajpacjenta.h"
#include"mainwindow.h"
#include "lozko.h"





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




void DodajPacjenta::add_patient(QString i,QString n,QString w,QString d,QString p)
{
    QNetworkAccessManager *nam = new QNetworkAccessManager(this);
    QNetworkReply *reply = nam->get( QNetworkRequest(QUrl("http://matalbec.pythonanywhere.com/patient_database/?action=login&user=John.Watson&password=pass123")));

    //QNetworkReply *reply = nam->get( QNetworkRequest(QUrl("http://matalbec.pythonanywhere.com/patient_database/?action=login&user=John.Watson&password=pass123&insert&patient_name="+imie+"&patient_surname="+nazwisko+"&patient_age="+wiek+"&birth_date="+data_ur+"&pesel="+pesel)));
    QEventLoop loop;
    QObject::connect(reply, SIGNAL(readyRead()), &loop, SLOT(quit()));
    loop.exec();
}

void DodajPacjenta::on_pushButton_2_clicked()
{
    imie=ui->lineEdit->text();
    nazwisko=ui->lineEdit_2->text();
    wiek=ui->lineEdit_3->text();
    data_ur=ui->lineEdit_4->text();
    pesel=ui->lineEdit_5->text();
    add_patient(imie,nazwisko,wiek,data_ur,pesel);

    QMessageBox::information(this,"kupa","Dodano pacjenta: "+imie+" "+nazwisko);
    this->close();
}
