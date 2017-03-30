#ifndef DODAJ_PACJENTA_H
#define DODAJ_PACJENTA_H

#include <QAbstractItemModel>

class Dodaj_pacjenta : public QAbstractItemModel
{
    Q_OBJECT

public:
    explicit Dodaj_pacjenta(QObject *parent = 0);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    QModelIndex index(int row, int column,
                      const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex &index) const override;

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
};

#endif // DODAJ_PACJENTA_H