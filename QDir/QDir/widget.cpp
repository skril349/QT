#include "widget.h"
#include "./ui_widget.h"
#include <QFile>
#include <QFileDialog>
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


void Widget::on_ChooseDirButton_clicked()
{
    QString filename = QFileDialog::getExistingDirectory(this,"Choose Folder");
    if(filename.isEmpty())
    {
        return;
    }
    ui->lineEdit->setText(filename);
}


void Widget::on_CreateDirButton_clicked()
{
    QString dirPath = ui->lineEdit->text();
    if(dirPath.isEmpty())
    {
        return;
    }
    QDir dir(dirPath);
    if(!dir.exists())
    {
        if(dir.mkpath(dirPath))
        {
            QMessageBox::information(this,"Message","Directory created");
        }
    }else{
        QMessageBox::information(this,"Message","Directory already exists");
    }
}


void Widget::on_ExistsDirButton_clicked()
{
    QString dirPath = ui->lineEdit->text();
    if(dirPath.isEmpty())
    {
        return;
    }
    QDir dir(dirPath);
    if(!dir.exists())
    {

        QMessageBox::information(this,"Message","Directory doesn'texists");

    }else{
        QMessageBox::information(this,"Message","Directory exists");
    }
}


void Widget::on_DirOrFileButton_clicked()
{
    QFileInfo fileInfo(ui->listWidget->currentItem()->text());
    if(fileInfo.isDir())
    {
        QMessageBox::information(this,"Message","This is a dir");
    }else if(fileInfo.isFile())
    {
        QMessageBox::information(this,"Message","This is a file");

    }else{
        QMessageBox::information(this,"Message","Something else");

    }
}


void Widget::on_FolderContent_clicked()
{
    ui->listWidget->clear();
    QString dirPath = ui->lineEdit->text();
    if(dirPath.isEmpty())
    {
        return;
    }
    QDir dir(dirPath);
    QList<QFileInfo> fileList = dir.entryInfoList();

    for(int i = 0; i<fileList.size();i++)
    {
        ui->listWidget->addItem(fileList.at(i).absoluteFilePath());
    }
}

