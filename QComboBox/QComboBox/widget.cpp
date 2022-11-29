#include "widget.h"
#include "./ui_widget.h"
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Earth");
    ui->comboBox->addItem("Venus");
    ui->comboBox->addItem("Mars");
    ui->comboBox->addItem("Pluton");
    ui->comboBox->addItem("Saturn");

    ui->comboBox->setEditable(true);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_captureButton_clicked()
{
    ui->comboBox->addItem("Item "+QString::number(ui->comboBox->count()-1));
}


void Widget::on_currentButton_clicked()
{
    ui->comboBox->removeItem(ui->comboBox->currentIndex());
}



