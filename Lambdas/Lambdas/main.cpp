#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Lambda functions
    auto func = [](){
        qDebug()<<"Hello World \n";
    };

    func();

    return a.exec();
}
