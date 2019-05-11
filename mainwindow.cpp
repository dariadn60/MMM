#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "calkowanie.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap rownanko("rownanko.jpg");
    ui->rownanie->setPixmap(rownanko); 
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_parametr_a_valueChanged(double arg1)
{
    parametr_a = arg1;
    qDebug()<< parametr_a;
}


void MainWindow::on_parametr_b_valueChanged(double arg2)
{
    parametr_b = arg2;
}

void MainWindow::on_parametr_A_valueChanged(double arg3)
{
    parametr_A = arg3;
}

void MainWindow::on_sygnal_u_currentIndexChanged(int index)
{
    index_wejscie = index;
}
