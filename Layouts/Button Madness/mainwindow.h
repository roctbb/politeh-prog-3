#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWindow>
#include <QHBoxLayout>
#include <QPushButton>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int num = 0;
public slots:
    void changeColor();
};

#endif // MAINWINDOW_H
