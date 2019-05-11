#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    double parametr_a;
    double parametr_b;
    double parametr_A;
    double index_wejscie;


private slots:
    void on_parametr_a_valueChanged(double arg1);
    void on_parametr_b_valueChanged(double arg2);
    void on_parametr_A_valueChanged(double arg3);
    void on_sygnal_u_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
