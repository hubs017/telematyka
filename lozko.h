#ifndef LOZKO_H
#define LOZKO_H

#include <QDialog>
#include<dodajpacjenta.h>

namespace Ui {
class lozko;
}

class lozko : public QDialog
{
    Q_OBJECT





public:
    explicit lozko(QWidget *parent = 0);
    ~lozko();

private slots:
    void on_pushButton_clicked();
public slots:
    void zmien_lozko(void);

private:
    Ui::lozko *ui;
};

#endif // LOZKO_H
