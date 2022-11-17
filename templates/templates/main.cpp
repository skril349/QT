#include <QCoreApplication>
#include "test.h"
template<class T>
void print(T value)
{
    qInfo()<<"value "<<value;
}

template<class T, class F>
T add(T valueT, F valueF){
    return valueT + valueF;
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    print<int>(1);
    print<QString>("hey whats up");
    print<double>(126.0123);

    qInfo()<<add<int,double>(3, 3.23);
    qInfo()<<add("Hello dude ", 3);

    Test<int> intCalc;
    qInfo()<<intCalc.sum(3,5);

    Test<double> dCalc;
    qInfo()<<intCalc.sum(3.234,5.12);

    Test<QString> sCalc;
    qInfo()<<sCalc.sum(QString("Hello "),QString("dude"));
    return a.exec();
}
