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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *OnepushButton;
    QPushButton *TwoPushButton;
    QPushButton *ThreePushButton;
    QPushButton *fourPushButton;
    QPushButton *fivePushButton;
    QPushButton *sixPushButton;
    QPushButton *sevenPushButton;
    QPushButton *eightPushButton;
    QPushButton *ninePushButton;
    QPushButton *saveSettings;
    QPushButton *loadSettings;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(673, 347);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        OnepushButton = new QPushButton(Widget);
        OnepushButton->setObjectName("OnepushButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OnepushButton->sizePolicy().hasHeightForWidth());
        OnepushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(OnepushButton, 0, 0, 1, 1);

        TwoPushButton = new QPushButton(Widget);
        TwoPushButton->setObjectName("TwoPushButton");
        sizePolicy.setHeightForWidth(TwoPushButton->sizePolicy().hasHeightForWidth());
        TwoPushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(TwoPushButton, 0, 1, 1, 1);

        ThreePushButton = new QPushButton(Widget);
        ThreePushButton->setObjectName("ThreePushButton");
        sizePolicy.setHeightForWidth(ThreePushButton->sizePolicy().hasHeightForWidth());
        ThreePushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ThreePushButton, 0, 2, 1, 1);

        fourPushButton = new QPushButton(Widget);
        fourPushButton->setObjectName("fourPushButton");
        sizePolicy.setHeightForWidth(fourPushButton->sizePolicy().hasHeightForWidth());
        fourPushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(fourPushButton, 1, 0, 1, 1);

        fivePushButton = new QPushButton(Widget);
        fivePushButton->setObjectName("fivePushButton");
        sizePolicy.setHeightForWidth(fivePushButton->sizePolicy().hasHeightForWidth());
        fivePushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(fivePushButton, 1, 1, 1, 1);

        sixPushButton = new QPushButton(Widget);
        sixPushButton->setObjectName("sixPushButton");
        sizePolicy.setHeightForWidth(sixPushButton->sizePolicy().hasHeightForWidth());
        sixPushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(sixPushButton, 1, 2, 1, 1);

        sevenPushButton = new QPushButton(Widget);
        sevenPushButton->setObjectName("sevenPushButton");
        sizePolicy.setHeightForWidth(sevenPushButton->sizePolicy().hasHeightForWidth());
        sevenPushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(sevenPushButton, 2, 0, 1, 1);

        eightPushButton = new QPushButton(Widget);
        eightPushButton->setObjectName("eightPushButton");
        sizePolicy.setHeightForWidth(eightPushButton->sizePolicy().hasHeightForWidth());
        eightPushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(eightPushButton, 2, 1, 1, 1);

        ninePushButton = new QPushButton(Widget);
        ninePushButton->setObjectName("ninePushButton");
        sizePolicy.setHeightForWidth(ninePushButton->sizePolicy().hasHeightForWidth());
        ninePushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ninePushButton, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        saveSettings = new QPushButton(Widget);
        saveSettings->setObjectName("saveSettings");

        verticalLayout->addWidget(saveSettings);

        loadSettings = new QPushButton(Widget);
        loadSettings->setObjectName("loadSettings");

        verticalLayout->addWidget(loadSettings);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        OnepushButton->setText(QCoreApplication::translate("Widget", "One", nullptr));
        TwoPushButton->setText(QCoreApplication::translate("Widget", "Two", nullptr));
        ThreePushButton->setText(QCoreApplication::translate("Widget", "Three", nullptr));
        fourPushButton->setText(QCoreApplication::translate("Widget", "Four", nullptr));
        fivePushButton->setText(QCoreApplication::translate("Widget", "Five", nullptr));
        sixPushButton->setText(QCoreApplication::translate("Widget", "Six", nullptr));
        sevenPushButton->setText(QCoreApplication::translate("Widget", "Seven", nullptr));
        eightPushButton->setText(QCoreApplication::translate("Widget", "Eight", nullptr));
        ninePushButton->setText(QCoreApplication::translate("Widget", "Nine", nullptr));
        saveSettings->setText(QCoreApplication::translate("Widget", "save settings", nullptr));
        loadSettings->setText(QCoreApplication::translate("Widget", "load Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
