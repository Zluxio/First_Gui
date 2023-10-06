#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cmath>
#include <QVector>

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


void MainWindow::on_checkBox1_toggled(bool checked)
{

    if(checked == true) {

    bits.replace(0,1);
    ui->lcdNumber->display(1);

    } else if (checked == false) {

    bits.replace(0,0);

    ui->lcdNumber->display(0);
    }

}



int MainWindow::decode(){



    for(int i = 0; i < 9; i++){



        if (bits[i] == 0){
            return 0;
        } else if (bits[i] == 1) {
            return 1;

        }

    }
}
