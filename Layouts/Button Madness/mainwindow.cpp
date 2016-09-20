#include "mainwindow.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QPalette>
#include <QColor>


MainWindow::MainWindow(QWidget *parent)
{
}

MainWindow::~MainWindow()
{

}
void MainWindow::changeColor()
{
    QPushButton * b = (QPushButton *)sender();
    b->setText(QString::number(num));
    num++;
}
