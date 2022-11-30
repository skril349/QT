#include "widget.h"
#include "./ui_widget.h"
#include "infodialog.h"

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


void Widget::on_provideInfoButton_clicked()
{
    InfoDialog * dialog = new InfoDialog(this);

    //Only work with one window
    auto ret =dialog->exec();
    if(ret==QDialog::Accepted){
        QString position = dialog->position();
        QString os = dialog->favorite_os();
        ui->infoLabel->setText("Your Position is: "+position+" and your favorite os is : "+os);

    }else{

    }
    //non modal, working with multiple modal
   // dialog->show();
}

