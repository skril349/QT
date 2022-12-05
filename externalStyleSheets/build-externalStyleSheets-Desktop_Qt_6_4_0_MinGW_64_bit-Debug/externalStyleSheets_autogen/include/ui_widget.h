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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lasNameLabel;
    QLineEdit *lastNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *firstNameLabel;
    QLineEdit *firstNameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *professionLabel;
    QLineEdit *professionLineEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *submitButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(783, 179);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lasNameLabel = new QLabel(Widget);
        lasNameLabel->setObjectName("lasNameLabel");

        horizontalLayout->addWidget(lasNameLabel);

        lastNameLineEdit = new QLineEdit(Widget);
        lastNameLineEdit->setObjectName("lastNameLineEdit");

        horizontalLayout->addWidget(lastNameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        firstNameLabel = new QLabel(Widget);
        firstNameLabel->setObjectName("firstNameLabel");

        horizontalLayout_2->addWidget(firstNameLabel);

        firstNameLineEdit = new QLineEdit(Widget);
        firstNameLineEdit->setObjectName("firstNameLineEdit");

        horizontalLayout_2->addWidget(firstNameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        professionLabel = new QLabel(Widget);
        professionLabel->setObjectName("professionLabel");

        horizontalLayout_3->addWidget(professionLabel);

        professionLineEdit = new QLineEdit(Widget);
        professionLineEdit->setObjectName("professionLineEdit");

        horizontalLayout_3->addWidget(professionLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        submitButton = new QPushButton(Widget);
        submitButton->setObjectName("submitButton");

        verticalLayout_2->addWidget(submitButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lasNameLabel->setText(QCoreApplication::translate("Widget", "Last name: ", nullptr));
        firstNameLabel->setText(QCoreApplication::translate("Widget", "First name : ", nullptr));
        professionLabel->setText(QCoreApplication::translate("Widget", "Profession : ", nullptr));
        submitButton->setText(QCoreApplication::translate("Widget", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
