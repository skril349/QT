#include <QCoreApplication>
#include <QDebug>
#include "test.h"

void wow()
{
    //creant un pointer managment automatic
   std::unique_ptr<Test> t(new Test());
   t->doStuff();
}

void test(QString value) //funció que genera una copia i la destrueix al final de la funció
{
    qInfo()<< &value <<"size: "<<value.length();
}

void testPtr(QString *value)
{
    qInfo()<<"P"<< value <<"size: "<<value->length();
    qInfo()<<"A"<< &value <<"size: "<<value->length();
}

void display(QString *value)
{
    qInfo()<<"The pointer points to: "<<value;
    qInfo()<<"The pointer address to: "<<&value;
    qInfo()<<"The pointer data is: "<<*value;


}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString name = "Bryan";
    qInfo()<< &name <<"size: "<<name.length();
    test(name);
    testPtr(&name);
    qInfo()<< &name <<"size: "<<name.length();


    QString *description = new QString("Hello pointer");

    display(description);
    qInfo()<< description;
    delete description;


    qInfo() << "starting";
    wow();
    qInfo() << "finished";

    return a.exec();
}
