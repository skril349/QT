#ifndef MAMIFEROS_H
#define MAMIFEROS_H

#include <QObject>
#include "animal.h"

class mamiferos : public Animal
{
    Q_OBJECT
public:
    explicit mamiferos(QObject *parent = nullptr);

    bool hasBackBone()
    {
        return true;
    }

signals:

};

#endif // MAMIFEROS_H
