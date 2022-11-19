#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
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


void Widget::on_myButton_clicked()
{
    qDebug()<<"Hello World";
    QMessageBox::warning(this,"message", "You had to click the button.");

}

