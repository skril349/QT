#ifndef ROCKWIDGET_H
#define ROCKWIDGET_H

#include <QWidget>

class RockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RockWidget(QWidget *parent = nullptr);

private slots:
    void butonClicked();
private:
    QSize sizeHint() const;

};

#endif // ROCKWIDGET_H
