#include "mainwindow.h"
#include <QApplication>
#include<QMenuBar>
#include <QMenu>
#include <QStatusBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow{parent}
{
    QPushButton * button = new QPushButton("Hello",this);
    setCentralWidget(button);

    //Declare Quit Action

    quitAction = new QAction("Quit");
    connect(quitAction,&QAction::triggered,[=](){
        QApplication::quit();
    });

    //Add menus
    QMenu * fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(quitAction);
    menuBar()->addMenu("Edit");
    menuBar()->addMenu("Window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Help");

    //Add status bar message

    statusBar()->showMessage("Uploading file...",0);

}


QSize MainWindow::sizeHint() const
{
    return QSize(800,500);
}
