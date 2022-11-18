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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lastNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *firstNameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QTextEdit *messageTextEdit;
    QPushButton *submitButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(689, 399);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(Widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lastNameLineEdit = new QLineEdit(Widget);
        lastNameLineEdit->setObjectName("lastNameLineEdit");

        horizontalLayout->addWidget(lastNameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        firstNameLineEdit = new QLineEdit(Widget);
        firstNameLineEdit->setObjectName("firstNameLineEdit");

        horizontalLayout_2->addWidget(firstNameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        messageTextEdit = new QTextEdit(Widget);
        messageTextEdit->setObjectName("messageTextEdit");

        horizontalLayout_3->addWidget(messageTextEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        submitButton = new QPushButton(Widget);
        submitButton->setObjectName("submitButton");

        verticalLayout->addWidget(submitButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Lastname :", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Firstname :", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Message :", nullptr));
        submitButton->setText(QCoreApplication::translate("Widget", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
