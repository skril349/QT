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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLabel *CaloryCountLabel;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *TimeLabel;
    QDoubleSpinBox *TimeSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *WeightLabel;
    QDoubleSpinBox *WeightSpinBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *SlopeLabel;
    QComboBox *SlopeComboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *SpeedLabel;
    QDoubleSpinBox *SpeedSpinBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(410, 177);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 20, 297, 124));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_6->addWidget(label);

        CaloryCountLabel = new QLabel(layoutWidget);
        CaloryCountLabel->setObjectName("CaloryCountLabel");
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        CaloryCountLabel->setFont(font1);
        CaloryCountLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 48, 12);"));

        horizontalLayout_6->addWidget(CaloryCountLabel);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        TimeLabel = new QLabel(layoutWidget);
        TimeLabel->setObjectName("TimeLabel");

        horizontalLayout->addWidget(TimeLabel);

        TimeSpinBox = new QDoubleSpinBox(layoutWidget);
        TimeSpinBox->setObjectName("TimeSpinBox");

        horizontalLayout->addWidget(TimeSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        WeightLabel = new QLabel(layoutWidget);
        WeightLabel->setObjectName("WeightLabel");

        horizontalLayout_2->addWidget(WeightLabel);

        WeightSpinBox = new QDoubleSpinBox(layoutWidget);
        WeightSpinBox->setObjectName("WeightSpinBox");

        horizontalLayout_2->addWidget(WeightSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        SlopeLabel = new QLabel(layoutWidget);
        SlopeLabel->setObjectName("SlopeLabel");

        horizontalLayout_3->addWidget(SlopeLabel);

        SlopeComboBox = new QComboBox(layoutWidget);
        SlopeComboBox->addItem(QString());
        SlopeComboBox->setObjectName("SlopeComboBox");

        horizontalLayout_3->addWidget(SlopeComboBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        SpeedLabel = new QLabel(layoutWidget);
        SpeedLabel->setObjectName("SpeedLabel");

        horizontalLayout_4->addWidget(SpeedLabel);

        SpeedSpinBox = new QDoubleSpinBox(layoutWidget);
        SpeedSpinBox->setObjectName("SpeedSpinBox");

        horizontalLayout_4->addWidget(SpeedSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_5);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Calory Counter", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Calory Count:", nullptr));
        CaloryCountLabel->setText(QCoreApplication::translate("Widget", "100", nullptr));
        TimeLabel->setText(QCoreApplication::translate("Widget", "Time (h):", nullptr));
        WeightLabel->setText(QCoreApplication::translate("Widget", "Weight(Kg):", nullptr));
        SlopeLabel->setText(QCoreApplication::translate("Widget", "Slope:", nullptr));
        SlopeComboBox->setItemText(0, QCoreApplication::translate("Widget", "Level", nullptr));

        SpeedLabel->setText(QCoreApplication::translate("Widget", "Speed(Km/h):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
