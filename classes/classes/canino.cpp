#include "canino.h"

canino::canino(QObject *parent)
    : mamiferos{parent}
{
    qInfo() <<this <<"consutructed";
}

void canino::bark()
{
    qInfo() <<"bark!";
}
