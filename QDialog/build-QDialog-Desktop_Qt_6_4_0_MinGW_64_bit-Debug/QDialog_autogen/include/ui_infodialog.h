/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *positionLineEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *windowsButton;
    QRadioButton *macButton;
    QRadioButton *linuxButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName("InfoDialog");
        InfoDialog->resize(399, 340);
        verticalLayout_2 = new QVBoxLayout(InfoDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(InfoDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        positionLineEdit = new QLineEdit(InfoDialog);
        positionLineEdit->setObjectName("positionLineEdit");

        horizontalLayout->addWidget(positionLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBox = new QGroupBox(InfoDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        windowsButton = new QRadioButton(groupBox);
        windowsButton->setObjectName("windowsButton");

        verticalLayout->addWidget(windowsButton);

        macButton = new QRadioButton(groupBox);
        macButton->setObjectName("macButton");

        verticalLayout->addWidget(macButton);

        linuxButton = new QRadioButton(groupBox);
        linuxButton->setObjectName("linuxButton");

        verticalLayout->addWidget(linuxButton);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(InfoDialog);
        okButton->setObjectName("okButton");

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(InfoDialog);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InfoDialog", "Position:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InfoDialog", "Favourite OS: ", nullptr));
        windowsButton->setText(QCoreApplication::translate("InfoDialog", "Windows", nullptr));
        macButton->setText(QCoreApplication::translate("InfoDialog", "Mac", nullptr));
        linuxButton->setText(QCoreApplication::translate("InfoDialog", "Linux", nullptr));
        okButton->setText(QCoreApplication::translate("InfoDialog", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("InfoDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
