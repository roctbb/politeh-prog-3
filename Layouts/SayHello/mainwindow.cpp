#include "mainwindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QWidget>
#include <QLabel>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWindowTitle("Вежливое приложение");
    toFirstScene();
}



MainWindow::~MainWindow()
{

}

void MainWindow::toFirstScene()
{
    auto layout = new QHBoxLayout;

    auto sayHelloButton = new QPushButton("Привет!");
    auto label = new QLabel("Ваше имя:");
    this->name=new QLineEdit;

    connect(sayHelloButton, SIGNAL(clicked(bool)), this, SLOT(toSecondScene()));

    layout->addWidget(label);
    layout->addWidget(this->name);
    layout->addWidget(sayHelloButton);


    auto widget = new QWidget;
    widget->setLayout(layout);

    this->setCentralWidget(widget);
}

void MainWindow::toSecondScene()
{
    auto layout = new QVBoxLayout;
    auto backButton = new QPushButton("Назад!");
    auto nameLabel = new QLabel("Привет, "+this->name->text()+"!");

    connect(backButton, SIGNAL(clicked(bool)), this, SLOT(toFirstScene()));

    layout->addWidget(nameLabel);
    layout->addWidget(backButton);

    auto widget = new QWidget;
    widget->setLayout(layout);

    this->setCentralWidget(widget);
}
