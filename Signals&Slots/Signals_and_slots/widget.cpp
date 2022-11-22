#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //String notation
    connect(ui->myButton, SIGNAL(clicked()),this, SLOT(changeText()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText()
{
    ui->label->setText("Hello how are you");
}


void Widget::on_button2_clicked()
{
    ui->label->setText("pressed by function not signals and slots");
}

