#include "mainwindow.h"
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QWidget>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    auto grid = new QGridLayout;

    auto login = new QLineEdit;
    auto password = new QLineEdit;

    password->setEchoMode(QLineEdit::Password); //для звездочек при вводе

    grid->addWidget(new QLabel("Вход в систему:"), 1,1,1,3);

    grid->addWidget(new QLabel("Логин:"), 2,1);
    grid->addWidget(login, 2,2,1,2);

    grid->addWidget(new QLabel("Пароль:"), 3,1);
    grid->addWidget(password, 3,2,1,2);

    grid->addWidget(new QPushButton("Войти"), 4,1,1,3);

    grid->setColumnMinimumWidth(0,80);
    grid->setColumnMinimumWidth(1,80);
    grid->setColumnMinimumWidth(2,80);
    grid->setColumnMinimumWidth(3,80);
    grid->setColumnMinimumWidth(4,80);

    grid->setRowMinimumHeight(1,50);
    grid->setRowMinimumHeight(0,50);
    grid->setRowMinimumHeight(5,50);

    grid->setColumnStretch(0,1);
    grid->setColumnStretch(4,1);
    grid->setRowStretch(0,1);
    grid->setRowStretch(5,1);

    auto widget = new QWidget;
    widget->setLayout(grid);

    setCentralWidget(widget);


}

MainWindow::~MainWindow()
{

}
