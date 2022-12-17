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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *ChooseDirButton;
    QPushButton *CreateDirButton;
    QPushButton *ExistsDirButton;
    QPushButton *DirOrFileButton;
    QPushButton *FolderContent;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName("listWidget");

        verticalLayout_2->addWidget(listWidget);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName("textEdit");

        verticalLayout_2->addWidget(textEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        ChooseDirButton = new QPushButton(Widget);
        ChooseDirButton->setObjectName("ChooseDirButton");

        verticalLayout->addWidget(ChooseDirButton);

        CreateDirButton = new QPushButton(Widget);
        CreateDirButton->setObjectName("CreateDirButton");

        verticalLayout->addWidget(CreateDirButton);

        ExistsDirButton = new QPushButton(Widget);
        ExistsDirButton->setObjectName("ExistsDirButton");

        verticalLayout->addWidget(ExistsDirButton);

        DirOrFileButton = new QPushButton(Widget);
        DirOrFileButton->setObjectName("DirOrFileButton");

        verticalLayout->addWidget(DirOrFileButton);

        FolderContent = new QPushButton(Widget);
        FolderContent->setObjectName("FolderContent");

        verticalLayout->addWidget(FolderContent);

        verticalSpacer = new QSpacerItem(20, 98, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        ChooseDirButton->setText(QCoreApplication::translate("Widget", "Choose Dir", nullptr));
        CreateDirButton->setText(QCoreApplication::translate("Widget", "Create Dir", nullptr));
        ExistsDirButton->setText(QCoreApplication::translate("Widget", "Dir exists?", nullptr));
        DirOrFileButton->setText(QCoreApplication::translate("Widget", "Dir or File", nullptr));
        FolderContent->setText(QCoreApplication::translate("Widget", "Folder Content", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
