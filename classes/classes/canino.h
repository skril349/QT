#ifndef CANINO_H
#define CANINO_H

#include <QObject>
#include "mamiferos.h"
class canino : public mamiferos
{
    Q_OBJECT
public:
    explicit canino(QObject *parent = nullptr);
    void bark();

signals:

};

#endif // CANINO_H
