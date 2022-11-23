#include "widget.h"
#include "./ui_widget.h"
#include <QButtonGroup>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QButtonGroup * group = new QButtonGroup(this);
    group ->addButton(ui->windowsChekBox);
    group->addButton(ui->macChekBox);
    group->addButton(ui->LinuxChekBox);
    group->setExclusive(true);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_windowsChekBox_toggled(bool checked)
{
    if(checked){
        qDebug()<<"Windows checked";
    }else{
        qDebug()<<"Windows not checked";

    }
}


void Widget::on_beerChekBox_toggled(bool checked)
{
    if(checked){
        qDebug()<<"beer checked";
    }else{
        qDebug()<<"beer not checked";

    }
}


void Widget::on_grabData_clicked()
{
    if(ui->beerChekBox->isChecked()){
        qDebug()<<"beer checked";

    }else{
        qDebug()<<"beer not checked";

    }
}

