#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_switch_2_toggled(bool checked)
{
    if(ui->switch_2->en){
        ui->lcdNumber->display(1);
    } else {
        ui->lcdNumber->display(0);
    }

}




