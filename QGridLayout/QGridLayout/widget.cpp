#include "widget.h"
#include "./ui_widget.h"
#include <QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QGridLayout * layout = new QGridLayout();
    layout->addWidget(ui->oneButton,0,0);
    layout->addWidget(ui->twoButton,0,1);
    layout->addWidget(ui->threeButton,0,2,2,1);
    layout->addWidget(ui->fourButton,1,0);
    layout->addWidget(ui->fiveButton,1,1);
    layout->addWidget(ui->sixButton,2,0,1,2);
    layout->addWidget(ui->sevenButton,2,2);

    setLayout(layout);
}

Widget::~Widget()
{
    delete ui;
}

