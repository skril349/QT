#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //String notation
    connect(ui->myButton, SIGNAL(clicked()),this, SLOT(changeText()));
    //slide bar notation
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),this,SLOT(respond(int)));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText()
{
    ui->label->setText("Hello how are you");
}

void Widget::respond(int value)
{
    qDebug()<<"value : "<<value;
}


void Widget::on_button2_clicked()
{
    ui->label->setText("pressed by function not signals and slots");
}

