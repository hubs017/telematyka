#include "dane_pacjenta.h"
#include "ui_dane_pacjenta.h"

Dane_Pacjenta::Dane_Pacjenta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dane_Pacjenta)
{
    ui->setupUi(this);

}

Dane_Pacjenta::~Dane_Pacjenta()
{
    delete ui;
}

void Dane_Pacjenta::pokaz_id(QString s)
{
    read_patient(s);
    wstaw_dane();
}

void Dane_Pacjenta::wstaw_dane(void){
    ui->label_6->setText(imie);
    ui->label_7->setText(nazwisko);
    ui->label_8->setText(wiek);
    ui->label_9->setText(data_ur);
    ui->label_10->setText(pesel);
}

void Dane_Pacjenta::read_patient(QString s)
{

    QNetworkAccessManager *nam = new QNetworkAccessManager(this);

    QNetworkReply *reply = nam->get( QNetworkRequest(QUrl("http://matalbec.pythonanywhere.com/patient_database/?action=get_by_id&patient_id="+s)));
    QEventLoop loop;
    QObject::connect(reply, SIGNAL(readyRead()), &loop, SLOT(quit()));
    loop.exec();

                QString strReply = (QString)reply->readAll();
                QJsonDocument jsonResponse = QJsonDocument::fromJson(strReply.toUtf8());
                QJsonObject jsonObj = jsonResponse.object();
                imie=jsonObj["name"].toString();
                nazwisko=jsonObj["surname"].toString();
                wiek=jsonObj["age"].toString();
                data_ur=jsonObj["birth_date"].toString();
                pesel=jsonObj["pesel"].toString();

}
