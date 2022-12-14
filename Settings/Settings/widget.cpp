#include "widget.h"
#include "./ui_widget.h"
#include <QColor>
#include <QSettings>
#include <QColorDialog>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    for(int i = 0; i < 9; i++)
    {
        m_color_list.append(Qt::black);
    }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_OnepushButton_clicked()
{
    QColor color = QColorDialog::getColor(m_color_list[0],this,"Choose background color");
    if(color.isValid()){
        m_color_list[0]=color;

        QString css = QString("background-color : %1").arg(color.name());
        ui->OnepushButton->setStyleSheet(css);
    }
}


void Widget::on_TwoPushButton_clicked()
{
    QColor color = QColorDialog::getColor(m_color_list[1],this,"Choose background color");
    if(color.isValid()){
        m_color_list[1]=color;

        QString css = QString("background-color : %1").arg(color.name());
        ui->TwoPushButton->setStyleSheet(css);
    }
}


void Widget::on_ThreePushButton_clicked()
{
    QColor color = QColorDialog::getColor(m_color_list[2],this,"Choose background color");
    if(color.isValid()){
        m_color_list[2]=color;

        QString css = QString("background-color : %1").arg(color.name());
        ui->ThreePushButton->setStyleSheet(css);
    }
}


void Widget::on_fourPushButton_clicked()
{
    QColor color = QColorDialog::getColor(m_color_list[3],this,"Choose background color");
    if(color.isValid()){
        m_color_list[3]=color;

        QString css = QString("background-color : %1").arg(color.name());
        ui->fourPushButton->setStyleSheet(css);
    }
}


void Widget::on_fivePushButton_clicked()
{
    QColor color = QColorDialog::getColor(m_color_list[4],this,"Choose background color");
    if(color.isValid()){
        m_color_list[4]=color;

        QString css = QString("background-color : %1").arg(color.name());
        ui->fivePushButton->setStyleSheet(css);
    }
}


void Widget::on_sixPushButton_clicked()
{
    QColor color = QColorDialog::getColor(m_color_list[5],this,"Choose background color");
    if(color.isValid()){
        m_color_list[5]=color;

        QString css = QString("background-color : %1").arg(color.name());
        ui->sixPushButton->setStyleSheet(css);
    }
}


void Widget::on_sevenPushButton_clicked()
{
    QColor color = QColorDialog::getColor(m_color_list[6],this,"Choose background color");
    if(color.isValid()){
        m_color_list[6]=color;

        QString css = QString("background-color : %1").arg(color.name());
        ui->sevenPushButton->setStyleSheet(css);
    }
}


void Widget::on_eightPushButton_clicked()
{
    QColor color = QColorDialog::getColor(m_color_list[7],this,"Choose background color");
    if(color.isValid()){
        m_color_list[7]=color;

        QString css = QString("background-color : %1").arg(color.name());
        ui->eightPushButton->setStyleSheet(css);
    }
}


void Widget::on_ninePushButton_clicked()
{
    QColor color = QColorDialog::getColor(m_color_list[8],this,"Choose background color");
    if(color.isValid()){
        m_color_list[8]=color;

        QString css = QString("background-color : %1").arg(color.name());
        ui->ninePushButton->setStyleSheet(css);
    }
}


void Widget::on_saveSettings_clicked()
{


   save_color(QString("button1").arg(0),m_color_list[0]);
   save_color(QString("button2").arg(1),m_color_list[1]);
   save_color(QString("button3").arg(2),m_color_list[2]);
   save_color(QString("button4").arg(3),m_color_list[3]);
   save_color(QString("button5").arg(4),m_color_list[4]);
   save_color(QString("button6").arg(5),m_color_list[5]);
   save_color(QString("button7").arg(6),m_color_list[6]);
   save_color(QString("button8").arg(7),m_color_list[7]);
   save_color(QString("button9").arg(8),m_color_list[8]);


}


void Widget::on_loadSettings_clicked()
{
    set_loaded_color("button1",0,ui->OnepushButton);
    set_loaded_color("button2",1,ui->TwoPushButton);
    set_loaded_color("button3",2,ui->ThreePushButton);
    set_loaded_color("button4",3,ui->fourPushButton);
    set_loaded_color("button5",4,ui->fivePushButton);
    set_loaded_color("button6",5,ui->sixPushButton);
    set_loaded_color("button7",6,ui->sevenPushButton);
    set_loaded_color("button8",7,ui->eightPushButton);
    set_loaded_color("button9",8,ui->ninePushButton);
}

void Widget::save_color(QString key, QColor color)
{
    int red = color.red();
    int green = color.green();
    int blue = color.blue();

    QSettings settings("Blikoon","SettingsDemo");

    settings.beginGroup("ButtonColor");
    settings.setValue(key+"r",red);
    settings.setValue(key+"g",green);
    settings.setValue(key+"b",blue);
    settings.endGroup();


}

QColor Widget::load_color(QString key)
{
    int red;
    int green;
    int blue;
    QSettings settings("Blikoon","SettingsDemo");

    settings.beginGroup("ButtonColor");

    red = settings.value(key+"r",QVariant(0)).toInt();
    green = settings.value(key+"g",QVariant(0)).toInt();
    blue = settings.value(key+"b",QVariant(0)).toInt();
    settings.endGroup();

    return QColor(red,green,blue);
}

void Widget::set_loaded_color(QString key, int index, QPushButton *button)
{
    QColor color = load_color(key);
    m_color_list[index]= color;
    QString css = QString("background-color : %1").arg(color.name());
    button->setStyleSheet(css);
}

