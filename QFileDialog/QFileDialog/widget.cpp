#include "widget.h"
#include "./ui_widget.h"
#include <QFileDialog>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_chooseButton_clicked()
{
    //Select directory
//    QString dir = QFileDialog::getExistingDirectory(this,tr("Open Directory"),QString(),QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
//    if(!dir.isEmpty()){
//        qDebug()<<"Your chosed dir is: "<<dir;
//    }else{
//        qDebug()<<"Yourdidn't select anything";

//    }


    //Select file
//    QString fileName = QFileDialog::getOpenFileName(this,tr("Open FIle"),QString(),tr("Images(*.png *.xpm *.jpg *.jpeg"));
//    qDebug() <<"Your chosed file is : "<<fileName;


    QStringList files = QFileDialog::getOpenFileNames(this,"Select One or more files to open",QString(),"Images((*.png *.xpm *.jpg *.jpeg);;Text files (*.txt);;XML files (*.xml)");
    for(auto f :files){
        qDebug()<<f;
    }
    qDebug()<<files;

    //to save data
//    QString fileName = QDialog:getSaveFileName(this,"SaveFile",QString(),tr("Images (*.png, *.xmp *.jpg *.peg"));
//    qDebug()<<"Your chosen filename is : "<<fileName;

}

