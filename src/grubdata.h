#pragma once
#include <QObject>
#include <QAbstractListModel>

class GrubData : public QAbstractListModel{

    Q_OBJECT



public:
    explicit GrubData(QObject *parent = nullptr);

private:
    void load();
    
};
