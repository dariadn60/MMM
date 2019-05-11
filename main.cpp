#include "mainwindow.h"
#include "calkowanie.h"
#include "pobudzenie.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;        
    Calkowanie wartosci;

    wartosci.parametr_a = w.parametr_a;
    wartosci.parametr_b = w.parametr_b;
    wartosci.parametr_A = w.parametr_A;
   // wartosci.u = w.index_wejscie;

    wartosci.calk();
    w.show();

    return a.exec();
}
