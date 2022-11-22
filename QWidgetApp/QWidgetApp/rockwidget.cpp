#include "rockwidget.h"
#include <QMessageBox>
#include <QPushButton>
#include <QLabel>

RockWidget::RockWidget(QWidget *parent)
    : QWidget{parent}
{
    QLabel *label = new QLabel(this);
    label -> setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label->setText("First line\nsecondline");
    label->move(50,50);

    //Add styled widget and move it around
    QPalette label1Palette;
    label1Palette.setColor(QPalette::Window,Qt::yellow);
    label1Palette.setColor(QPalette::WindowText,Qt::blue);

    QFont label1Font("Times",20,QFont::Bold);

    QLabel *label1 = new QLabel(this);
    label1->setAutoFillBackground(true);
    label1 -> setFrameStyle(QFrame::Panel | QFrame::Sunken);
    label1->setText("My colored label");
    label1->setFont(label1Font);
    label1->setPalette(label1Palette);
    label1->move(150,50);

    QFont buttonFont("Times",30,QFont::Bold);
    QPushButton * button = new QPushButton(this);
    button->setText("Click me");
    button->setFont(buttonFont);
    button->move(100,125);
    connect(button,SIGNAL(clicked()),this,SLOT(butonClicked()));

}

void RockWidget::butonClicked()
{
    QMessageBox::information(this,"Message","You clicked button");
}

QSize RockWidget::sizeHint() const
{
    return QSize(500,500);
}
