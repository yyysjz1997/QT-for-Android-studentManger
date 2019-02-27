#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addstu.h"  //引入对象类
#include "querystu.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionaddStu_triggered()
{
//    addStu a;
//   // a.show();
//    a.exec(); //模态视图
//    //可以认为是一个死循环，这样局部变量a不会被销毁


    //show  对象不会销毁
    this->a.show();
}

void MainWindow::on_actionqueryStu_triggered()
{
    QueryStu q;
    q.exec();
}
