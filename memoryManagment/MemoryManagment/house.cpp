#include "house.h"
#include <QDebug>

House::House(QObject *parent, const QString &description)
    : QObject(parent),m_description((description))
{
    qDebug()<<"House object constructed";
}

House::~House()
{
qDebug()<<"house object "<< m_description <<"destructed";
}

void House::print_info() const
{
    qDebug()<<"description"<<m_description;

}
