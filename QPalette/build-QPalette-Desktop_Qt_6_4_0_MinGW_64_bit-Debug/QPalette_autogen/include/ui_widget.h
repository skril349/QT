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

        horizontalLayout->addWidget(activeButton);

        disableButton = new QPushButton(Widget);
        disableButton->setObjectName("disableButton");
        disableButton->setEnabled(false);

        horizontalLayout->addWidget(disableButton);


        verticalLayout->addLayout(horizontalLayout);

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
        textLabel->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
