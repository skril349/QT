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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *beerChekBox;
    QCheckBox *juiceChekBox;
    QCheckBox *coffeeChekBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *windowsChekBox;
    QCheckBox *macChekBox;
    QCheckBox *LinuxChekBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *AradioButton;
    QRadioButton *BRadioButton;
    QRadioButton *CRadioButton;
    QVBoxLayout *verticalLayout_4;
    QPushButton *grabData;
    QPushButton *setData;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(819, 347);
        verticalLayout_6 = new QVBoxLayout(Widget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        beerChekBox = new QCheckBox(groupBox_2);
        beerChekBox->setObjectName("beerChekBox");

        verticalLayout_2->addWidget(beerChekBox);

        juiceChekBox = new QCheckBox(groupBox_2);
        juiceChekBox->setObjectName("juiceChekBox");

        verticalLayout_2->addWidget(juiceChekBox);

        coffeeChekBox = new QCheckBox(groupBox_2);
        coffeeChekBox->setObjectName("coffeeChekBox");

        verticalLayout_2->addWidget(coffeeChekBox);


        horizontalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        windowsChekBox = new QCheckBox(groupBox);
        windowsChekBox->setObjectName("windowsChekBox");

        verticalLayout->addWidget(windowsChekBox);

        macChekBox = new QCheckBox(groupBox);
        macChekBox->setObjectName("macChekBox");

        verticalLayout->addWidget(macChekBox);

        LinuxChekBox = new QCheckBox(groupBox);
        LinuxChekBox->setObjectName("LinuxChekBox");

        verticalLayout->addWidget(LinuxChekBox);


        horizontalLayout->addWidget(groupBox);


        verticalLayout_5->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        AradioButton = new QRadioButton(groupBox_3);
        AradioButton->setObjectName("AradioButton");

        verticalLayout_3->addWidget(AradioButton);

        BRadioButton = new QRadioButton(groupBox_3);
        BRadioButton->setObjectName("BRadioButton");

        verticalLayout_3->addWidget(BRadioButton);

        CRadioButton = new QRadioButton(groupBox_3);
        CRadioButton->setObjectName("CRadioButton");

        verticalLayout_3->addWidget(CRadioButton);


        verticalLayout_5->addWidget(groupBox_3);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        grabData = new QPushButton(Widget);
        grabData->setObjectName("grabData");

        verticalLayout_4->addWidget(grabData);

        setData = new QPushButton(Widget);
        setData->setObjectName("setData");

        verticalLayout_4->addWidget(setData);


        verticalLayout_6->addLayout(verticalLayout_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "Drink(No excluisve)", nullptr));
        beerChekBox->setText(QCoreApplication::translate("Widget", "Beer", nullptr));
        juiceChekBox->setText(QCoreApplication::translate("Widget", "Juice", nullptr));
        coffeeChekBox->setText(QCoreApplication::translate("Widget", "Coffee", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "OS(Exclusive)", nullptr));
        windowsChekBox->setText(QCoreApplication::translate("Widget", "Windows", nullptr));
        macChekBox->setText(QCoreApplication::translate("Widget", "Mac", nullptr));
        LinuxChekBox->setText(QCoreApplication::translate("Widget", "Linux", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "ChooseOne", nullptr));
        AradioButton->setText(QCoreApplication::translate("Widget", "A", nullptr));
        BRadioButton->setText(QCoreApplication::translate("Widget", "B", nullptr));
        CRadioButton->setText(QCoreApplication::translate("Widget", "C", nullptr));
        grabData->setText(QCoreApplication::translate("Widget", "grab data", nullptr));
        setData->setText(QCoreApplication::translate("Widget", "set data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
