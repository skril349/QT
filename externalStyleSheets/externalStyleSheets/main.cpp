#include "widget.h"

#include <QApplication>
#include <QFile>
#include <Qstring>

QString readTextFile(QString path)
{
    QFile file(path);

    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        return in.readAll();
    }
    return "";

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //:/styles/style.css
    QString css = readTextFile(":/styles/style.css");
    if(css.length()>0){
            a.setStyleSheet(css);
}
    Widget w;
    w.show();
    return a.exec();
}
