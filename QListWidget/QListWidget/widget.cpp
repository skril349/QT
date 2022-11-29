#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->listWidget->setSelectionMode(QAbstractItemView::MultiSelection);

    listData <<"Item1"<<"Item2"<<"Item3";
    ui->listWidget->addItems(listData);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_addButton_clicked()
{

    ui->listWidget->addItem("Another item");
}


void Widget::on_deleteButton_clicked()
{
ui->listWidget->takeItem(ui->listWidget->currentRow());
}


void Widget::on_selectedButton_clicked()
{
    QList<QListWidgetItem*> list = ui->listWidget->selectedItems();
    for (int i = 0; i<list.count();i++){
        qDebug()<<"Selected item: "<<list.at(i)->text()<<"row number id: "<< ui->listWidget->row(list.at(i));
    }
}

