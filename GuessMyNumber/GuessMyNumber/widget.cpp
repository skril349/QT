#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
#include <cstdlib>
#include <ctime>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //st up the seed
    std::srand(std::time(nullptr));
    secretNumber = std::rand()%10 +1 ;
    qDebug()<<"Secret number generated :" <<secretNumber;
    ui->startOverButton->setDisabled(true);
    ui->messageLabel -> setText("");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_guessButton_clicked()
{
    qDebug()<<"guess button clicked";
    guessNumber = ui->numberSpinBox->value();
    if(guessNumber == secretNumber){
        ui->startOverButton->setDisabled(false);
        ui->messageLabel -> setText("Correct, the secret number is "+ QString::number(secretNumber));
    }

    if(guessNumber > secretNumber){
        ui->messageLabel -> setText("You number is bigger than value");
    }
    if(guessNumber < secretNumber){
        ui->messageLabel -> setText("You number is smaller than value");
    }

}


void Widget::on_startOverButton_clicked()
{
    qDebug()<<"start over button clicked";
    secretNumber = std::rand()%10 +1 ;
    qDebug()<<"Secret number generated :" <<secretNumber;
    ui->startOverButton->setDisabled(true);
    ui->numberSpinBox->setValue(1);

}

