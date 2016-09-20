#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    //поле с именем - запоминаем, чтобы иметь к нему доступ
    QLineEdit * name;

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    //отобразить экран с полем и кнопкой
    void toFirstScene();
    //отобразить экран с приветствием
    void toSecondScene();
};

#endif // MAINWINDOW_H
