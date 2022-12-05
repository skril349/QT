#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
#include <QPalette>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->textLabel->setAutoFillBackground(true);
    QPalette palette = ui->textLabel->palette();
    palette.setColor(QPalette::Window,Qt::blue);
    palette.setColor(QPalette::WindowText,Qt::red);

    ui->textLabel->setPalette(palette);


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_activeButton_clicked()
{
    qDebug()<<"active button";
    //ui->disableButton->setEnabled(true);
    QPalette::ColorGroup activeButtonColorGroup = ui->activeButton->palette().currentColorGroup();
    QPalette::ColorGroup disabledButtonColorGroup = ui->disableButton->palette().currentColorGroup();
    qDebug()<<"active button color group "<<activeButtonColorGroup;
    qDebug()<<"disabled button color group "<<disabledButtonColorGroup;

}


void Widget::on_disableButton_clicked()
{
    qDebug()<<"disable button";
}

