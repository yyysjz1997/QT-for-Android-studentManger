#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addstu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionaddStu_triggered();

    void on_actionqueryStu_triggered();

private:
    Ui::MainWindow *ui;
    addStu a;
};

#endif // MAINWINDOW_H
