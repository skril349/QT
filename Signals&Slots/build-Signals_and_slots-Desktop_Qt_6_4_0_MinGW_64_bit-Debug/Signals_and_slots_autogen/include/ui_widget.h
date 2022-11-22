/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *myButton;
    QLabel *label;
    QPushButton *button2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(555, 321);
        myButton = new QPushButton(Widget);
        myButton->setObjectName("myButton");
        myButton->setGeometry(QRect(170, 50, 80, 24));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 140, 311, 81));
        button2 = new QPushButton(Widget);
        button2->setObjectName("button2");
        button2->setGeometry(QRect(320, 50, 80, 24));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        myButton->setText(QCoreApplication::translate("Widget", "Click", nullptr));
        label->setText(QCoreApplication::translate("Widget", "GET OUT OF HERE", nullptr));
        button2->setText(QCoreApplication::translate("Widget", "button2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
