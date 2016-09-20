#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window = new QWidget;
    QVBoxLayout *col = new QVBoxLayout;
    for (int i=0; i<5; i++)
    {
        QHBoxLayout *layout = new QHBoxLayout;
        for (int i=0; i<5; i++)
        {
            QPushButton * b = new QPushButton("Button");
            layout->addWidget(b);
        }
        layout->setStretch(1,2);
        layout->setStretch(2,3);
        col->addLayout(layout);


    }
    window->setLayout(col);
    window->show();

    return a.exec();
}
