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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *activeButton;
    QPushButton *disableButton;
    QLabel *labelStyleSheet;
    QLabel *textLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        activeButton = new QPushButton(Widget);
        activeButton->setObjectName("activeButton");
        activeButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));

        horizontalLayout->addWidget(activeButton);

        disableButton = new QPushButton(Widget);
        disableButton->setObjectName("disableButton");
        disableButton->setEnabled(false);
        disableButton->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        horizontalLayout->addWidget(disableButton);


        verticalLayout->addLayout(horizontalLayout);

        labelStyleSheet = new QLabel(Widget);
        labelStyleSheet->setObjectName("labelStyleSheet");
        labelStyleSheet->setStyleSheet(QString::fromUtf8("background-color: rgb(183, 248, 255);\n"
"color: rgb(255, 85, 255);"));

        verticalLayout->addWidget(labelStyleSheet);

        textLabel = new QLabel(Widget);
        textLabel->setObjectName("textLabel");
        QFont font;
        font.setPointSize(48);
        font.setBold(true);
        textLabel->setFont(font);

        verticalLayout->addWidget(textLabel);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        activeButton->setText(QCoreApplication::translate("Widget", "Active", nullptr));
        disableButton->setText(QCoreApplication::translate("Widget", "Disable", nullptr));
        labelStyleSheet->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        textLabel->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
