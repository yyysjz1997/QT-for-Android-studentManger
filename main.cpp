#include "addstu.h"
#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    addStu w;
//    w.show();
    MainWindow m;
    m.show();

    return a.exec();
}
