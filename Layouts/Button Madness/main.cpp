#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QGridLayout>
#include <QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow *window = new MainWindow();

    QGridLayout *table = new QGridLayout;
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            QPushButton * b = new QPushButton(" ");
            window->connect(b, SIGNAL(clicked(bool)), window, SLOT(changeColor()));
            table->addWidget(b, i,j);
        }
    }
    window->setLayout(table);
    window->show();


    return a.exec();
}
