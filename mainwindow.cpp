#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    DodajPacjenta dp;
    dp.setModal(true);
    dp.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    lozko l;
    l.setModal(true);
    l.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    baza_pacjentow bp;
    bp.setModal(true);
    bp.exec();
}
