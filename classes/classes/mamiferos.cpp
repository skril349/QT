#include "mamiferos.h"

mamiferos::mamiferos(QObject *parent)
    : Animal{parent}
{
    qInfo() <<this <<"constructed";
}
