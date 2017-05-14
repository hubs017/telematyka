#include "lozko.h"
#include "ui_lozko.h"

lozko::lozko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lozko)
{
    ui->setupUi(this);
}

lozko::~lozko()
{
    delete ui;
}

void lozko::on_pushButton_clicked()
{
    this->close();
}

void lozko::zmien_lozko()
{
   ui->label_2->setText("kupa");
}


