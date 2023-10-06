#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <vector>
#include <iostream>
#include <QMainWindow>
#include <QVector>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT
    QVector<int> bits = {0,0,0,0,0,0,0,0};
    int total;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int decode();

private slots:


    void on_checkBox1_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
