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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *oneButton;
    QPushButton *fourButton;
    QPushButton *twoButton;
    QPushButton *fiveButton;
    QPushButton *threeButton;
    QPushButton *sixButton;
    QPushButton *sevenButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        oneButton = new QPushButton(Widget);
        oneButton->setObjectName("oneButton");
        oneButton->setGeometry(QRect(80, 200, 80, 24));
        fourButton = new QPushButton(Widget);
        fourButton->setObjectName("fourButton");
        fourButton->setGeometry(QRect(80, 240, 80, 24));
        twoButton = new QPushButton(Widget);
        twoButton->setObjectName("twoButton");
        twoButton->setGeometry(QRect(180, 200, 80, 24));
        fiveButton = new QPushButton(Widget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setGeometry(QRect(180, 240, 80, 24));
        threeButton = new QPushButton(Widget);
        threeButton->setObjectName("threeButton");
        threeButton->setGeometry(QRect(320, 200, 80, 24));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(threeButton->sizePolicy().hasHeightForWidth());
        threeButton->setSizePolicy(sizePolicy);
        sixButton = new QPushButton(Widget);
        sixButton->setObjectName("sixButton");
        sixButton->setGeometry(QRect(80, 270, 80, 24));
        sevenButton = new QPushButton(Widget);
        sevenButton->setObjectName("sevenButton");
        sevenButton->setGeometry(QRect(320, 270, 80, 24));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "ONE", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "FOUR", nullptr));
        twoButton->setText(QCoreApplication::translate("Widget", "TWO", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "FIVE", nullptr));
        threeButton->setText(QCoreApplication::translate("Widget", "THREE", nullptr));
        sixButton->setText(QCoreApplication::translate("Widget", "SIX", nullptr));
        sevenButton->setText(QCoreApplication::translate("Widget", "SEVEN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
