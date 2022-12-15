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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *WritePushButton;
    QPushButton *ReadPushButton;
    QPushButton *CopyPushButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *SourceLineEdit;
    QPushButton *selectFilePushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *DestinationLineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(560, 311);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        WritePushButton = new QPushButton(Widget);
        WritePushButton->setObjectName("WritePushButton");

        verticalLayout->addWidget(WritePushButton);

        ReadPushButton = new QPushButton(Widget);
        ReadPushButton->setObjectName("ReadPushButton");

        verticalLayout->addWidget(ReadPushButton);

        CopyPushButton = new QPushButton(Widget);
        CopyPushButton->setObjectName("CopyPushButton");

        verticalLayout->addWidget(CopyPushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(Widget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        SourceLineEdit = new QLineEdit(Widget);
        SourceLineEdit->setObjectName("SourceLineEdit");

        horizontalLayout_2->addWidget(SourceLineEdit);

        selectFilePushButton = new QPushButton(Widget);
        selectFilePushButton->setObjectName("selectFilePushButton");

        horizontalLayout_2->addWidget(selectFilePushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        DestinationLineEdit = new QLineEdit(Widget);
        DestinationLineEdit->setObjectName("DestinationLineEdit");

        horizontalLayout_3->addWidget(DestinationLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        WritePushButton->setText(QCoreApplication::translate("Widget", "Write", nullptr));
        ReadPushButton->setText(QCoreApplication::translate("Widget", "Read", nullptr));
        CopyPushButton->setText(QCoreApplication::translate("Widget", "Copy", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Source File", nullptr));
        selectFilePushButton->setText(QCoreApplication::translate("Widget", "Select File", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Destination File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
