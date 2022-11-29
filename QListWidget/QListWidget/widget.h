#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QStringList listData;


private slots:
    void on_addButton_clicked();

    void on_deleteButton_clicked();

    void on_selectedButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
