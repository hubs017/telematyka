#include "baza_pacjentow.h"
#include "ui_baza_pacjentow.h"

baza_pacjentow::baza_pacjentow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::baza_pacjentow)
{

    ui->setupUi(this);

    for(qint32 i=1;i<12;i++)
    {
    read_patient(id.setNum(i));
    ui->listWidget->addItem(id.setNum(i)+" "+imie+" "+nazwisko);
    }

}

baza_pacjentow::~baza_pacjentow()
{
    delete ui;
}


void baza_pacjentow::read_patient(QString s)
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

}




void baza_pacjentow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    qint32 a=ui->listWidget->currentRow();
   a++;
    QString b=QString::number(a);
    Dane_Pacjenta dp;
    dp.setModal(true);
    dp.pokaz_id(b);
    dp.exec();
}
