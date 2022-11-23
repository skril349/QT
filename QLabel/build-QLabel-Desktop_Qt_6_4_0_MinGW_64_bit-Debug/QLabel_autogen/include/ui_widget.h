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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *imageLabel;
    QLabel *minionTextLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        imageLabel = new QLabel(Widget);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(20, 50, 751, 541));
        minionTextLabel = new QLabel(Widget);
        minionTextLabel->setObjectName("minionTextLabel");
        minionTextLabel->setGeometry(QRect(130, 30, 291, 71));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        minionTextLabel->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        imageLabel->setText(QString());
        minionTextLabel->setText(QCoreApplication::translate("Widget", "MINION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
