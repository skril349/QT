#include "animal.h"

Animal::Animal(QObject *parent)
    : QObject{parent}
{
    qDebug()<< this <<"Constructed";
}

void Animal::speak(QString message)
{
    qDebug()<< this <<message;
}

