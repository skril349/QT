#include <QCoreApplication>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Test test;

    double value = 5.75;
    qInfo()<<"Double:"<<value;
    return a.exec();
}
