#ifndef BAZA_PACJENTOW_H
#define BAZA_PACJENTOW_H

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

#include <dane_pacjenta.h>

namespace Ui {
class baza_pacjentow;
}

class baza_pacjentow : public QDialog
{
    Q_OBJECT

public:
    explicit baza_pacjentow(QWidget *parent = 0);
    ~baza_pacjentow();

public:
    QString id;
    QString imie;
    QString nazwisko;

public slots:
    void read_patient(QString);


private slots:


    void on_listWidget_doubleClicked(const QModelIndex &index);

private:
    Ui::baza_pacjentow *ui;
};

#endif // BAZA_PACJENTOW_H
