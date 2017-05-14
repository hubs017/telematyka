#ifndef DANE_PACJENTA_H
#define DANE_PACJENTA_H

#include <QDialog>
#include <QDialog>
#include <QCoreApplication>
#include <QDebug>
#include <QApplication>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QUrlQuery>
#include <QVariant>
#include <QJsonValue>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QJsonArray>


namespace Ui {
class Dane_Pacjenta;
}

class Dane_Pacjenta : public QDialog
{
    Q_OBJECT

public:
    explicit Dane_Pacjenta(QWidget *parent = 0);
    ~Dane_Pacjenta();

public slots:
    void pokaz_id(QString);
    void read_patient(QString);
    void wstaw_dane(void);
public:
    QString imie;
    QString nazwisko;
    QString wiek;
    QString data_ur;
    QString pesel;


private:
    Ui::Dane_Pacjenta *ui;
};

#endif // DANE_PACJENTA_H
