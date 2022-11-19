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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *horizontalLayout;
    QSpinBox *numberSpinBox;
    QPushButton *guessButton;
    QPushButton *startOverButton;
    QLabel *messageLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(488, 246);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(Widget);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        titleLabel->setFont(font);

        verticalLayout->addWidget(titleLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        numberSpinBox = new QSpinBox(Widget);
        numberSpinBox->setObjectName("numberSpinBox");
        numberSpinBox->setMinimum(1);
        numberSpinBox->setMaximum(10);

        horizontalLayout->addWidget(numberSpinBox);

        guessButton = new QPushButton(Widget);
        guessButton->setObjectName("guessButton");

        horizontalLayout->addWidget(guessButton);

        startOverButton = new QPushButton(Widget);
        startOverButton->setObjectName("startOverButton");

        horizontalLayout->addWidget(startOverButton);


        verticalLayout->addLayout(horizontalLayout);

        messageLabel = new QLabel(Widget);
        messageLabel->setObjectName("messageLabel");

        verticalLayout->addWidget(messageLabel);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Guess My Number", nullptr));
        titleLabel->setText(QCoreApplication::translate("Widget", "Guess My Number", nullptr));
        guessButton->setText(QCoreApplication::translate("Widget", "Guess", nullptr));
        startOverButton->setText(QCoreApplication::translate("Widget", "Start Over", nullptr));
        messageLabel->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
