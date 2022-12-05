/********************************************************************************
** Form generated from reading UI file 'suredialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUREDIALOG_H
#define UI_SUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SureDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *sureLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *OkButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *SureDialog)
    {
        if (SureDialog->objectName().isEmpty())
            SureDialog->setObjectName("SureDialog");
        SureDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(SureDialog);
        verticalLayout->setObjectName("verticalLayout");
        sureLabel = new QLabel(SureDialog);
        sureLabel->setObjectName("sureLabel");
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        sureLabel->setFont(font);

        verticalLayout->addWidget(sureLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OkButton = new QPushButton(SureDialog);
        OkButton->setObjectName("OkButton");

        horizontalLayout->addWidget(OkButton);

        cancelButton = new QPushButton(SureDialog);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SureDialog);

        QMetaObject::connectSlotsByName(SureDialog);
    } // setupUi

    void retranslateUi(QDialog *SureDialog)
    {
        SureDialog->setWindowTitle(QCoreApplication::translate("SureDialog", "Dialog", nullptr));
        sureLabel->setText(QCoreApplication::translate("SureDialog", "Are you sure?", nullptr));
        OkButton->setText(QCoreApplication::translate("SureDialog", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("SureDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SureDialog: public Ui_SureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUREDIALOG_H
