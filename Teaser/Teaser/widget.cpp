#include "widget.h"
#include "./ui_widget.h"
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


void Widget::on_submitButton_clicked()
{
    qDebug()<<"Last name :"<< ui->lastNameLineEdit->text();
    qDebug()<<"First name :"<< ui->firstNameLineEdit->text();
    qDebug()<<"message :"<< ui->messageTextEdit->toPlainText();

}

