#include "widget.h"
#include "./ui_widget.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>

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


void Widget::on_WritePushButton_clicked()
{
    //Save the file to disk
    QString filename = QFileDialog::getSaveFileName(this,"Save As");
    if(filename.isEmpty()){
        return;
    }
    QFile file(filename);

    //Open the file
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
        return;
    }

    QTextStream out(&file);

    out << ui->textEdit ->toPlainText()<<"\n";
    file.close();
}


void Widget::on_ReadPushButton_clicked()
{
    QString fileContent;

    //save the file to the disk
    QString filename = QFileDialog::getOpenFileName(this,"Open File");

    if(filename.isEmpty())
        return;
    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    QTextStream in(&file);
    QString line = in.readLine();

    while(!line.isNull()){
        fileContent.append(line);
        line = in.readLine();

    }
    file.close();
    ui->textEdit->clear();
    ui->textEdit->setPlainText(fileContent);

}


void Widget::on_CopyPushButton_clicked()
{
    QString srcFileName = ui->SourceLineEdit->text();
    QString destFileName = ui->DestinationLineEdit->text();

    if(srcFileName.isEmpty() || destFileName.isEmpty())
        return;
    QFile file(srcFileName);
    if(file.copy(destFileName))
    {
        QMessageBox::information(this,"Success","Copy Successful");
    }else{
        QMessageBox::information(this,"Failure","Copy Failed");
    }

}


void Widget::on_selectFilePushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,"Choose File");
    if(filename.isEmpty())
        return;
    ui->SourceLineEdit->setText(filename);

}


